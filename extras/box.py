import logging
from .creality_cfs import CFSWrapper  # ← This replaces the .so loader

logger = logging.getLogger(__name__)

def load_config(config):
    logger.info("[box.py] load_config() called")
    logger.info(f"[box.py] config section name: {config.get_name()}")
    return CFSWrapper(config)