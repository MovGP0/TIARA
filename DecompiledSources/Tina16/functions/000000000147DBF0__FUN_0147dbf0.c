/* Ghidra address: 0147dbf0 */
/* Ghidra symbol: FUN_0147dbf0 */


undefined1 FUN_0147dbf0(wchar_t *param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  wchar_t *local_res8 [2];
  undefined8 local_res18 [2];
  undefined1 local_19;
  undefined4 local_c;
  
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res18[0]);
  local_19 = 1;
  *param_4 = 0;
  if (local_res8[0] == L"resistor") {
    bVar3 = true;
  }
  else if (local_res8[0] == (wchar_t *)0x0) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_0043e420(local_res8[0],L"resistor");
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    *param_4 = 9;
  }
  else {
    cVar1 = FUN_0147d3c0(local_res8[0],L"voltage_source");
    if (cVar1 == '\0') {
      if (local_res8[0] == L"ac_source") {
        bVar3 = true;
      }
      else if (local_res8[0] == (wchar_t *)0x0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_res8[0],L"ac_source");
        bVar3 = iVar2 == 0;
      }
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      bVar3 = true;
    }
    else if (local_res8[0] == L"dc_source") {
      bVar3 = true;
    }
    else if (local_res8[0] == (wchar_t *)0x0) {
      bVar3 = false;
    }
    else {
      iVar2 = FUN_0043e420(local_res8[0],L"dc_source");
      bVar3 = iVar2 == 0;
    }
    if (bVar3) {
      iVar2 = FUN_0147db60(local_res18[0]);
      if (iVar2 < 2) {
        *param_4 = 0xe;
      }
      else {
        *param_4 = 0x10;
      }
    }
    else {
      if (local_res8[0] == L"inductor") {
        bVar3 = true;
      }
      else if (local_res8[0] == (wchar_t *)0x0) {
        bVar3 = false;
      }
      else {
        iVar2 = FUN_0043e420(local_res8[0],L"inductor");
        bVar3 = iVar2 == 0;
      }
      if (bVar3) {
        *param_4 = 0xb;
      }
      else {
        if (local_res8[0] == L"capacitor") {
          bVar3 = true;
        }
        else if (local_res8[0] == (wchar_t *)0x0) {
          bVar3 = false;
        }
        else {
          iVar2 = FUN_0043e420(local_res8[0],L"capacitor");
          bVar3 = iVar2 == 0;
        }
        if (bVar3) {
          *param_4 = 10;
        }
        else {
          if (local_res8[0] == L"voltmeter") {
            bVar3 = true;
          }
          else if (local_res8[0] == (wchar_t *)0x0) {
            bVar3 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_res8[0],L"voltmeter");
            bVar3 = iVar2 == 0;
          }
          if (bVar3) {
            *param_4 = 5;
          }
          else {
            if (local_res8[0] == L"voltmeter2") {
              bVar3 = true;
            }
            else if (local_res8[0] == (wchar_t *)0x0) {
              bVar3 = false;
            }
            else {
              iVar2 = FUN_0043e420(local_res8[0],L"voltmeter2");
              bVar3 = iVar2 == 0;
            }
            if (bVar3) {
              *param_4 = 0x21;
            }
            else {
              if (local_res8[0] == L"voltage_pin") {
                bVar3 = true;
              }
              else if (local_res8[0] == (wchar_t *)0x0) {
                bVar3 = false;
              }
              else {
                iVar2 = FUN_0043e420(local_res8[0],L"voltage_pin");
                bVar3 = iVar2 == 0;
              }
              if (bVar3) {
                bVar3 = true;
              }
              else if (local_res8[0] == L"output") {
                bVar3 = true;
              }
              else if (local_res8[0] == (wchar_t *)0x0) {
                bVar3 = false;
              }
              else {
                iVar2 = FUN_0043e420(local_res8[0],L"output");
                bVar3 = iVar2 == 0;
              }
              if ((bVar3) && (param_2 == 1)) {
                *param_4 = 4;
              }
              else {
                if (local_res8[0] == L"opamp2") {
                  bVar3 = true;
                }
                else if (local_res8[0] == (wchar_t *)0x0) {
                  bVar3 = false;
                }
                else {
                  iVar2 = FUN_0043e420(local_res8[0],L"opamp2");
                  bVar3 = iVar2 == 0;
                }
                if (bVar3) {
                  bVar3 = true;
                }
                else if (local_res8[0] == L"opamp") {
                  bVar3 = true;
                }
                else if (local_res8[0] == (wchar_t *)0x0) {
                  bVar3 = false;
                }
                else {
                  iVar2 = FUN_0043e420(local_res8[0],L"opamp");
                  bVar3 = iVar2 == 0;
                }
                if (bVar3) {
                  *param_4 = 0x55;
                }
                else {
                  if (local_res8[0] == L"iopamp2") {
                    bVar3 = true;
                  }
                  else if (local_res8[0] == (wchar_t *)0x0) {
                    bVar3 = false;
                  }
                  else {
                    iVar2 = FUN_0043e420(local_res8[0],L"iopamp2");
                    bVar3 = iVar2 == 0;
                  }
                  if (bVar3) {
                    *param_4 = 0x56;
                  }
                  else {
                    if (local_res8[0] == L"battery") {
                      bVar3 = true;
                    }
                    else if (local_res8[0] == (wchar_t *)0x0) {
                      bVar3 = false;
                    }
                    else {
                      iVar2 = FUN_0043e420(local_res8[0],L"battery");
                      bVar3 = iVar2 == 0;
                    }
                    if (bVar3) {
                      *param_4 = 0x43;
                    }
                    else {
                      if (local_res8[0] == L"gnd") {
                        bVar3 = true;
                      }
                      else if (local_res8[0] == (wchar_t *)0x0) {
                        bVar3 = false;
                      }
                      else {
                        iVar2 = FUN_0043e420(local_res8[0],&DAT_0147e580);
                        bVar3 = iVar2 == 0;
                      }
                      if (bVar3) {
                        bVar3 = true;
                      }
                      else if (local_res8[0] == L"ground") {
                        bVar3 = true;
                      }
                      else if (local_res8[0] == (wchar_t *)0x0) {
                        bVar3 = false;
                      }
                      else {
                        iVar2 = FUN_0043e420(local_res8[0],L"ground");
                        bVar3 = iVar2 == 0;
                      }
                      if (bVar3) {
                        *param_4 = 2;
                      }
                      else {
                        if (local_res8[0] == L"psg") {
                          bVar3 = true;
                        }
                        else if (local_res8[0] == (wchar_t *)0x0) {
                          bVar3 = false;
                        }
                        else {
                          iVar2 = FUN_0043e420(local_res8[0],&DAT_0147e5b0);
                          bVar3 = iVar2 == 0;
                        }
                        if (bVar3) {
                          *param_4 = 0x3ec;
                        }
                        else {
                          if (local_res8[0] == L"clock") {
                            bVar3 = true;
                          }
                          else if (local_res8[0] == (wchar_t *)0x0) {
                            bVar3 = false;
                          }
                          else {
                            iVar2 = FUN_0043e420(local_res8[0],L"clock");
                            bVar3 = iVar2 == 0;
                          }
                          if (bVar3) {
                            *param_4 = 0x3fe;
                          }
                          else {
                            if (local_res8[0] == L"diode") {
                              bVar3 = true;
                            }
                            else if (local_res8[0] == (wchar_t *)0x0) {
                              bVar3 = false;
                            }
                            else {
                              iVar2 = FUN_0043e420(local_res8[0],L"diode");
                              bVar3 = iVar2 == 0;
                            }
                            if (bVar3) {
                              *param_4 = 0x17;
                            }
                            else {
                              if (local_res8[0] == L"nmos2") {
                                bVar3 = true;
                              }
                              else if (local_res8[0] == (wchar_t *)0x0) {
                                bVar3 = false;
                              }
                              else {
                                iVar2 = FUN_0043e420(local_res8[0],L"nmos2");
                                bVar3 = iVar2 == 0;
                              }
                              if (bVar3) {
                                *param_4 = 0x59;
                              }
                              else {
                                if (local_res8[0] == L"dnmos2") {
                                  bVar3 = true;
                                }
                                else if (local_res8[0] == (wchar_t *)0x0) {
                                  bVar3 = false;
                                }
                                else {
                                  iVar2 = FUN_0043e420(local_res8[0],L"dnmos2");
                                  bVar3 = iVar2 == 0;
                                }
                                if (bVar3) {
                                  *param_4 = 0x5b;
                                }
                                else {
                                  cVar1 = FUN_0147d3c0(local_res8[0],L"transistor");
                                  if ((cVar1 == '\0') &&
                                     (cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147e64c),
                                     cVar1 == '\0')) {
                                    cVar1 = FUN_0147d7c0(local_res8[0],&local_c);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_0147d950(local_res8[0],param_2,&local_c);
                                      if (cVar1 == '\0') {
                                        cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147e688);
                                        if (cVar1 == '\0') {
                                          local_19 = 0;
                                        }
                                        else {
                                          *param_4 = 0x2d;
                                        }
                                      }
                                      else {
                                        *param_4 = local_c;
                                      }
                                    }
                                    else {
                                      *param_4 = local_c;
                                    }
                                  }
                                  else {
                                    *param_4 = 0x57;
                                    cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147e660);
                                    if (cVar1 == '\0') {
                                      cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147e674);
                                      if (cVar1 != '\0') {
                                        *param_4 = 0x58;
                                      }
                                    }
                                    else {
                                      *param_4 = 0x57;
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
  FUN_00414480(local_res8);
  FUN_00414480(local_res18);
  return local_19;
}

