
undefined * FUN_00160178(int param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int *piVar10;
  code *pcVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int *local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  int *local_50;
  int *local_30 [3];
  
  iVar3 = FUN_00035894(param_1);
  if (iVar3 < 0) {
    piVar10 = (int *)0x0;
    iVar3 = 0x64c2;
    local_60 = (int *)0x0;
    iVar15 = 0x347;
    local_5c = (int *)0x0;
    piVar13 = (int *)0x0;
    piVar5 = (int *)0x0;
    piVar4 = (int *)0x0;
    piVar6 = (int *)0x0;
    local_58 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00035d4c(param_1);
    if (piVar4 == (int *)0x0) {
      iVar3 = 0x64cb;
      iVar15 = 0x348;
      piVar10 = (int *)0x0;
      piVar5 = (int *)0x0;
      piVar6 = (int *)0x0;
      piVar13 = (int *)0x0;
      local_58 = (int *)0x0;
      local_60 = (int *)0x0;
      local_5c = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_00035d4c((int)piVar4);
      if (piVar5 == (int *)0x0) {
        iVar3 = 0x64cd;
        iVar15 = 0x348;
        piVar10 = (int *)0x0;
        piVar6 = (int *)0x0;
        piVar13 = (int *)0x0;
        local_58 = (int *)0x0;
        local_60 = (int *)0x0;
        local_5c = (int *)0x0;
      }
      else {
        FUN_00035ecc(piVar4);
        bVar1 = FUN_00036cd0(piVar5[1],(int)&PyMethod_Type);
        if ((bVar1) && (piVar13 = (int *)piVar5[3], piVar13 != (int *)0x0)) {
          piVar10 = (int *)piVar5[2];
          FUN_00037210(piVar13);
          FUN_00037210(piVar10);
          FUN_00035ecc(piVar5);
          piVar6 = (int *)FUN_00045120((int)piVar10,piVar13);
          piVar5 = piVar10;
        }
        else {
          piVar13 = (int *)0x0;
          piVar6 = (int *)FUN_00045028((int)piVar5);
        }
        FUN_0003674c(piVar13);
        if (piVar6 == (int *)0x0) {
          iVar3 = 0x64dc;
          iVar15 = 0x348;
          piVar10 = (int *)0x0;
          piVar13 = (int *)0x0;
          piVar4 = (int *)0x0;
          local_58 = (int *)0x0;
          local_60 = (int *)0x0;
          local_5c = (int *)0x0;
        }
        else {
          FUN_00035ecc(piVar5);
          iVar3 = FUN_00035894(param_1);
          if (iVar3 < 0) {
            piVar10 = (int *)0x0;
            iVar3 = 0x64df;
            local_60 = (int *)0x0;
            iVar15 = 0x348;
            local_5c = (int *)0x0;
            piVar13 = (int *)0x0;
            piVar5 = (int *)0x0;
            piVar4 = (int *)0x0;
            local_58 = (int *)0x0;
          }
          else {
            FUN_00035ecc(piVar6);
            piVar5 = (int *)FUN_00035d4c(param_1);
            if (piVar5 == (int *)0x0) {
              iVar3 = 0x64e9;
              iVar15 = 0x349;
              piVar10 = (int *)0x0;
              piVar6 = (int *)0x0;
              piVar13 = (int *)0x0;
              piVar4 = (int *)0x0;
              local_58 = (int *)0x0;
              local_60 = (int *)0x0;
              local_5c = (int *)0x0;
            }
            else {
              piVar4 = (int *)FUN_00035d4c((int)piVar5);
              if (piVar4 == (int *)0x0) {
                iVar3 = 0x64eb;
                iVar15 = 0x349;
                piVar10 = (int *)0x0;
                piVar6 = (int *)0x0;
                piVar13 = (int *)0x0;
                local_58 = (int *)0x0;
                local_60 = (int *)0x0;
                local_5c = (int *)0x0;
              }
              else {
                FUN_00035ecc(piVar5);
                bVar1 = FUN_00036cd0(piVar4[1],(int)&PyMethod_Type);
                if ((bVar1) && (piVar13 = (int *)piVar4[3], piVar13 != (int *)0x0)) {
                  piVar10 = (int *)piVar4[2];
                  FUN_00037210(piVar13);
                  FUN_00037210(piVar10);
                  FUN_00035ecc(piVar4);
                  piVar6 = (int *)FUN_00045120((int)piVar10,piVar13);
                  piVar4 = piVar10;
                }
                else {
                  piVar13 = (int *)0x0;
                  piVar6 = (int *)FUN_00045028((int)piVar4);
                }
                FUN_0003674c(piVar13);
                if (piVar6 == (int *)0x0) {
                  iVar3 = 0x64fa;
                  iVar15 = 0x349;
                  piVar10 = (int *)0x0;
                  piVar5 = (int *)0x0;
                  piVar13 = (int *)0x0;
                  local_58 = (int *)0x0;
                  local_60 = (int *)0x0;
                  local_5c = (int *)0x0;
                }
                else {
                  FUN_00035ecc(piVar4);
                  iVar3 = FUN_00035894(param_1);
                  if (iVar3 < 0) {
                    piVar10 = (int *)0x0;
                    iVar3 = 0x64fd;
                    local_60 = (int *)0x0;
                    iVar15 = 0x349;
                    local_5c = (int *)0x0;
                    piVar13 = (int *)0x0;
                    piVar5 = (int *)0x0;
                    piVar4 = (int *)0x0;
                    local_58 = (int *)0x0;
                  }
                  else {
                    FUN_00035ecc(piVar6);
                    piVar5 = (int *)FUN_00035d4c((int)param_2);
                    if (piVar5 == (int *)0x0) {
                      iVar3 = 0x6507;
                      iVar15 = 0x34a;
                      piVar10 = (int *)0x0;
                      piVar6 = (int *)0x0;
                      piVar13 = (int *)0x0;
                      piVar4 = (int *)0x0;
                      local_58 = (int *)0x0;
                      local_60 = (int *)0x0;
                      local_5c = (int *)0x0;
                    }
                    else {
                      bVar1 = FUN_00036cd0(piVar5[1],(int)&PyMethod_Type);
                      if ((bVar1) && (piVar13 = (int *)piVar5[3], piVar13 != (int *)0x0)) {
                        piVar10 = (int *)piVar5[2];
                        FUN_00037210(piVar13);
                        FUN_00037210(piVar10);
                        FUN_00035ecc(piVar5);
                        piVar4 = (int *)FUN_00045120((int)piVar10,piVar13);
                        piVar5 = piVar10;
                      }
                      else {
                        piVar13 = (int *)0x0;
                        piVar4 = (int *)FUN_00045028((int)piVar5);
                      }
                      FUN_0003674c(piVar13);
                      if (piVar4 == (int *)0x0) {
                        iVar3 = 0x6515;
                        iVar15 = 0x34a;
                        piVar10 = (int *)0x0;
                        piVar6 = (int *)0x0;
                        piVar13 = (int *)0x0;
                        local_58 = (int *)0x0;
                        local_60 = (int *)0x0;
                        local_5c = (int *)0x0;
                      }
                      else {
                        FUN_00035ecc(piVar5);
                        piVar5 = (int *)FUN_00035d4c((int)piVar4);
                        if (piVar5 == (int *)0x0) {
                          iVar3 = 0x6518;
                          iVar15 = 0x34a;
                          piVar10 = (int *)0x0;
                          piVar6 = (int *)0x0;
                          piVar13 = (int *)0x0;
                          local_58 = (int *)0x0;
                          local_60 = (int *)0x0;
                          local_5c = (int *)0x0;
                        }
                        else {
                          FUN_00035ecc(piVar4);
                          bVar1 = FUN_00036cd0(piVar5[1],(int)&PyMethod_Type);
                          if ((bVar1) && (piVar13 = (int *)piVar5[3], piVar13 != (int *)0x0)) {
                            piVar10 = (int *)piVar5[2];
                            FUN_00037210(piVar13);
                            FUN_00037210(piVar10);
                            FUN_00035ecc(piVar5);
                            piVar6 = FUN_00044efc(piVar10,piVar13,DAT_001b3c74,&DAT_001b3870);
                            piVar5 = piVar10;
                          }
                          else {
                            piVar13 = (int *)0x0;
                            piVar6 = (int *)FUN_00045120((int)piVar5,DAT_001b3c74);
                          }
                          FUN_0003674c(piVar13);
                          if (piVar6 == (int *)0x0) {
                            iVar3 = 0x6527;
                            iVar15 = 0x34a;
                            piVar10 = (int *)0x0;
                            piVar13 = (int *)0x0;
                            piVar4 = (int *)0x0;
                            local_58 = (int *)0x0;
                            local_60 = (int *)0x0;
                            local_5c = (int *)0x0;
                          }
                          else {
                            FUN_00035ecc(piVar5);
                            iVar3 = FUN_00035894(param_1);
                            if (iVar3 < 0) {
                              piVar10 = (int *)0x0;
                              iVar3 = 0x652a;
                              local_60 = (int *)0x0;
                              iVar15 = 0x34a;
                              local_5c = (int *)0x0;
                              piVar13 = (int *)0x0;
                              piVar5 = (int *)0x0;
                              piVar4 = (int *)0x0;
                              local_58 = (int *)0x0;
                            }
                            else {
                              FUN_00035ecc(piVar6);
                              if (*(int *)(DAT_001b49ec + 0x14) == DAT_001b723c &&
                                  *(int *)(DAT_001b49ec + 0x10) == DAT_001b7238) {
                                if (DAT_001b7240 == (int *)0x0) {
                                  local_5c = (int *)FUN_00035d64(DAT_001b4f6c);
                                }
                                else {
                                  FUN_00037210(DAT_001b7240);
                                  local_5c = DAT_001b7240;
                                }
                              }
                              else {
                                local_5c = FUN_00037574(DAT_001b4f6c,&DAT_001b7238,&DAT_001b7240);
                              }
                              if (local_5c == (int *)0x0) {
                                iVar3 = 0x6534;
                                iVar15 = 0x34b;
                                local_60 = local_5c;
                                piVar10 = (int *)0x0;
                                piVar6 = (int *)0x0;
                                piVar13 = (int *)0x0;
                                piVar4 = (int *)0x0;
                                local_58 = (int *)0x0;
                                piVar5 = local_5c;
                              }
                              else {
                                bVar1 = FUN_00036cd0(local_5c[1],(int)&PyMethod_Type);
                                if ((bVar1) && (piVar13 = (int *)local_5c[3], piVar13 != (int *)0x0)
                                   ) {
                                  piVar5 = (int *)local_5c[2];
                                  piVar10 = local_5c;
                                  FUN_00037210(piVar13);
                                  FUN_00037210(piVar5);
                                  FUN_00035ecc(local_5c);
                                  piVar6 = FUN_00044efc(piVar5,piVar13,param_2,piVar10);
                                  local_5c = piVar5;
                                }
                                else {
                                  piVar13 = (int *)0x0;
                                  piVar6 = (int *)FUN_00045120((int)local_5c,param_2);
                                }
                                FUN_0003674c(piVar13);
                                if (piVar6 == (int *)0x0) {
                                  iVar3 = 0x6542;
                                  iVar15 = 0x34b;
                                  piVar10 = (int *)0x0;
                                  piVar13 = (int *)0x0;
                                  piVar4 = (int *)0x0;
                                  local_58 = (int *)0x0;
                                  local_60 = (int *)0x0;
                                  piVar5 = local_5c;
                                  local_5c = (int *)0x0;
                                }
                                else {
                                  FUN_00035ecc(local_5c);
                                  iVar3 = FUN_00035894(param_1);
                                  if (iVar3 < 0) {
                                    piVar10 = (int *)0x0;
                                    iVar3 = 0x6545;
                                    local_60 = (int *)0x0;
                                    iVar15 = 0x34b;
                                    local_5c = (int *)0x0;
                                    piVar13 = (int *)0x0;
                                    piVar4 = (int *)0x0;
                                    local_58 = (int *)0x0;
                                    piVar5 = (int *)0x0;
                                  }
                                  else {
                                    FUN_00035ecc(piVar6);
                                    if (*(int *)(DAT_001b49ec + 0x14) == DAT_001b724c &&
                                        *(int *)(DAT_001b49ec + 0x10) == DAT_001b7248) {
                                      if (DAT_001b7250 == (int *)0x0) {
                                        local_5c = (int *)FUN_00035d64(DAT_001b4ee8);
                                      }
                                      else {
                                        FUN_00037210(DAT_001b7250);
                                        local_5c = DAT_001b7250;
                                      }
                                    }
                                    else {
                                      local_5c = FUN_00037574(DAT_001b4ee8,&DAT_001b7248,
                                                              &DAT_001b7250);
                                    }
                                    if (local_5c == (int *)0x0) {
                                      iVar3 = 0x654f;
                                      iVar15 = 0x34c;
                                      local_60 = local_5c;
                                      piVar10 = (int *)0x0;
                                      piVar6 = (int *)0x0;
                                      piVar13 = (int *)0x0;
                                      piVar4 = (int *)0x0;
                                      local_58 = (int *)0x0;
                                      piVar5 = local_5c;
                                    }
                                    else {
                                      bVar1 = FUN_00036cd0(local_5c[1],(int)&PyMethod_Type);
                                      if ((bVar1) &&
                                         (piVar13 = (int *)local_5c[3], piVar13 != (int *)0x0)) {
                                        piVar10 = (int *)local_5c[2];
                                        FUN_00037210(piVar13);
                                        FUN_00037210(piVar10);
                                        FUN_00035ecc(local_5c);
                                        piVar6 = (int *)FUN_00045120((int)piVar10,piVar13);
                                        local_5c = piVar10;
                                      }
                                      else {
                                        piVar13 = (int *)0x0;
                                        piVar6 = (int *)FUN_00045028((int)local_5c);
                                      }
                                      FUN_0003674c(piVar13);
                                      if (piVar6 == (int *)0x0) {
                                        iVar3 = 0x655d;
                                        iVar15 = 0x34c;
                                        piVar10 = (int *)0x0;
                                        piVar13 = (int *)0x0;
                                        piVar4 = (int *)0x0;
                                        local_58 = (int *)0x0;
                                        local_60 = (int *)0x0;
                                        piVar5 = local_5c;
                                        local_5c = (int *)0x0;
                                      }
                                      else {
                                        FUN_00035ecc(local_5c);
                                        iVar3 = FUN_00035894(param_1);
                                        if (iVar3 < 0) {
                                          piVar10 = (int *)0x0;
                                          iVar3 = 0x6560;
                                          local_60 = (int *)0x0;
                                          iVar15 = 0x34c;
                                          local_5c = (int *)0x0;
                                          piVar13 = (int *)0x0;
                                          piVar4 = (int *)0x0;
                                          local_58 = (int *)0x0;
                                          piVar5 = (int *)0x0;
                                        }
                                        else {
                                          FUN_00035ecc(piVar6);
                                          if (*(int *)(DAT_001b49ec + 0x14) == DAT_001b725c &&
                                              *(int *)(DAT_001b49ec + 0x10) == DAT_001b7258) {
                                            if (DAT_001b7260 == (int *)0x0) {
                                              local_5c = (int *)FUN_00035d64(DAT_001b4f0c);
                                            }
                                            else {
                                              FUN_00037210(DAT_001b7260);
                                              local_5c = DAT_001b7260;
                                            }
                                          }
                                          else {
                                            local_5c = FUN_00037574(DAT_001b4f0c,&DAT_001b7258,
                                                                    &DAT_001b7260);
                                          }
                                          if (local_5c == (int *)0x0) {
                                            iVar3 = 0x656a;
                                            iVar15 = 0x34d;
                                            local_60 = local_5c;
                                            piVar10 = (int *)0x0;
                                            piVar6 = (int *)0x0;
                                            piVar13 = (int *)0x0;
                                            piVar4 = (int *)0x0;
                                            local_58 = (int *)0x0;
                                            piVar5 = local_5c;
                                          }
                                          else {
                                            bVar1 = FUN_00036cd0(local_5c[1],(int)&PyMethod_Type);
                                            if ((bVar1) &&
                                               (piVar13 = (int *)local_5c[3], piVar13 != (int *)0x0)
                                               ) {
                                              piVar5 = (int *)local_5c[2];
                                              piVar10 = local_5c;
                                              FUN_00037210(piVar13);
                                              FUN_00037210(piVar5);
                                              FUN_00035ecc(local_5c);
                                              piVar6 = FUN_00044efc(piVar5,piVar13,param_2,piVar10);
                                              local_5c = piVar5;
                                            }
                                            else {
                                              piVar13 = (int *)0x0;
                                              piVar6 = (int *)FUN_00045120((int)local_5c,param_2);
                                            }
                                            FUN_0003674c(piVar13);
                                            if (piVar6 == (int *)0x0) {
                                              iVar3 = 0x6578;
                                              iVar15 = 0x34d;
                                              piVar10 = (int *)0x0;
                                              piVar13 = (int *)0x0;
                                              piVar4 = (int *)0x0;
                                              local_58 = (int *)0x0;
                                              local_60 = (int *)0x0;
                                              piVar5 = local_5c;
                                              local_5c = (int *)0x0;
                                            }
                                            else {
                                              FUN_00035ecc(local_5c);
                                              iVar3 = FUN_00035894(param_1);
                                              if (iVar3 < 0) {
                                                piVar10 = (int *)0x0;
                                                iVar3 = 0x657b;
                                                local_60 = (int *)0x0;
                                                iVar15 = 0x34d;
                                                local_5c = (int *)0x0;
                                                piVar13 = (int *)0x0;
                                                piVar4 = (int *)0x0;
                                                local_58 = (int *)0x0;
                                                piVar5 = (int *)0x0;
                                              }
                                              else {
                                                FUN_00035ecc(piVar6);
                                                piVar6 = (int *)FUN_00035d4c((int)param_2);
                                                if (piVar6 == (int *)0x0) {
                                                  iVar3 = 0x6585;
                                                  iVar15 = 0x34e;
                                                  piVar10 = (int *)0x0;
                                                  piVar13 = (int *)0x0;
                                                  piVar4 = (int *)0x0;
                                                  local_58 = (int *)0x0;
                                                  local_60 = (int *)0x0;
                                                  piVar5 = (int *)0x0;
                                                  local_5c = (int *)0x0;
                                                }
                                                else {
                                                  local_5c = (int *)FUN_00035ca4((int)piVar6,
                                                                                 DAT_001b3abc,0);
                                                  if (local_5c == (int *)0x0) {
                                                    iVar3 = 0x6587;
                                                    iVar15 = 0x34e;
                                                    piVar10 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    FUN_00035ecc(piVar6);
                                                    if (*(int *)(DAT_001b49ec + 0x14) ==
                                                        DAT_001b726c &&
                                                        *(int *)(DAT_001b49ec + 0x10) ==
                                                        DAT_001b7268) {
                                                      if (DAT_001b7270 == (int *)0x0) {
                                                        piVar6 = (int *)FUN_00035d64(DAT_001b4fa0);
                                                      }
                                                      else {
                                                        FUN_00037210(DAT_001b7270);
                                                        piVar6 = DAT_001b7270;
                                                      }
                                                    }
                                                    else {
                                                      piVar6 = FUN_00037574(DAT_001b4fa0,
                                                                            &DAT_001b7268,
                                                                            &DAT_001b7270);
                                                    }
                                                    if (piVar6 == (int *)0x0) {
                                                      iVar3 = 0x6594;
                                                      iVar15 = 0x34f;
                                                      piVar10 = (int *)0x0;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      bVar1 = FUN_00036cd0(piVar6[1],
                                                                           (int)&PyMethod_Type);
                                                      if (bVar1) {
                                                        piVar4 = (int *)piVar6[3];
                                                        if (piVar4 == (int *)0x0) {
                                                          iVar3 = 0;
                                                        }
                                                        else {
                                                          piVar13 = (int *)piVar6[2];
                                                          FUN_00037210(piVar4);
                                                          FUN_00037210(piVar13);
                                                          iVar3 = 1;
                                                          FUN_00035ecc(piVar6);
                                                          piVar6 = piVar13;
                                                        }
                                                      }
                                                      else {
                                                        iVar3 = 0;
                                                        piVar4 = (int *)0x0;
                                                      }
                                                      iVar15 = piVar6[1];
                                                      bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyFunction_Type);
                                                  if (bVar1) {
                                                    local_30[0] = param_2;
                                                    local_30[1] = local_5c;
                                                    piVar5 = FUN_000407c8((int)piVar6,
                                                                          (int)(local_30 + -iVar3),
                                                                          iVar3 + 2);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x65a5;
                                                      iVar15 = 0x34f;
                                                      piVar10 = (int *)0x0;
                                                      piVar13 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
LAB_00160afc:
                                                      FUN_0003674c(piVar4);
LAB_00160b04:
                                                      FUN_00035ecc(piVar6);
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x65c3;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x34f;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar5);
                                                        iVar3 = FUN_00035894(param_1);
                                                        if (iVar3 < 0) {
                                                          piVar10 = (int *)0x0;
                                                          iVar3 = 0x65cd;
                                                          local_60 = (int *)0x0;
                                                          iVar15 = 0x350;
                                                          piVar13 = (int *)0x0;
                                                          piVar4 = (int *)0x0;
                                                          piVar6 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          iVar3 = FUN_00035894(param_1);
                                                          if (iVar3 < 0) {
                                                            piVar10 = (int *)0x0;
                                                            iVar3 = 0x65d6;
                                                            local_60 = (int *)0x0;
                                                            iVar15 = 0x351;
                                                            piVar13 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            piVar6 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            piVar5 = (int *)0x0;
                                                          }
                                                          else {
                                                            iVar3 = FUN_00035894(param_1);
                                                            if (iVar3 < 0) {
                                                              piVar10 = (int *)0x0;
                                                              iVar3 = 0x65df;
                                                              local_60 = (int *)0x0;
                                                              iVar15 = 0x352;
                                                              piVar13 = (int *)0x0;
                                                              piVar4 = (int *)0x0;
                                                              piVar6 = (int *)0x0;
                                                              local_58 = (int *)0x0;
                                                              piVar5 = (int *)0x0;
                                                            }
                                                            else {
                                                              iVar3 = FUN_00035894(param_1);
                                                              if (iVar3 < 0) {
                                                                piVar10 = (int *)0x0;
                                                                iVar3 = 0x65e8;
                                                                local_60 = (int *)0x0;
                                                                iVar15 = 0x353;
                                                                piVar13 = (int *)0x0;
                                                                piVar4 = (int *)0x0;
                                                                piVar6 = (int *)0x0;
                                                                local_58 = (int *)0x0;
                                                                piVar5 = (int *)0x0;
                                                              }
                                                              else {
                                                                iVar3 = FUN_00035894(param_1);
                                                                if (iVar3 < 0) {
                                                                  piVar10 = (int *)0x0;
                                                                  iVar3 = 0x65f1;
                                                                  local_60 = (int *)0x0;
                                                                  iVar15 = 0x354;
                                                                  piVar13 = (int *)0x0;
                                                                  piVar4 = (int *)0x0;
                                                                  piVar6 = (int *)0x0;
                                                                  local_58 = (int *)0x0;
                                                                  piVar5 = (int *)0x0;
                                                                }
                                                                else {
                                                                  iVar3 = FUN_00035894(param_1);
                                                                  if (iVar3 < 0) {
                                                                    piVar10 = (int *)0x0;
                                                                    iVar3 = 0x65fa;
                                                                    local_60 = (int *)0x0;
                                                                    iVar15 = 0x355;
                                                                    piVar13 = (int *)0x0;
                                                                    piVar4 = (int *)0x0;
                                                                    piVar6 = (int *)0x0;
                                                                    local_58 = (int *)0x0;
                                                                    piVar5 = (int *)0x0;
                                                                  }
                                                                  else {
                                                                    iVar3 = FUN_00035894(param_1);
                                                                    if (iVar3 < 0) {
                                                                      piVar10 = (int *)0x0;
                                                                      iVar3 = 0x6603;
                                                                      local_60 = (int *)0x0;
                                                                      iVar15 = 0x356;
                                                                      piVar13 = (int *)0x0;
                                                                      piVar4 = (int *)0x0;
                                                                      piVar6 = (int *)0x0;
                                                                      local_58 = (int *)0x0;
                                                                      piVar5 = (int *)0x0;
                                                                    }
                                                                    else {
                                                                      iVar3 = FUN_00035894(param_1);
                                                                      if (iVar3 < 0) {
                                                                        piVar10 = (int *)0x0;
                                                                        iVar3 = 0x660c;
                                                                        local_60 = (int *)0x0;
                                                                        iVar15 = 0x357;
                                                                        piVar13 = (int *)0x0;
                                                                        piVar4 = (int *)0x0;
                                                                        piVar6 = (int *)0x0;
                                                                        local_58 = (int *)0x0;
                                                                        piVar5 = (int *)0x0;
                                                                      }
                                                                      else {
                                                                        piVar6 = (int *)FUN_00035d4c
                                                  (param_1);
                                                  if (piVar6 == (int *)0x0) {
                                                    piVar10 = (int *)0x0;
                                                    iVar3 = 0x6615;
                                                    local_60 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    iVar15 = 0x358;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar13 = (int *)FUN_00035d4c((int)piVar6);
                                                    if (piVar13 == (int *)0x0) {
                                                      iVar3 = 0x6617;
                                                      iVar15 = 0x358;
                                                      piVar10 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      FUN_00035ecc(piVar6);
                                                      piVar6 = (int *)FUN_00035d4c(param_1);
                                                      if (piVar6 == (int *)0x0) {
                                                        iVar3 = 0x661a;
                                                        iVar15 = 0x358;
                                                        piVar10 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        local_60 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        bVar1 = FUN_00036cd0(piVar13[1],
                                                                             (int)&PyMethod_Type);
                                                        if (bVar1) {
                                                          piVar4 = (int *)piVar13[3];
                                                          if (piVar4 == (int *)0x0) {
                                                            iVar3 = 0;
                                                          }
                                                          else {
                                                            piVar10 = (int *)piVar13[2];
                                                            iVar3 = 1;
                                                            FUN_00037210(piVar4);
                                                            FUN_00037210(piVar10);
                                                            FUN_00035ecc(piVar13);
                                                            piVar13 = piVar10;
                                                          }
                                                        }
                                                        else {
                                                          iVar3 = 0;
                                                          piVar4 = (int *)0x0;
                                                        }
                                                        iVar15 = piVar13[1];
                                                        bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyFunction_Type);
                                                  if (bVar1) {
                                                    local_30[0] = DAT_001b7274;
                                                    local_30[1] = piVar6;
                                                    piVar5 = FUN_000407c8((int)piVar13,
                                                                          (int)(local_30 + -iVar3),
                                                                          iVar3 + 2);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x662b;
                                                      iVar15 = 0x358;
                                                      piVar10 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
LAB_00160e24:
                                                      FUN_0003674c(piVar4);
                                                      piVar10 = piVar6;
LAB_00160e30:
                                                      FUN_00035ecc(piVar10);
                                                      FUN_00035ecc(piVar13);
                                                      FUN_00035ecc(piVar5);
                                                      piVar13 = (int *)FUN_00035d4c(param_1);
                                                      if (piVar13 == (int *)0x0) {
                                                        iVar3 = 0x6654;
                                                        iVar15 = 0x359;
                                                        piVar10 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        local_60 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        piVar10 = (int *)FUN_00035d4c((int)piVar13);
                                                        if (piVar10 == (int *)0x0) {
                                                          iVar3 = 0x6656;
                                                          iVar15 = 0x359;
                                                          piVar6 = (int *)0x0;
                                                          piVar4 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          local_60 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          FUN_00035ecc(piVar13);
                                                          piVar13 = (int *)FUN_00035d4c(param_1);
                                                          if (piVar13 == (int *)0x0) {
                                                            iVar3 = 0x6659;
                                                            iVar15 = 0x359;
                                                            piVar6 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            local_60 = (int *)0x0;
                                                            piVar5 = (int *)0x0;
                                                          }
                                                          else {
                                                            bVar1 = FUN_00036cd0(piVar10[1],
                                                                                 (int)&PyMethod_Type
                                                                                );
                                                            if (bVar1) {
                                                              piVar6 = (int *)piVar10[3];
                                                              if (piVar6 == (int *)0x0) {
                                                                iVar3 = 0;
                                                              }
                                                              else {
                                                                piVar5 = (int *)piVar10[2];
                                                                FUN_00037210(piVar6);
                                                                FUN_00037210(piVar5);
                                                                iVar3 = 1;
                                                                FUN_00035ecc(piVar10);
                                                                piVar10 = piVar5;
                                                              }
                                                            }
                                                            else {
                                                              iVar3 = 0;
                                                              piVar6 = (int *)0x0;
                                                            }
                                                            iVar15 = piVar10[1];
                                                            bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyFunction_Type);
                                                  if (bVar1) {
                                                    local_30[0] = DAT_001b5ab8;
                                                    local_30[1] = piVar13;
                                                    piVar5 = FUN_000407c8((int)piVar10,
                                                                          (int)(local_30 + -iVar3),
                                                                          iVar3 + 2);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x666a;
                                                      iVar15 = 0x359;
                                                      piVar4 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
LAB_00161174:
                                                      FUN_0003674c(piVar6);
                                                      piVar4 = piVar13;
LAB_00161180:
                                                      FUN_00035ecc(piVar4);
                                                      FUN_00035ecc(piVar10);
                                                      FUN_00035ecc(piVar5);
                                                      if (*(int *)(DAT_001b49ec + 0x14) ==
                                                          DAT_001b727c &&
                                                          *(int *)(DAT_001b49ec + 0x10) ==
                                                          DAT_001b7278) {
                                                        if (DAT_001b7280 == (int *)0x0) {
                                                          piVar10 = (int *)FUN_00035d64(DAT_001b4b94
                                                                                       );
                                                        }
                                                        else {
                                                          FUN_00037210(DAT_001b7280);
                                                          piVar10 = DAT_001b7280;
                                                        }
                                                      }
                                                      else {
                                                        piVar10 = FUN_00037574(DAT_001b4b94,
                                                                               &DAT_001b7278,
                                                                               &DAT_001b7280);
                                                      }
                                                      if (piVar10 == (int *)0x0) {
                                                        iVar3 = 0x6693;
                                                        iVar15 = 0x35a;
                                                        piVar6 = (int *)0x0;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        local_60 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        piVar4 = (int *)FUN_00035d4c((int)piVar10);
                                                        if (piVar4 == (int *)0x0) {
                                                          iVar3 = 0x6695;
                                                          iVar15 = 0x35a;
                                                          piVar6 = (int *)0x0;
                                                          piVar13 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          local_60 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          FUN_00035ecc(piVar10);
                                                          piVar10 = (int *)FUN_00035d4c((int)piVar4)
                                                          ;
                                                          if (piVar10 == (int *)0x0) {
                                                            iVar3 = 0x6698;
                                                            iVar15 = 0x35a;
                                                            piVar6 = (int *)0x0;
                                                            piVar13 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            local_60 = (int *)0x0;
                                                            piVar5 = (int *)0x0;
                                                          }
                                                          else {
                                                            FUN_00035ecc(piVar4);
                                                            if (*(int *)(DAT_001b49ec + 0x14) ==
                                                                DAT_001b728c &&
                                                                *(int *)(DAT_001b49ec + 0x10) ==
                                                                DAT_001b7288) {
                                                              if (DAT_001b7290 == (int *)0x0) {
                                                                piVar4 = (int *)FUN_00035d64(
                                                  DAT_001b4ba8);
                                                  }
                                                  else {
                                                    FUN_00037210(DAT_001b7290);
                                                    piVar4 = DAT_001b7290;
                                                  }
                                                  }
                                                  else {
                                                    piVar4 = FUN_00037574(DAT_001b4ba8,&DAT_001b7288
                                                                          ,&DAT_001b7290);
                                                  }
                                                  if (piVar4 == (int *)0x0) {
                                                    iVar3 = 0x669b;
                                                    iVar15 = 0x35a;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(piVar10[1],
                                                                         (int)&PyMethod_Type);
                                                    if (bVar1) {
                                                      piVar13 = (int *)piVar10[3];
                                                      if (piVar13 == (int *)0x0) {
                                                        iVar3 = 0;
                                                      }
                                                      else {
                                                        piVar5 = (int *)piVar10[2];
                                                        FUN_00037210(piVar13);
                                                        FUN_00037210(piVar5);
                                                        iVar3 = 1;
                                                        FUN_00035ecc(piVar10);
                                                        piVar10 = piVar5;
                                                      }
                                                    }
                                                    else {
                                                      iVar3 = 0;
                                                      piVar13 = (int *)0x0;
                                                    }
                                                    iVar15 = piVar10[1];
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyFunction_Type);
                                                  if (bVar1) {
                                                    local_30[1] = DAT_001b7294;
                                                    local_30[0] = piVar4;
                                                    piVar5 = FUN_000407c8((int)piVar10,
                                                                          (int)(local_30 + -iVar3),
                                                                          iVar3 + 2);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x66ac;
                                                      iVar15 = 0x35a;
                                                      piVar6 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
LAB_00161454:
                                                      FUN_0003674c(piVar13);
                                                      FUN_00035ecc(piVar4);
LAB_00161464:
                                                      FUN_00035ecc(piVar10);
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x66cc;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x35a;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar5);
                                                        if (*(int *)(DAT_001b49ec + 0x14) ==
                                                            DAT_001b729c &&
                                                            *(int *)(DAT_001b49ec + 0x10) ==
                                                            DAT_001b7298) {
                                                          if (DAT_001b72a0 == (int *)0x0) {
                                                            piVar10 = (int *)FUN_00035d64(
                                                  DAT_001b4b94);
                                                  }
                                                  else {
                                                    FUN_00037210(DAT_001b72a0);
                                                    piVar10 = DAT_001b72a0;
                                                  }
                                                  }
                                                  else {
                                                    piVar10 = FUN_00037574(DAT_001b4b94,
                                                                           &DAT_001b7298,
                                                                           &DAT_001b72a0);
                                                  }
                                                  if (piVar10 == (int *)0x0) {
                                                    iVar3 = 0x66d6;
                                                    iVar15 = 0x35b;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar6 = (int *)FUN_00035d4c((int)piVar10);
                                                    if (piVar6 == (int *)0x0) {
                                                      iVar3 = 0x66d8;
                                                      iVar15 = 0x35b;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      FUN_00035ecc(piVar10);
                                                      piVar10 = (int *)FUN_00035d4c((int)piVar6);
                                                      if (piVar10 == (int *)0x0) {
                                                        iVar3 = 0x66db;
                                                        iVar15 = 0x35b;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        local_60 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar6);
                                                        if (*(int *)(DAT_001b49ec + 0x14) ==
                                                            DAT_001b72ac &&
                                                            *(int *)(DAT_001b49ec + 0x10) ==
                                                            DAT_001b72a8) {
                                                          if (DAT_001b72b0 == (int *)0x0) {
                                                            piVar6 = (int *)FUN_00035d64(
                                                  DAT_001b4ba8);
                                                  }
                                                  else {
                                                    FUN_00037210(DAT_001b72b0);
                                                    piVar6 = DAT_001b72b0;
                                                  }
                                                  }
                                                  else {
                                                    piVar6 = FUN_00037574(DAT_001b4ba8,&DAT_001b72a8
                                                                          ,&DAT_001b72b0);
                                                  }
                                                  if (piVar6 == (int *)0x0) {
                                                    iVar3 = 0x66de;
                                                    iVar15 = 0x35b;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(piVar10[1],
                                                                         (int)&PyMethod_Type);
                                                    if (bVar1) {
                                                      piVar4 = (int *)piVar10[3];
                                                      if (piVar4 == (int *)0x0) {
                                                        iVar3 = 0;
                                                      }
                                                      else {
                                                        piVar13 = (int *)piVar10[2];
                                                        FUN_00037210(piVar4);
                                                        FUN_00037210(piVar13);
                                                        iVar3 = 1;
                                                        FUN_00035ecc(piVar10);
                                                        piVar10 = piVar13;
                                                      }
                                                    }
                                                    else {
                                                      iVar3 = 0;
                                                      piVar4 = (int *)0x0;
                                                    }
                                                    iVar15 = piVar10[1];
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyFunction_Type);
                                                  if (bVar1) {
                                                    local_30[1] = DAT_001b72b4;
                                                    local_30[0] = piVar6;
                                                    piVar5 = FUN_000407c8((int)piVar10,
                                                                          (int)(local_30 + -iVar3),
                                                                          iVar3 + 2);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x66ef;
                                                      iVar15 = 0x35b;
                                                      piVar13 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
LAB_00161764:
                                                      FUN_0003674c(piVar4);
                                                      FUN_00035ecc(piVar6);
LAB_00161774:
                                                      FUN_00035ecc(piVar10);
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x670f;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x35b;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar5);
                                                        if (*(int *)(DAT_001b49ec + 0x14) ==
                                                            DAT_001b72bc &&
                                                            *(int *)(DAT_001b49ec + 0x10) ==
                                                            DAT_001b72b8) {
                                                          if (DAT_001b72c0 == (int *)0x0) {
                                                            piVar10 = (int *)FUN_00035d64(
                                                  DAT_001b4b80);
                                                  }
                                                  else {
                                                    FUN_00037210(DAT_001b72c0);
                                                    piVar10 = DAT_001b72c0;
                                                  }
                                                  }
                                                  else {
                                                    piVar10 = FUN_00037574(DAT_001b4b80,
                                                                           &DAT_001b72b8,
                                                                           &DAT_001b72c0);
                                                  }
                                                  if (piVar10 == (int *)0x0) {
                                                    iVar3 = 0x6719;
                                                    iVar15 = 0x35c;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar13 = (int *)FUN_00035d4c((int)piVar10);
                                                    if (piVar13 == (int *)0x0) {
                                                      iVar3 = 0x671b;
                                                      iVar15 = 0x35c;
                                                      piVar6 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      FUN_00035ecc(piVar10);
                                                      bVar1 = FUN_00036cd0(piVar13[1],
                                                                           (int)&PyMethod_Type);
                                                      if ((bVar1) &&
                                                         (piVar10 = (int *)piVar13[3],
                                                         piVar10 != (int *)0x0)) {
                                                        piVar6 = (int *)piVar13[2];
                                                        FUN_00037210(piVar10);
                                                        FUN_00037210(piVar6);
                                                        FUN_00035ecc(piVar13);
                                                        piVar5 = (int *)FUN_00045120((int)piVar6,
                                                                                     piVar10);
                                                        piVar13 = piVar6;
                                                      }
                                                      else {
                                                        piVar10 = (int *)0x0;
                                                        piVar5 = (int *)FUN_00045028((int)piVar13);
                                                      }
                                                      FUN_0003674c(piVar10);
                                                      if (piVar5 == (int *)0x0) {
                                                        iVar3 = 0x672a;
                                                        iVar15 = 0x35c;
                                                        piVar10 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        local_60 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar13);
                                                        iVar3 = piVar5[1];
                                                        bVar1 = FUN_00036cd0(iVar3,(int)&
                                                  PyTuple_Type);
                                                  if ((bVar1) ||
                                                     (bVar2 = FUN_00036cd0(iVar3,0x1b82b4), bVar2))
                                                  {
                                                    iVar3 = piVar5[2];
                                                    if (iVar3 == 2) {
                                                      piVar13 = (int *)piVar5[3];
                                                      if (bVar1) {
                                                        piVar10 = (int *)piVar5[4];
                                                      }
                                                      else {
                                                        piVar10 = (int *)piVar13[1];
                                                        piVar13 = (int *)*piVar13;
                                                      }
                                                      FUN_00037210(piVar13);
                                                      FUN_00037210(piVar10);
                                                      piVar6 = piVar5;
LAB_0016197c:
                                                      FUN_00035ecc(piVar6);
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        iVar3 = 0x675b;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x35c;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar13);
                                                        puVar8 = &DAT_001b5868;
                                                        iVar3 = FUN_00035894(param_1);
                                                        if (iVar3 < 0) {
                                                          piVar13 = (int *)0x0;
                                                          iVar3 = 0x675d;
                                                          local_60 = (int *)0x0;
                                                          iVar15 = 0x35c;
                                                          piVar4 = (int *)0x0;
                                                          piVar6 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          FUN_00035ecc(piVar10);
                                                          piVar10 = (int *)FUN_00035d4c(param_1);
                                                          if (piVar10 == (int *)0x0) {
                                                            iVar3 = 0x6767;
                                                            iVar15 = 0x35d;
                                                            piVar6 = (int *)0x0;
                                                            piVar13 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            local_60 = (int *)0x0;
                                                            piVar5 = (int *)0x0;
                                                          }
                                                          else {
                                                            piVar13 = (int *)FUN_00035d4c((int)
                                                  piVar10);
                                                  if (piVar13 == (int *)0x0) {
                                                    iVar3 = 0x6769;
                                                    iVar15 = 0x35d;
                                                    piVar6 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    FUN_00035ecc(piVar10);
                                                    bVar1 = FUN_00036cd0(piVar13[1],
                                                                         (int)&PyMethod_Type);
                                                    if ((bVar1) &&
                                                       (piVar10 = (int *)piVar13[3],
                                                       piVar10 != (int *)0x0)) {
                                                      piVar6 = (int *)piVar13[2];
                                                      FUN_00037210(piVar10);
                                                      FUN_00037210(piVar6);
                                                      FUN_00035ecc(piVar13);
                                                      piVar5 = FUN_00044efc(piVar6,piVar10,
                                                                            DAT_001b72d0,puVar8);
                                                      piVar13 = piVar6;
                                                    }
                                                    else {
                                                      piVar10 = (int *)0x0;
                                                      piVar5 = (int *)FUN_00045120((int)piVar13,
                                                                                   DAT_001b72d0);
                                                    }
                                                    FUN_0003674c(piVar10);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x6778;
                                                      iVar15 = 0x35d;
                                                      piVar10 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                    }
                                                    else {
                                                      FUN_00035ecc(piVar13);
                                                      puVar8 = &DAT_001b3870;
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar13 = (int *)0x0;
                                                        iVar3 = 0x677b;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x35d;
                                                        piVar10 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar5);
                                                        piVar13 = (int *)FUN_00035d4c(param_1);
                                                        if (piVar13 == (int *)0x0) {
                                                          iVar3 = 0x6785;
                                                          iVar15 = 0x35e;
                                                          piVar10 = (int *)0x0;
                                                          piVar6 = (int *)0x0;
                                                          piVar4 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          local_60 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          piVar10 = (int *)FUN_00035d4c((int)piVar13
                                                                                       );
                                                          if (piVar10 == (int *)0x0) {
                                                            iVar3 = 0x6787;
                                                            iVar15 = 0x35e;
                                                            piVar6 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            local_60 = (int *)0x0;
                                                            piVar5 = (int *)0x0;
                                                          }
                                                          else {
                                                            FUN_00035ecc(piVar13);
                                                            bVar1 = FUN_00036cd0(piVar10[1],
                                                                                 (int)&PyMethod_Type
                                                                                );
                                                            if ((bVar1) &&
                                                               (piVar13 = (int *)piVar10[3],
                                                               piVar13 != (int *)0x0)) {
                                                              piVar6 = (int *)piVar10[2];
                                                              FUN_00037210(piVar13);
                                                              FUN_00037210(piVar6);
                                                              FUN_00035ecc(piVar10);
                                                              piVar5 = FUN_00044efc(piVar6,piVar13,
                                                                                    DAT_001b72d0,
                                                                                    puVar8);
                                                              piVar10 = piVar6;
                                                            }
                                                            else {
                                                              piVar13 = (int *)0x0;
                                                              piVar5 = (int *)FUN_00045120((int)
                                                  piVar10,DAT_001b72d0);
                                                  }
                                                  FUN_0003674c(piVar13);
                                                  if (piVar5 == (int *)0x0) {
                                                    iVar3 = 0x6796;
                                                    iVar15 = 0x35e;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                  }
                                                  else {
                                                    FUN_00035ecc(piVar10);
                                                    iVar3 = FUN_00035894(param_1);
                                                    if (iVar3 < 0) {
                                                      piVar10 = (int *)0x0;
                                                      iVar3 = 0x6799;
                                                      local_60 = (int *)0x0;
                                                      iVar15 = 0x35e;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
                                                      FUN_00035ecc(piVar5);
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x67a3;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x35f;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        iVar3 = FUN_00035894(param_1);
                                                        if (iVar3 < 0) {
                                                          piVar10 = (int *)0x0;
                                                          iVar3 = 0x67ac;
                                                          local_60 = (int *)0x0;
                                                          iVar15 = 0x360;
                                                          piVar13 = (int *)0x0;
                                                          piVar4 = (int *)0x0;
                                                          piVar6 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          piVar5 = (int *)PyList_New(4);
                                                          if (piVar5 == (int *)0x0) {
                                                            iVar3 = 0x67b5;
                                                            iVar15 = 0x361;
                                                            piVar10 = (int *)0x0;
                                                            piVar6 = (int *)0x0;
                                                            piVar13 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            local_60 = (int *)0x0;
                                                          }
                                                          else {
                                                            piVar13 = (int *)FUN_00037210((int *)&
                                                  _Py_TrueStruct);
                                                  *(undefined **)piVar5[3] = &_Py_TrueStruct;
                                                  piVar13 = (int *)FUN_00037210(piVar13);
                                                  *(undefined **)(piVar5[3] + 4) = &_Py_TrueStruct;
                                                  piVar13 = (int *)FUN_00037210(piVar13);
                                                  *(undefined **)(piVar5[3] + 8) = &_Py_TrueStruct;
                                                  FUN_00037210(piVar13);
                                                  *(undefined **)(piVar5[3] + 0xc) = &_Py_TrueStruct
                                                  ;
                                                  iVar3 = FUN_00035894(param_1);
                                                  if (iVar3 < 0) {
                                                    piVar10 = (int *)0x0;
                                                    iVar3 = 0x67c3;
                                                    local_60 = (int *)0x0;
                                                    iVar15 = 0x361;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                  }
                                                  else {
                                                    FUN_00035ecc(piVar5);
                                                    iVar3 = FUN_00035894(param_1);
                                                    if (iVar3 < 0) {
                                                      piVar10 = (int *)0x0;
                                                      iVar3 = 0x67cd;
                                                      local_60 = (int *)0x0;
                                                      iVar15 = 0x362;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x67d6;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x363;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        iVar3 = FUN_00035894(param_1);
                                                        if (iVar3 < 0) {
                                                          piVar10 = (int *)0x0;
                                                          iVar3 = 0x67df;
                                                          local_60 = (int *)0x0;
                                                          iVar15 = 0x364;
                                                          piVar13 = (int *)0x0;
                                                          piVar4 = (int *)0x0;
                                                          piVar6 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          piVar5 = (int *)PyDict_New();
                                                          if (piVar5 == (int *)0x0) {
                                                            piVar10 = (int *)0x0;
                                                            iVar3 = 0x67e8;
                                                            local_60 = (int *)0x0;
                                                            piVar13 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            piVar6 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            iVar15 = 0x365;
                                                          }
                                                          else {
                                                            iVar3 = PyDict_SetItem(piVar5,
                                                  DAT_001b3d04,&_Py_NoneStruct);
                                                  if (iVar3 < 0) {
                                                    piVar10 = (int *)0x0;
                                                    iVar3 = 0x67ea;
                                                    local_60 = (int *)0x0;
                                                    iVar15 = 0x365;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                  }
                                                  else {
                                                    iVar3 = PyDict_SetItem(piVar5,DAT_001b5db0,
                                                                           &_Py_NoneStruct);
                                                    if (iVar3 < 0) {
                                                      piVar10 = (int *)0x0;
                                                      iVar3 = 0x67eb;
                                                      local_60 = (int *)0x0;
                                                      iVar15 = 0x365;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x67ec;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x365;
                                                        piVar13 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                      }
                                                      else {
                                                        FUN_00035ecc(piVar5);
                                                        piVar10 = (int *)FUN_00035d4c(param_1);
                                                        if (piVar10 == (int *)0x0) {
                                                          iVar3 = 0x67f6;
                                                          iVar15 = 0x366;
                                                          piVar6 = (int *)0x0;
                                                          piVar13 = (int *)0x0;
                                                          piVar4 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          local_60 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                        }
                                                        else {
                                                          piVar13 = (int *)FUN_00035d4c((int)piVar10
                                                                                       );
                                                          if (piVar13 == (int *)0x0) {
                                                            iVar3 = 0x67f8;
                                                            iVar15 = 0x366;
                                                            piVar6 = (int *)0x0;
                                                            piVar4 = (int *)0x0;
                                                            local_58 = (int *)0x0;
                                                            local_60 = (int *)0x0;
                                                            piVar5 = (int *)0x0;
                                                          }
                                                          else {
                                                            FUN_00035ecc(piVar10);
                                                            piVar10 = (int *)FUN_00035d4c(param_1);
                                                            if (piVar10 == (int *)0x0) {
                                                              iVar3 = 0x67fb;
                                                              iVar15 = 0x366;
                                                              piVar6 = (int *)0x0;
                                                              piVar4 = (int *)0x0;
                                                              local_58 = (int *)0x0;
                                                              local_60 = (int *)0x0;
                                                              piVar5 = (int *)0x0;
                                                            }
                                                            else {
                                                              bVar1 = FUN_00036cd0(piVar13[1],
                                                                                   (int)&
                                                  PyMethod_Type);
                                                  if (bVar1) {
                                                    piVar6 = (int *)piVar13[3];
                                                    if (piVar6 == (int *)0x0) {
                                                      iVar3 = 0;
                                                    }
                                                    else {
                                                      piVar5 = (int *)piVar13[2];
                                                      FUN_00037210(piVar6);
                                                      FUN_00037210(piVar5);
                                                      iVar3 = 1;
                                                      FUN_00035ecc(piVar13);
                                                      piVar13 = piVar5;
                                                    }
                                                  }
                                                  else {
                                                    iVar3 = 0;
                                                    piVar6 = (int *)0x0;
                                                  }
                                                  iVar15 = piVar13[1];
                                                  bVar1 = FUN_00036cd0(iVar15,(int)&PyFunction_Type)
                                                  ;
                                                  if (bVar1) {
                                                    local_30[0] = DAT_001b72d4;
                                                    local_30[1] = piVar10;
                                                    piVar5 = FUN_000407c8((int)piVar13,
                                                                          (int)(local_30 + -iVar3),
                                                                          iVar3 + 2);
                                                    if (piVar5 == (int *)0x0) {
                                                      iVar3 = 0x680c;
                                                      iVar15 = 0x366;
                                                      piVar4 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
LAB_00161fb4:
                                                      FUN_0003674c(piVar6);
                                                      FUN_00035ecc(piVar10);
LAB_00161fc8:
                                                      FUN_00035ecc(piVar13);
                                                      FUN_00035ecc(piVar5);
                                                      iVar3 = FUN_00035894(param_1);
                                                      if (iVar3 < 0) {
                                                        piVar13 = (int *)0x0;
                                                        iVar3 = 0x6835;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x367;
                                                        piVar10 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        iVar3 = FUN_00035894(param_1);
                                                        if (-1 < iVar3) {
                                                          local_60 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          local_54 = 1;
                                                          do {
                                                            piVar7 = (int *)PyLong_FromLong(local_54
                                                  );
                                                  if (piVar7 == (int *)0x0) {
                                                    iVar3 = 0x6848;
                                                    iVar15 = 0x369;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                    goto LAB_0016087c;
                                                  }
                                                  FUN_0003674c(local_58);
                                                  local_50 = local_60;
                                                  local_58 = (int *)0x1;
                                                  do {
                                                    local_60 = (int *)PyLong_FromLong(local_58);
                                                    if (local_60 == (int *)0x0) {
                                                      iVar3 = 0x6855;
                                                      iVar15 = 0x36a;
                                                      local_60 = local_50;
                                                      piVar10 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                      local_58 = piVar7;
                                                      goto LAB_0016087c;
                                                    }
                                                    FUN_0003674c(local_50);
                                                    piVar5 = (int *)FUN_00045120((int)&
                                                  PyUnicode_Type,piVar7);
                                                  if (piVar5 == (int *)0x0) {
                                                    iVar3 = 0x6861;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  piVar13 = (int *)PyNumber_Add(DAT_001b6b48,piVar5)
                                                  ;
                                                  if (piVar13 == (int *)0x0) {
                                                    iVar3 = 0x6863;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  FUN_00035ecc(piVar5);
                                                  piVar5 = (int *)PyNumber_Add(piVar13,DAT_001b6b4c)
                                                  ;
                                                  if (piVar5 == (int *)0x0) {
                                                    iVar3 = 0x6866;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  FUN_00035ecc(piVar13);
                                                  piVar13 = (int *)FUN_00045120((int)&PyUnicode_Type
                                                                                ,local_60);
                                                  if (piVar13 == (int *)0x0) {
                                                    iVar3 = 0x6869;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  piVar4 = (int *)PyNumber_Add(piVar5,piVar13);
                                                  if (piVar4 == (int *)0x0) {
                                                    iVar3 = 0x686b;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  FUN_00035ecc(piVar5);
                                                  FUN_00035ecc(piVar13);
                                                  piVar5 = (int *)FUN_00035d4c(param_1);
                                                  if (piVar5 == (int *)0x0) {
                                                    iVar3 = 0x686f;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  bVar1 = FUN_00036cd0(piVar5[1],(int)&PyMethod_Type
                                                                      );
                                                  piVar12 = piVar5;
                                                  if (bVar1) {
                                                    piVar10 = (int *)piVar5[3];
                                                    if (piVar10 == (int *)0x0) {
                                                      iVar3 = 0;
                                                    }
                                                    else {
                                                      piVar12 = (int *)piVar5[2];
                                                      iVar3 = 1;
                                                      FUN_00037210(piVar10);
                                                      FUN_00037210(piVar12);
                                                      FUN_00035ecc(piVar5);
                                                    }
                                                  }
                                                  else {
                                                    piVar10 = (int *)0x0;
                                                    iVar3 = 0;
                                                  }
                                                  iVar15 = piVar12[1];
                                                  bVar1 = FUN_00036cd0(iVar15,(int)&PyFunction_Type)
                                                  ;
                                                  piVar5 = piVar12;
                                                  if (bVar1) {
                                                    local_30[0] = piVar7;
                                                    local_30[1] = local_60;
                                                    piVar13 = FUN_000407c8((int)piVar12,
                                                                           (int)(local_30 + -iVar3),
                                                                           iVar3 + 2);
                                                    if (piVar13 == (int *)0x0) {
                                                      iVar3 = 0x6880;
                                                      iVar15 = 0x36b;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = piVar7;
                                                      goto LAB_0016087c;
                                                    }
LAB_001622c8:
                                                    FUN_0003674c(piVar10);
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar12[2] + 8) & 0xffffff8d) == 0x80)
                                                  ) {
                                                    local_30[0] = piVar7;
                                                    local_30[1] = local_60;
                                                    piVar13 = (int *)FUN_00035400((int)piVar12);
                                                    if (piVar13 != (int *)0x0) goto LAB_001622c8;
                                                    iVar3 = 0x6888;
                                                    iVar15 = 0x36b;
                                                    piVar6 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  piVar6 = (int *)PyTuple_New(iVar3 + 2);
                                                  if (piVar6 == (int *)0x0) {
                                                    iVar3 = 0x688e;
                                                    iVar15 = 0x36b;
                                                    piVar13 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  if (piVar10 != (int *)0x0) {
                                                    piVar6[3] = (int)piVar10;
                                                  }
                                                  FUN_00037210(piVar7);
                                                  piVar6[iVar3 + 3] = (int)piVar7;
                                                  FUN_00037210(local_60);
                                                  piVar6[iVar3 + 4] = (int)local_60;
                                                  piVar13 = (int *)FUN_00035ca4((int)piVar12,piVar6,
                                                                                0);
                                                  if (piVar13 == (int *)0x0) {
                                                    iVar3 = 0x6899;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  FUN_00035ecc(piVar6);
                                                  }
                                                  FUN_00035ecc(piVar12);
                                                  iVar3 = PyObject_SetAttr(param_1,piVar4,piVar13);
                                                  if (iVar3 == -1) {
                                                    iVar3 = 0x689e;
                                                    iVar15 = 0x36b;
                                                    piVar10 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                    local_58 = piVar7;
                                                    goto LAB_0016087c;
                                                  }
                                                  FUN_00035ecc(piVar4);
                                                  FUN_00035ecc(piVar13);
                                                  local_58 = (int *)((int)local_58 + 1);
                                                  local_50 = local_60;
                                                  } while (local_58 != (int *)0x10);
                                                  local_54 = local_54 + 1;
                                                  local_58 = piVar7;
                                                  } while (local_54 != 5);
                                                  puVar9 = &_Py_NoneStruct;
                                                  FUN_00037210((int *)&_Py_NoneStruct);
                                                  goto LAB_00162350;
                                                  }
                                                  piVar13 = (int *)0x0;
                                                  iVar3 = 0x683e;
                                                  local_60 = (int *)0x0;
                                                  iVar15 = 0x368;
                                                  piVar10 = (int *)0x0;
                                                  piVar4 = (int *)0x0;
                                                  piVar6 = (int *)0x0;
                                                  local_58 = (int *)0x0;
                                                  piVar5 = (int *)0x0;
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar13[2] + 8) & 0xffffff8d) == 0x80)
                                                  ) {
                                                    local_30[0] = DAT_001b72d4;
                                                    local_30[1] = piVar10;
                                                    piVar5 = (int *)FUN_00035400((int)piVar13);
                                                    if (piVar5 != (int *)0x0) goto LAB_00161fb4;
                                                    iVar3 = 0x6815;
                                                    iVar15 = 0x366;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar4 = (int *)PyTuple_New(iVar3 + 2);
                                                    if (piVar4 == (int *)0x0) {
                                                      iVar3 = 0x681c;
                                                      iVar15 = 0x366;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      if (piVar6 != (int *)0x0) {
                                                        piVar4[3] = (int)piVar6;
                                                      }
                                                      FUN_00037210(DAT_001b72d4);
                                                      piVar5 = DAT_001b72d4;
                                                      piVar4[iVar3 + 4] = (int)piVar10;
                                                      piVar4[iVar3 + 3] = (int)piVar5;
                                                      piVar5 = (int *)FUN_00035ca4((int)piVar13,
                                                                                   piVar4,0);
                                                      if (piVar5 != (int *)0x0) {
                                                        FUN_00035ecc(piVar4);
                                                        goto LAB_00161fc8;
                                                      }
                                                      iVar3 = 0x6827;
                                                      iVar15 = 0x366;
                                                      piVar10 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if (iVar3 < 3) {
                                                    if (iVar3 < 0) {
                                                      piVar10 = (int *)0x0;
                                                      iVar3 = 0x6733;
                                                      local_60 = (int *)0x0;
                                                      iVar15 = 0x35c;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                    else {
                                                      piVar10 = (int *)0x0;
                                                      FUN_00035988(iVar3);
                                                      local_60 = (int *)0x0;
                                                      iVar3 = 0x6733;
                                                      iVar15 = 0x35c;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      piVar6 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                    }
                                                  }
                                                  else {
                                                    piVar10 = (int *)0x0;
                                                    iVar3 = 0x6733;
                                                    FUN_000359dc(2);
                                                    local_60 = (int *)0x0;
                                                    iVar15 = 0x35c;
                                                    piVar13 = (int *)0x0;
                                                    piVar4 = (int *)0x0;
                                                    piVar6 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                  }
                                                  }
                                                  else {
                                                    piVar6 = (int *)PyObject_GetIter(piVar5);
                                                    if (piVar6 == (int *)0x0) {
                                                      iVar3 = 0x6748;
                                                      iVar15 = 0x35c;
                                                      piVar10 = (int *)0x0;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                    }
                                                    else {
                                                      FUN_00035ecc(piVar5);
                                                      pcVar11 = *(code **)(piVar6[1] + 0x70);
                                                      piVar13 = (int *)(*pcVar11)(piVar6);
                                                      iVar14 = 0;
                                                      if (piVar13 != (int *)0x0) {
                                                        piVar10 = (int *)(*pcVar11)(piVar6);
                                                        if (piVar10 != (int *)0x0) {
                                                          piVar5 = (int *)(*pcVar11)(piVar6);
                                                          iVar3 = FUN_000390b8(piVar5,2);
                                                          if (-1 < iVar3) goto LAB_0016197c;
                                                          iVar3 = 0x6750;
                                                          iVar15 = 0x35c;
                                                          piVar4 = (int *)0x0;
                                                          local_58 = (int *)0x0;
                                                          local_60 = (int *)0x0;
                                                          piVar5 = (int *)0x0;
                                                          goto LAB_0016087c;
                                                        }
                                                        iVar14 = 1;
                                                      }
                                                      FUN_00035ecc(piVar6);
                                                      iVar3 = FUN_0003902c();
                                                      if (iVar3 == 0) {
                                                        iVar3 = 0x6758;
                                                        iVar15 = 0x35c;
                                                        FUN_00035988(iVar14);
                                                        piVar10 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        piVar4 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        local_60 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                      else {
                                                        piVar10 = (int *)0x0;
                                                        iVar3 = 0x6758;
                                                        local_60 = (int *)0x0;
                                                        iVar15 = 0x35c;
                                                        piVar4 = (int *)0x0;
                                                        piVar6 = (int *)0x0;
                                                        local_58 = (int *)0x0;
                                                        piVar5 = (int *)0x0;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar10[2] + 8) & 0xffffff8d) == 0x80)
                                                  ) {
                                                    local_30[1] = DAT_001b72b4;
                                                    local_30[0] = piVar6;
                                                    piVar5 = (int *)FUN_00035400((int)piVar10);
                                                    if (piVar5 != (int *)0x0) goto LAB_00161764;
                                                    iVar3 = 0x66f8;
                                                    iVar15 = 0x35b;
                                                    piVar13 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar13 = (int *)PyTuple_New(iVar3 + 2);
                                                    if (piVar13 == (int *)0x0) {
                                                      iVar3 = 0x66ff;
                                                      iVar15 = 0x35b;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      if (piVar4 != (int *)0x0) {
                                                        piVar13[3] = (int)piVar4;
                                                      }
                                                      piVar13[iVar3 + 3] = (int)piVar6;
                                                      FUN_00037210(DAT_001b72b4);
                                                      piVar13[iVar3 + 4] = (int)DAT_001b72b4;
                                                      piVar5 = (int *)FUN_00035ca4((int)piVar10,
                                                                                   piVar13,0);
                                                      if (piVar5 != (int *)0x0) {
                                                        FUN_00035ecc(piVar13);
                                                        goto LAB_00161774;
                                                      }
                                                      iVar3 = 0x670a;
                                                      iVar15 = 0x35b;
                                                      piVar6 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar10[2] + 8) & 0xffffff8d) == 0x80)
                                                  ) {
                                                    local_30[1] = DAT_001b7294;
                                                    local_30[0] = piVar4;
                                                    piVar5 = (int *)FUN_00035400((int)piVar10);
                                                    if (piVar5 != (int *)0x0) goto LAB_00161454;
                                                    iVar3 = 0x66b5;
                                                    iVar15 = 0x35a;
                                                    piVar6 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar6 = (int *)PyTuple_New(iVar3 + 2);
                                                    if (piVar6 == (int *)0x0) {
                                                      iVar3 = 0x66bc;
                                                      iVar15 = 0x35a;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      if (piVar13 != (int *)0x0) {
                                                        piVar6[3] = (int)piVar13;
                                                      }
                                                      piVar6[iVar3 + 3] = (int)piVar4;
                                                      FUN_00037210(DAT_001b7294);
                                                      piVar6[iVar3 + 4] = (int)DAT_001b7294;
                                                      piVar5 = (int *)FUN_00035ca4((int)piVar10,
                                                                                   piVar6,0);
                                                      if (piVar5 != (int *)0x0) {
                                                        FUN_00035ecc(piVar6);
                                                        goto LAB_00161464;
                                                      }
                                                      iVar3 = 0x66c7;
                                                      iVar15 = 0x35a;
                                                      piVar13 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar10[2] + 8) & 0xffffff8d) == 0x80)
                                                  ) {
                                                    local_30[0] = DAT_001b5ab8;
                                                    local_30[1] = piVar13;
                                                    piVar5 = (int *)FUN_00035400((int)piVar10);
                                                    if (piVar5 != (int *)0x0) goto LAB_00161174;
                                                    iVar3 = 0x6673;
                                                    iVar15 = 0x359;
                                                    piVar4 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar4 = (int *)PyTuple_New(iVar3 + 2);
                                                    if (piVar4 == (int *)0x0) {
                                                      iVar3 = 0x667a;
                                                      iVar15 = 0x359;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      if (piVar6 != (int *)0x0) {
                                                        piVar4[3] = (int)piVar6;
                                                      }
                                                      FUN_00037210(DAT_001b5ab8);
                                                      piVar5 = DAT_001b5ab8;
                                                      piVar4[iVar3 + 4] = (int)piVar13;
                                                      piVar4[iVar3 + 3] = (int)piVar5;
                                                      piVar5 = (int *)FUN_00035ca4((int)piVar10,
                                                                                   piVar4,0);
                                                      if (piVar5 != (int *)0x0) goto LAB_00161180;
                                                      iVar3 = 0x6685;
                                                      iVar15 = 0x359;
                                                      piVar6 = (int *)0x0;
                                                      piVar13 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar13[2] + 8) & 0xffffff8d) == 0x80)
                                                  ) {
                                                    local_30[0] = DAT_001b7274;
                                                    local_30[1] = piVar6;
                                                    piVar5 = (int *)FUN_00035400((int)piVar13);
                                                    if (piVar5 != (int *)0x0) goto LAB_00160e24;
                                                    iVar3 = 0x6634;
                                                    iVar15 = 0x358;
                                                    piVar10 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                    piVar5 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar10 = (int *)PyTuple_New(iVar3 + 2);
                                                    if (piVar10 == (int *)0x0) {
                                                      iVar3 = 0x663b;
                                                      iVar15 = 0x358;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      if (piVar4 != (int *)0x0) {
                                                        piVar10[3] = (int)piVar4;
                                                      }
                                                      FUN_00037210(DAT_001b7274);
                                                      piVar5 = DAT_001b7274;
                                                      piVar10[iVar3 + 4] = (int)piVar6;
                                                      piVar10[iVar3 + 3] = (int)piVar5;
                                                      piVar5 = (int *)FUN_00035ca4((int)piVar13,
                                                                                   piVar10,0);
                                                      if (piVar5 != (int *)0x0) goto LAB_00160e30;
                                                      iVar3 = 0x6646;
                                                      iVar15 = 0x358;
                                                      piVar6 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    bVar1 = FUN_00036cd0(iVar15,(int)&
                                                  PyCFunction_Type);
                                                  if (((bVar1) ||
                                                      (iVar15 = PyType_IsSubtype(iVar15,&
                                                  PyCFunction_Type), iVar15 != 0)) &&
                                                  ((*(uint *)(piVar6[2] + 8) & 0xffffff8d) == 0x80))
                                                  {
                                                    local_30[0] = param_2;
                                                    local_30[1] = local_5c;
                                                    piVar5 = (int *)FUN_00035400((int)piVar6);
                                                    if (piVar5 != (int *)0x0) goto LAB_00160afc;
                                                    iVar3 = 0x65ad;
                                                    iVar15 = 0x34f;
                                                    piVar10 = (int *)0x0;
                                                    piVar13 = (int *)0x0;
                                                    local_58 = (int *)0x0;
                                                    local_60 = (int *)0x0;
                                                  }
                                                  else {
                                                    piVar13 = (int *)PyTuple_New(iVar3 + 2);
                                                    if (piVar13 == (int *)0x0) {
                                                      iVar3 = 0x65b3;
                                                      iVar15 = 0x34f;
                                                      piVar10 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                      piVar5 = (int *)0x0;
                                                    }
                                                    else {
                                                      if (piVar4 != (int *)0x0) {
                                                        piVar13[3] = (int)piVar4;
                                                      }
                                                      FUN_00037210(param_2);
                                                      piVar13[iVar3 + 3] = (int)param_2;
                                                      FUN_00037210(local_5c);
                                                      piVar13[iVar3 + 4] = (int)local_5c;
                                                      piVar5 = (int *)FUN_00035ca4((int)piVar6,
                                                                                   piVar13,0);
                                                      if (piVar5 != (int *)0x0) {
                                                        FUN_00035ecc(piVar13);
                                                        goto LAB_00160b04;
                                                      }
                                                      iVar3 = 0x65be;
                                                      iVar15 = 0x34f;
                                                      piVar10 = (int *)0x0;
                                                      piVar4 = (int *)0x0;
                                                      local_58 = (int *)0x0;
                                                      local_60 = (int *)0x0;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0016087c:
  FUN_0003674c(piVar6);
  FUN_0003674c(piVar4);
  FUN_0003674c(piVar5);
  FUN_0003674c(piVar13);
  puVar9 = (undefined *)0x0;
  FUN_0003674c(piVar10);
  FUN_000384ec("extras.box_wrapper.BoxAction.__init__",iVar3,iVar15,"klippy/extras/box_wrapper.py");
  piVar7 = local_58;
LAB_00162350:
  FUN_0003674c(local_5c);
  FUN_0003674c(piVar7);
  FUN_0003674c(local_60);
  return puVar9;
}

