"""
Tests for the CFS protocol message structures.

This module contains tests for the DataPackage class from the creality_cfs module,
verifying that it correctly parses and reconstructs binary messages.
"""

import pytest
from extras.creality_cfs import DataPackage


@pytest.mark.parametrize(
    'msg', [
        # samples captured with interceptty during multi-color printing
        pytest.param(b'\xf7\x01\x03\x00\xa3\xdd', id='loader-slave-1'),
        pytest.param(b'\xf7\x02\x03\x00\xa3\xdd', id='loader-slave-2'),
        pytest.param(b'\xf7\x03\x03\x00\xa3\xdd', id='loader-slave-3'),
        pytest.param(b'\xf7\x04\x03\x00\xa3\xdd', id='loader-slave-4'),
        pytest.param(b'\xf7\x01\x05\xff\x04\x00\x01\x90', id='set-box-mode-slave-1'),
        pytest.param(b'\xf7\x01\x03\xff\x14\x06', id='get-version-sn-slave-1'),
        pytest.param(b'\xf7\x01\x05\xff\x0d\x0f\x01\x69', id='set-pre-loading-slave-1'),
        pytest.param(b'\xf7\x01\x03\xff\x0a\x5c', id='get-box-state-slave-1'),
        pytest.param(b'\xf7\xfe\x05\x00\xa1\xfe\xfe\xf8', id='unknown-all-boxes'),
        pytest.param(b'\xf7\x01\x03\x00\xa2\xda', id='unknown-slave-1'),
        # b'\xf7\x01\x03\xff\xa2\xda',  # invalid CRC8 - commented out for now
    ]
)
def test_transmitted_messages(msg):
    """
    Test that DataPackage correctly parses and reconstructs messages transmitted to the CFS.

    This test verifies that when a binary message is parsed into a DataPackage object,
    the object's message_block property matches the original binary message.

    Args:
        msg: Binary message to test
    """
    item = DataPackage.loads(msg)
    assert item.message_block == msg


@pytest.mark.parametrize(
    'msg', [
        pytest.param(b'\xf7\x01\x11\x00\xa3\x01\x00\x5c\x51\x30\x03\x14\x91\xb0\x15\x4c\x30\x39\x33\x48'),
        pytest.param(b'\xf7\x01\x07\x00\x0a\x1c\x14\x00\x00\x48'),
        pytest.param(b'\xf7\x01\x03\x00\x04\xa1'),
        pytest.param(
            b'\xf7\x01\x19\x00\x14\x31\x31\x30\x31\x30\x30\x30\x30\x38\x34\x33\x32\x31\x35\x42\x36\x32\x35\x41\x48\x53'
            b'\x43\x84',
        ),
        pytest.param(b'\xf7\x01\x03\x00\x0d\x9e'),
        pytest.param(b'\xf7\x01\x11\x00\xa2\x01\x00\x5c\x51\x30\x03\x14\x91\xb0\x15\x4c\x30\x39\x33\xfd'),
    ]
)
def test_received_messages(msg):
    """
    Test that DataPackage correctly parses and reconstructs messages received from the CFS.

    This test verifies that when a binary message is parsed into a DataPackage object,
    the object's message_block property matches the original binary message.

    Args:
        msg: Binary message to test
    """
    item = DataPackage.loads(msg)
    assert item.message_block == msg
