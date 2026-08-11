/* Ghidra address: 01715000 */
/* Ghidra symbol: FUN_01715000 */


undefined8 FUN_01715000(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined1 local_c [4];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (iVar2 < 1) {
    iVar2 = FUN_00416db0(local_res18[0],L"[OpAmp]");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res18[0],L"[Connector]");
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_res18[0],L"[DiodeArrays]");
        if (iVar2 != 0) {
          iVar2 = FUN_00416db0(local_res18[0],L"[InstAmp]");
          if (iVar2 != 0) {
            iVar2 = FUN_00416db0(local_res18[0],L"[Comparator]");
            if (iVar2 != 0) {
              iVar2 = FUN_00416db0(local_res18[0],L"[Ref]");
              if (iVar2 != 0) {
                iVar2 = FUN_00416db0(local_res18[0],L"[Buffer]");
                if (iVar2 != 0) {
                  iVar2 = FUN_00416db0(local_res18[0],L"[Misc]");
                  if (iVar2 != 0) {
                    iVar2 = FUN_00416db0(local_res18[0],L"[OptoCoupler]");
                    if (iVar2 != 0) {
                      iVar2 = FUN_00416db0(local_res18[0],L"[VoltageReg]");
                      if (iVar2 != 0) {
                        iVar2 = FUN_00416db0(local_res18[0],&DAT_01715634);
                        if (iVar2 != 0) {
                          iVar2 = FUN_00416db0(local_res18[0],L"[NPN]");
                          if (iVar2 != 0) {
                            iVar2 = FUN_00416db0(local_res18[0],L"[PNP]");
                            if (iVar2 != 0) {
                              iVar2 = FUN_00416db0(local_res18[0],L"[NDarlington]");
                              if (iVar2 != 0) {
                                iVar2 = FUN_00416db0(local_res18[0],L"[PDarlington]");
                                if (iVar2 != 0) {
                                  iVar2 = FUN_00416db0(local_res18[0],L"[NMOS]");
                                  if (iVar2 != 0) {
                                    iVar2 = FUN_00416db0(local_res18[0],L"[PMOS]");
                                    if (iVar2 != 0) {
                                      iVar2 = FUN_00416db0(local_res18[0],L"[NJF]");
                                      if (iVar2 != 0) {
                                        iVar2 = FUN_00416db0(local_res18[0],L"[PJF]");
                                        if (iVar2 != 0) {
                                          iVar2 = FUN_00416db0(local_res18[0],L"[IGBT]");
                                          if (iVar2 != 0) {
                                            iVar2 = FUN_00416db0(local_res18[0],L"[Thyristor]");
                                            if (iVar2 != 0) {
                                              iVar2 = FUN_00416db0(local_res18[0],L"[VacuumTubes]");
                                              if (iVar2 != 0) {
                                                iVar2 = FUN_00416db0(local_res18[0],L"[CRYSTAL]");
                                                if (iVar2 != 0) {
                                                  iVar2 = FUN_00416db0(local_res18[0],
                                                                       L"[CurrShuntMon]");
                                                  if (iVar2 != 0) {
                                                    iVar2 = FUN_00416db0(local_res18[0],L"[DiffAmp]"
                                                                        );
                                                    if (iVar2 != 0) {
                                                      iVar2 = FUN_00416db0(local_res18[0],
                                                                           L"[FullDiffAmp]");
                                                      if (iVar2 != 0) {
                                                        iVar2 = FUN_00416db0(local_res18[0],
                                                                             L"[SMPS]");
                                                        if (iVar2 != 0) {
                                                          iVar2 = FUN_00416db0(local_res18[0],
                                                                               L"[Internal]");
                                                          if (iVar2 != 0) {
                                                            iVar2 = FUN_00416db0(local_res18[0],
                                                                                 L"[Timers]");
                                                            if (iVar2 != 0) {
                                                              iVar2 = FUN_00416db0(local_res18[0],
                                                                                                                                                                      
                                                  L"[ResistorNetworks]");
                                                  if (iVar2 != 0) {
                                                    iVar2 = FUN_00416db0(local_res18[0],
                                                                         L"[Interface]");
                                                    if (iVar2 != 0) {
                                                      iVar2 = FUN_00416db0(local_res18[0],
                                                                           L"[Transformers]");
                                                      if (iVar2 != 0) {
                                                        iVar2 = FUN_00416db0(local_res18[0],
                                                                             L"[ADConverters]");
                                                        if (iVar2 != 0) {
                                                          iVar2 = FUN_00416db0(local_res18[0],
                                                                               &DAT_01715918);
                                                          if (iVar2 != 0) {
                                                            iVar2 = FUN_00416db0(local_res18[0],
                                                                                 L"[VGAmp]");
                                                            if (iVar2 != 0) {
                                                              iVar2 = FUN_00416db0(local_res18[0],
                                                                                   L"[AnSwitch]");
                                                              if (iVar2 != 0) {
                                                                iVar2 = FUN_00416db0(local_res18[0],
                                                                                     L"[AnMux]");
                                                                if (iVar2 != 0) {
                                                                  iVar2 = FUN_00416db0(local_res18
                                                                                       [0],L"[GAN]")
                                                                  ;
                                                                  if (iVar2 != 0) {
                                                                    iVar2 = FUN_00416db0(local_res18
                                                                                         [0],
                                                  L"[GAAS]");
                                                  if (iVar2 != 0) {
                                                    iVar2 = FUN_00416db0(local_res18[0],
                                                                         L"[TIReplMacro]");
                                                    if (iVar2 != 0) {
                                                      FUN_00414ad0(param_2,L"[Internal]");
                                                      goto code_r0x01715458;
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
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x140))
                      (*(longlong **)(param_1 + 0xa0),local_res18[0],local_c);
    if (cVar1 == '\0') {
      iVar2 = FUN_00416db0(local_res18[0],L"[TIReplMacro]");
      if (iVar2 != 0) {
        FUN_00414ad0(param_2,L"[Internal]");
        goto code_r0x01715458;
      }
    }
    FUN_00414ad0(param_2,local_res18[0]);
  }
code_r0x01715458:
  FUN_00414480(local_res18);
  return param_2;
}

