/* Ghidra address: 0183d1c0 */
/* Ghidra symbol: FUN_0183d1c0 */


void FUN_0183d1c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0043e1a0(&local_10,*(undefined8 *)(param_2 + 0x18));
  iVar1 = FUN_00416db0(local_10,L"assignstmt");
  if (iVar1 == 0) {
    FUN_0183b1c0(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = FUN_00416db0(local_10,L"callstmt");
    if (iVar1 == 0) {
      FUN_0183b680(param_1,param_2,param_3,param_4);
    }
    else {
      iVar1 = FUN_00416db0(local_10,L"ifstmt");
      if (iVar1 == 0) {
        FUN_0183b800(param_1,param_2,param_3,param_4);
      }
      else {
        iVar1 = FUN_00416db0(local_10,L"casestmt");
        if (iVar1 == 0) {
          FUN_0183c4a0(param_1,param_2,param_3,param_4);
        }
        else {
          iVar1 = FUN_00416db0(local_10,L"forstmt");
          if (iVar1 == 0) {
            FUN_0183ba10(param_1,param_2,param_3,param_4);
          }
          else {
            iVar1 = FUN_00416db0(local_10,L"vbforstmt");
            if (iVar1 == 0) {
              FUN_0183bc90(param_1,param_2,param_3,param_4);
            }
            else {
              iVar1 = FUN_00416db0(local_10,L"cppforstmt");
              if (iVar1 == 0) {
                FUN_0183bf40(param_1,param_2,param_3,param_4);
              }
              else {
                iVar1 = FUN_00416db0(local_10,L"whilestmt");
                if (iVar1 == 0) {
                  FUN_0183c0a0(param_1,param_2,param_3,param_4);
                }
                else {
                  iVar1 = FUN_00416db0(local_10,L"repeatstmt");
                  if (iVar1 == 0) {
                    FUN_0183c1c0(param_1,param_2,param_3,param_4);
                  }
                  else {
                    iVar1 = FUN_00416db0(local_10,L"trystmt");
                    if (iVar1 == 0) {
                      FUN_0183c690(param_1,param_2,param_3,param_4);
                    }
                    else {
                      iVar1 = FUN_00416db0(local_10,L"break");
                      if (iVar1 == 0) {
                        FUN_0183c890(param_1,param_2,param_3,param_4);
                      }
                      else {
                        iVar1 = FUN_00416db0(local_10,L"continue");
                        if (iVar1 == 0) {
                          FUN_0183c960(param_1,param_2,param_3,param_4);
                        }
                        else {
                          iVar1 = FUN_00416db0(local_10,L"exit");
                          if (iVar1 == 0) {
                            FUN_0183ca30(param_1,param_2,param_3,param_4);
                          }
                          else {
                            iVar1 = FUN_00416db0(local_10,L"return");
                            if (iVar1 == 0) {
                              FUN_0183cb00(param_1,param_2,param_3,param_4);
                            }
                            else {
                              iVar1 = FUN_00416db0(local_10,L"with");
                              if (iVar1 == 0) {
                                FUN_0183cda0(param_1,param_2,param_3,param_4);
                              }
                              else {
                                iVar1 = FUN_00416db0(local_10,L"delete");
                                if (iVar1 == 0) {
                                  FUN_0183d050(param_1,param_2,param_3,param_4);
                                }
                                else {
                                  iVar1 = FUN_00416db0(local_10,L"compoundstmt");
                                  if (iVar1 == 0) {
                                    FUN_0183d140(param_1,param_2,param_3,param_4);
                                  }
                                  else {
                                    iVar1 = FUN_00416db0(local_10,L"uses");
                                    if (iVar1 == 0) {
                                      FUN_0183a210(param_1,param_2,param_3);
                                    }
                                    else {
                                      iVar1 = FUN_00416db0(local_10,&DAT_0183d824);
                                      if (iVar1 == 0) {
                                        FUN_0183a500(param_1,param_2,param_3,param_4);
                                      }
                                      else {
                                        iVar1 = FUN_00416db0(local_10,L"const");
                                        if (iVar1 == 0) {
                                          FUN_0183a650(param_1,param_2,param_3);
                                        }
                                        else {
                                          iVar1 = FUN_00416db0(local_10,L"procedure");
                                          if (iVar1 == 0) {
                                            FUN_0183acf0(param_1,param_2,param_3);
                                          }
                                          else {
                                            iVar1 = FUN_00416db0(local_10,L"function");
                                            if (iVar1 == 0) {
                                              FUN_0183b090(param_1,param_2,param_3);
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
  FUN_00414480(&local_10);
  return;
}

