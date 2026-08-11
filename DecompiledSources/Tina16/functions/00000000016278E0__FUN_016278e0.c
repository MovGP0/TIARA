/* Ghidra address: 016278e0 */
/* Ghidra symbol: FUN_016278e0 */


undefined4 FUN_016278e0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res8 [4];
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414b50(local_20,L"builtin_");
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = *(int *)(local_res8[0] + -4);
  }
  iVar1 = FUN_004170c0(local_20[0],local_res8[0],1);
  iVar3 = 0;
  if (local_20[0] != 0) {
    iVar3 = *(int *)(local_20[0] + -4);
  }
  FUN_00416dc0(&local_28,local_res8[0],iVar1 + iVar3,(iVar2 - (iVar1 + iVar3)) + 1);
  *param_2 = 0xffffffff;
  iVar2 = FUN_00416db0(local_28,L"resistor");
  if (iVar2 == 0) {
    local_2c = 9;
  }
  else {
    iVar2 = FUN_00416db0(local_28,L"capacitor");
    if (iVar2 == 0) {
      local_2c = 10;
    }
    else {
      iVar2 = FUN_00416db0(local_28,L"inductor");
      if (iVar2 == 0) {
        local_2c = 0xb;
      }
      else {
        iVar2 = FUN_00416db0(local_28,L"diode");
        if (iVar2 == 0) {
          local_2c = 0x17;
        }
        else {
          iVar2 = FUN_00416db0(local_28,&DAT_01627f60);
          if (iVar2 == 0) {
            *param_2 = 3;
            if (*(char *)(param_3 + 0x139e5) == '\0') {
              local_2c = 0x3eb;
            }
            else {
              local_2c = 0x404;
            }
          }
          else {
            iVar2 = FUN_00416db0(local_28,&DAT_01627f74);
            if (iVar2 == 0) {
              *param_2 = 4;
              if (*(char *)(param_3 + 0x139e5) == '\0') {
                local_2c = 0x3f4;
              }
              else {
                local_2c = 0x404;
              }
            }
            else {
              iVar2 = FUN_00416db0(local_28,&DAT_01627f88);
              if (iVar2 == 0) {
                *param_2 = 5;
                if (*(char *)(param_3 + 0x139e5) == '\0') {
                  local_2c = 0x8f5;
                }
                else {
                  local_2c = 0x404;
                }
              }
              else {
                iVar2 = FUN_00416db0(local_28,L"nor2");
                if (iVar2 == 0) {
                  *param_2 = 3;
                  if (*(char *)(param_3 + 0x139e5) == '\0') {
                    local_2c = 0x3f1;
                  }
                  else {
                    local_2c = 0x405;
                  }
                }
                else {
                  iVar2 = FUN_00416db0(local_28,L"nor3");
                  if (iVar2 == 0) {
                    *param_2 = 4;
                    if (*(char *)(param_3 + 0x139e5) == '\0') {
                      local_2c = 0x3f5;
                    }
                    else {
                      local_2c = 0x405;
                    }
                  }
                  else {
                    iVar2 = FUN_00416db0(local_28,L"nor4");
                    if (iVar2 == 0) {
                      *param_2 = 5;
                      if (*(char *)(param_3 + 0x139e5) == '\0') {
                        local_2c = 0x901;
                      }
                      else {
                        local_2c = 0x405;
                      }
                    }
                    else {
                      iVar2 = FUN_00416db0(local_28,L"and2");
                      if (iVar2 == 0) {
                        *param_2 = 3;
                        if (*(char *)(param_3 + 0x139e5) == '\0') {
                          local_2c = 0x3ea;
                        }
                        else {
                          local_2c = 0x402;
                        }
                      }
                      else {
                        iVar2 = FUN_00416db0(local_28,L"and3");
                        if (iVar2 == 0) {
                          *param_2 = 4;
                          if (*(char *)(param_3 + 0x139e5) == '\0') {
                            local_2c = 0x3f2;
                          }
                          else {
                            local_2c = 0x402;
                          }
                        }
                        else {
                          iVar2 = FUN_00416db0(local_28,L"and4");
                          if (iVar2 == 0) {
                            *param_2 = 5;
                            if (*(char *)(param_3 + 0x139e5) == '\0') {
                              local_2c = 0x8ed;
                            }
                            else {
                              local_2c = 0x402;
                            }
                          }
                          else {
                            iVar2 = FUN_00416db0(local_28,L"nand2");
                            if (iVar2 == 0) {
                              *param_2 = 3;
                              if (*(char *)(param_3 + 0x139e5) == '\0') {
                                local_2c = 0x3ed;
                              }
                              else {
                                local_2c = 0x403;
                              }
                            }
                            else {
                              iVar2 = FUN_00416db0(local_28,L"nand3");
                              if (iVar2 == 0) {
                                *param_2 = 4;
                                if (*(char *)(param_3 + 0x139e5) == '\0') {
                                  local_2c = 0x3f3;
                                }
                                else {
                                  local_2c = 0x403;
                                }
                              }
                              else {
                                iVar2 = FUN_00416db0(local_28,L"nand4");
                                if (iVar2 == 0) {
                                  *param_2 = 5;
                                  if (*(char *)(param_3 + 0x139e5) == '\0') {
                                    local_2c = 0x3f8;
                                  }
                                  else {
                                    local_2c = 0x403;
                                  }
                                }
                                else {
                                  iVar2 = FUN_00416db0(local_28,&DAT_01628074);
                                  if (iVar2 == 0) {
                                    *param_2 = 2;
                                    if (*(char *)(param_3 + 0x139e5) == '\0') {
                                      local_2c = 0x3e9;
                                    }
                                    else {
                                      local_2c = 0x408;
                                    }
                                  }
                                  else {
                                    iVar2 = FUN_00416db0(local_28,&DAT_01628088);
                                    if (iVar2 == 0) {
                                      *param_2 = 2;
                                      if (*(char *)(param_3 + 0x139e5) == '\0') {
                                        local_2c = 0x45d;
                                      }
                                      else {
                                        local_2c = 0x409;
                                      }
                                    }
                                    else {
                                      iVar2 = FUN_00416db0(local_28,&DAT_0162809c);
                                      if (iVar2 == 0) {
                                        *param_2 = 6;
                                        if (*(char *)(param_3 + 0x139e5) == '\0') {
                                          local_2c = 0x3f7;
                                        }
                                        else {
                                          local_2c = 0x401;
                                        }
                                      }
                                      else {
                                        iVar2 = FUN_00416db0(local_28,L"vswch");
                                        if (iVar2 == 0) {
                                          local_2c = 0x20;
                                        }
                                        else {
                                          iVar2 = FUN_00416db0(local_28,L"high");
                                          if (iVar2 == 0) {
                                            local_2c = 0xe;
                                          }
                                          else {
                                            iVar2 = FUN_00416db0(local_28,L"pwlsource");
                                            if (iVar2 == 0) {
                                              local_2c = 0x10;
                                            }
                                            else {
                                              FUN_01613110(L"GetBuiltInCompID");
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
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res8);
  return local_2c;
}

