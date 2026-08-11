/* Ghidra address: 00997560 */
/* Ghidra symbol: FUN_00997560 */


void FUN_00997560(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  iVar1 = FUN_00416420(param_2,*(undefined8 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    FUN_00414b90(param_1 + 0x28,param_2);
    FUN_009476a0(&local_10,*(undefined8 *)(param_1 + 0x28));
    FUN_00414b90(param_1 + 0x38,local_10);
    FUN_00947820(&local_18,*(undefined8 *)(param_1 + 0x28));
    FUN_00414b90(param_1 + 0x40,local_18);
    iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x38),0);
    if (iVar1 == 0) {
      iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"last");
      if (iVar1 == 0) {
        *(code **)(param_1 + 0x48) = FUN_00985c60;
      }
      else {
        iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"position");
        if (iVar1 == 0) {
          *(code **)(param_1 + 0x48) = FUN_00985d90;
        }
        else {
          iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"count");
          if (iVar1 == 0) {
            *(code **)(param_1 + 0x48) = FUN_00985ed0;
          }
          else {
            iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),&PTR_DAT_00997b28);
            if (iVar1 == 0) {
              *(code **)(param_1 + 0x48) = FUN_009862a0;
            }
            else {
              iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"local-name");
              if (iVar1 == 0) {
                *(code **)(param_1 + 0x48) = FUN_009867e0;
              }
              else {
                iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"namespace-uri");
                if (iVar1 == 0) {
                  *(code **)(param_1 + 0x48) = FUN_00986b60;
                }
                else {
                  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"name");
                  if (iVar1 == 0) {
                    *(code **)(param_1 + 0x48) = FUN_00986e90;
                  }
                  else {
                    iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"string");
                    if (iVar1 == 0) {
                      *(code **)(param_1 + 0x48) = FUN_009871b0;
                    }
                    else {
                      iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"concat");
                      if (iVar1 == 0) {
                        *(code **)(param_1 + 0x48) = FUN_009872e0;
                      }
                      else {
                        iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"starts-with");
                        if (iVar1 == 0) {
                          *(code **)(param_1 + 0x48) = FUN_00987620;
                        }
                        else {
                          iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"contains");
                          if (iVar1 == 0) {
                            *(code **)(param_1 + 0x48) = FUN_00987a20;
                          }
                          else {
                            iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"substring-before"
                                                );
                            if (iVar1 == 0) {
                              *(code **)(param_1 + 0x48) = FUN_00987e00;
                            }
                            else {
                              iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                   L"substring-after");
                              if (iVar1 == 0) {
                                *(code **)(param_1 + 0x48) = FUN_009881d0;
                              }
                              else {
                                iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),L"substring");
                                if (iVar1 == 0) {
                                  *(code **)(param_1 + 0x48) = FUN_00988730;
                                }
                                else {
                                  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                       L"string-length");
                                  if (iVar1 == 0) {
                                    *(code **)(param_1 + 0x48) = FUN_009890e0;
                                  }
                                  else {
                                    iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                         L"normalize-space");
                                    if (iVar1 == 0) {
                                      *(code **)(param_1 + 0x48) = FUN_009894d0;
                                    }
                                    else {
                                      iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                           L"translate");
                                      if (iVar1 == 0) {
                                        *(code **)(param_1 + 0x48) = FUN_00989890;
                                      }
                                      else {
                                        iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                             L"boolean");
                                        if (iVar1 == 0) {
                                          *(code **)(param_1 + 0x48) = FUN_00989ca0;
                                        }
                                        else {
                                          iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                               &DAT_00997cb0);
                                          if (iVar1 == 0) {
                                            *(code **)(param_1 + 0x48) = FUN_00989da0;
                                          }
                                          else {
                                            iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                                 L"true");
                                            if (iVar1 == 0) {
                                              *(code **)(param_1 + 0x48) = FUN_00989ff0;
                                            }
                                            else {
                                              iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40),
                                                                   L"false");
                                              if (iVar1 == 0) {
                                                *(code **)(param_1 + 0x48) = FUN_0098a0c0;
                                              }
                                              else {
                                                iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x40)
                                                                     ,L"lang");
                                                if (iVar1 == 0) {
                                                  *(code **)(param_1 + 0x48) = FUN_0098a190;
                                                }
                                                else {
                                                  iVar1 = FUN_00416420(*(undefined8 *)
                                                                        (param_1 + 0x40),L"number");
                                                  if (iVar1 == 0) {
                                                    *(code **)(param_1 + 0x48) = FUN_0098a500;
                                                  }
                                                  else {
                                                    iVar1 = FUN_00416420(*(undefined8 *)
                                                                          (param_1 + 0x40),
                                                                         &DAT_00997d00);
                                                    if (iVar1 == 0) {
                                                      *(code **)(param_1 + 0x48) = FUN_0098a630;
                                                    }
                                                    else {
                                                      iVar1 = FUN_00416420(*(undefined8 *)
                                                                            (param_1 + 0x40),
                                                                           L"floor");
                                                      if (iVar1 == 0) {
                                                        *(code **)(param_1 + 0x48) = FUN_0098a9e0;
                                                      }
                                                      else {
                                                        iVar1 = FUN_00416420(*(undefined8 *)
                                                                              (param_1 + 0x40),
                                                                             L"ceiling");
                                                        if (iVar1 == 0) {
                                                          *(code **)(param_1 + 0x48) = FUN_0098acb0;
                                                        }
                                                        else {
                                                          iVar1 = FUN_00416420(*(undefined8 *)
                                                                                (param_1 + 0x40),
                                                                               L"round");
                                                          if (iVar1 == 0) {
                                                            *(code **)(param_1 + 0x48) =
                                                                 FUN_0098af80;
                                                          }
                                                          else {
                                                            *(undefined8 *)(param_1 + 0x48) = 0;
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
    else {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  FUN_004145c0(&local_18,2);
  return;
}

