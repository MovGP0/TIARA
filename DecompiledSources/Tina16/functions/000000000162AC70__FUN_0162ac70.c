/* Ghidra address: 0162ac70 */
/* Ghidra symbol: FUN_0162ac70 */


void FUN_0162ac70(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  byte local_138 [256];
  undefined8 local_38;
  undefined8 local_30;
  
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_30 = 0;
  local_38 = 0;
  if (param_1 != (int *)0x0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
    iVar3 = *param_1;
    if (iVar3 < 0x13a) {
      if (iVar3 == 0x139) {
        *param_1 = 9;
        param_1[0x13] = 0x34;
      }
      else if (iVar3 < 0x11c) {
        if (iVar3 == 0x11b) {
          *param_1 = 0xb;
          param_1[0x13] = 0;
        }
        else if (iVar3 < 0x114) {
          if (iVar3 == 0x113) {
            *param_1 = 0xf;
            param_1[0x13] = 0;
          }
          else if (iVar3 < 0x110) {
            if (iVar3 == 0x10f) {
              *param_1 = 5;
              param_1[0x13] = 0;
            }
            else if (iVar3 == 0) {
              *param_1 = 9;
              param_1[0x13] = 0x2a;
            }
            else if (iVar3 == 0x104) {
              FUN_0040f5d0(local_138,*(undefined8 *)(param_1 + 0x10));
              cVar2 = FUN_0162ac40(local_138,param_1 + 10);
              if (cVar2 == '\0') {
                *param_1 = 3;
                uVar1 = *(undefined8 *)(param_1 + 0x10);
                FUN_004167a0(&local_140,uVar1);
                iVar3 = FUN_00416db0(local_140,L"TEMP");
                if (iVar3 == 0) {
                  param_1[0x12] = 4;
                  *param_1 = 2;
                }
                else {
                  FUN_004167a0(&local_148,*(undefined8 *)(param_1 + 0x10));
                  iVar3 = FUN_00416db0(local_148,L"TIME");
                  if (iVar3 == 0) {
                    param_1[0x12] = 5;
                    *param_1 = 2;
                  }
                  else {
                    FUN_004167a0(&local_150,*(undefined8 *)(param_1 + 0x10));
                    iVar3 = FUN_00416db0(local_150,&DAT_0162b990);
                    if (iVar3 == 0) {
                      param_1[0x12] = 6;
                      *param_1 = 2;
                    }
                    else {
                      FUN_0040f5d0(local_138,uVar1);
                      iVar3 = FUN_00414f50(local_138,&DAT_0162b996,(ulonglong)local_138[0] + 1);
                      if (iVar3 == 0) {
                        param_1[0x12] = 2;
                        *param_1 = 2;
                      }
                      else {
                        FUN_0040f5d0(local_138,uVar1);
                        iVar3 = FUN_00414f50(local_138,&DAT_0162b998,(ulonglong)local_138[0] + 1);
                        if (iVar3 == 0) {
                          param_1[0x12] = 3;
                          *param_1 = 2;
                        }
                        else {
                          FUN_004167a0(&local_158,*(undefined8 *)(param_1 + 0x10));
                          iVar3 = FUN_00416db0(local_158,L"ANALMODE_DC");
                          if (iVar3 == 0) {
                            param_1[0x12] = 10;
                            *param_1 = 2;
                          }
                          else {
                            FUN_004167a0(&local_160,*(undefined8 *)(param_1 + 0x10));
                            iVar3 = FUN_00416db0(local_160,L"ANALMODE_AC");
                            if (iVar3 == 0) {
                              param_1[0x12] = 0xb;
                              *param_1 = 2;
                            }
                            else {
                              FUN_004167a0(&local_168,*(undefined8 *)(param_1 + 0x10));
                              iVar3 = FUN_00416db0(local_168,L"ANALMODE_TR");
                              if (iVar3 == 0) {
                                param_1[0x12] = 0xc;
                                *param_1 = 2;
                              }
                              else {
                                FUN_004167a0(&local_170,*(undefined8 *)(param_1 + 0x10));
                                iVar3 = FUN_00416db0(local_170,L"ANALMODE_NOISE");
                                if (iVar3 == 0) {
                                  param_1[0x12] = 0xd;
                                  *param_1 = 2;
                                }
                                else {
                                  FUN_004167a0(&local_178,*(undefined8 *)(param_1 + 0x10));
                                  iVar3 = FUN_00416db0(local_178,L"ANALMODE_IC");
                                  if (iVar3 == 0) {
                                    param_1[0x12] = 0xe;
                                    *param_1 = 2;
                                  }
                                  else {
                                    FUN_004167a0(&local_180,*(undefined8 *)(param_1 + 0x10));
                                    iVar3 = FUN_00416db0(local_180,L"ANALMODE_NODESET");
                                    if (iVar3 == 0) {
                                      param_1[0x12] = 0xf;
                                      *param_1 = 2;
                                    }
                                    else {
                                      FUN_004167a0(&local_188,*(undefined8 *)(param_1 + 0x10));
                                      iVar3 = FUN_00416db0(local_188,L"ANALMODE_STATIC");
                                      if (iVar3 == 0) {
                                        param_1[0x12] = 0x10;
                                        *param_1 = 2;
                                      }
                                      else if (((char)param_1[0x2c] == '\0') || (param_2 == 0)) {
                                        if (param_2 != 0) {
                                          *param_1 = 3;
                                          FUN_004167a0(&local_190,*(undefined8 *)(param_1 + 0x10));
                                          iVar3 = (**(code **)(**(longlong **)(param_2 + 0x6b8) +
                                                              0xb0))(*(longlong **)(param_2 + 0x6b8)
                                                                     ,local_190);
                                          param_1[0x12] = iVar3 + 1;
                                        }
                                      }
                                      else {
                                        iVar3 = (**(code **)(**(longlong **)(param_2 + 0x6b8) + 0x28
                                                            ))(*(longlong **)(param_2 + 0x6b8));
                                        param_1[0x12] = param_1[0x12] + iVar3 + 1;
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
                *param_1 = 1;
              }
            }
            else if (iVar3 == 0x105) {
              *param_1 = 1;
            }
            else if (iVar3 == 0x10e) {
              *param_1 = 4;
              param_1[0x13] = 0;
            }
          }
          else if (iVar3 == 0x110) {
            *param_1 = 6;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x111) {
            *param_1 = 7;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x112) {
            *param_1 = 8;
            param_1[0x13] = 0;
          }
        }
        else if (iVar3 < 0x118) {
          if (iVar3 == 0x117) {
            *param_1 = 0x13;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x114) {
            *param_1 = 0x12;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x115) {
            *param_1 = 0x11;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x116) {
            *param_1 = 0x14;
            param_1[0x13] = 0;
          }
        }
        else if (iVar3 == 0x118) {
          *param_1 = 0x10;
          param_1[0x13] = 0;
        }
        else if (iVar3 == 0x119) {
          *param_1 = 9;
          param_1[0x13] = 0xd;
        }
        else if (iVar3 == 0x11a) {
          *param_1 = 9;
          param_1[0x13] = 0xe;
        }
      }
      else if (iVar3 < 0x12e) {
        if (iVar3 == 0x12d) {
          *param_1 = 9;
          param_1[0x13] = 3;
        }
        else if (iVar3 < 0x129) {
          if (iVar3 == 0x128) {
            *param_1 = 9;
            param_1[0x13] = 8;
          }
          else if (iVar3 == 0x11c) {
            *param_1 = 0xe;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x11d) {
            *param_1 = 0xc;
            param_1[0x13] = 0;
          }
          else if (iVar3 == 0x125) {
            *param_1 = 9;
            param_1[0x13] = 0x1a;
          }
        }
        else if (iVar3 == 0x129) {
          *param_1 = 9;
          param_1[0x13] = 9;
        }
        else if (iVar3 == 0x12a) {
          *param_1 = 9;
          param_1[0x13] = 10;
        }
        else if (iVar3 == 299) {
          *param_1 = 9;
          param_1[0x13] = 0xb;
        }
      }
      else if (iVar3 < 0x135) {
        if (iVar3 == 0x134) {
          *param_1 = 9;
          param_1[0x13] = 0xf;
        }
        else if (iVar3 == 0x130) {
          *param_1 = 9;
          param_1[0x13] = 4;
        }
        else if (iVar3 == 0x131) {
          *param_1 = 9;
          param_1[0x13] = 1;
        }
        else if (iVar3 == 0x133) {
          *param_1 = 9;
          param_1[0x13] = 2;
        }
      }
      else if (iVar3 == 0x136) {
        *param_1 = 9;
        param_1[0x13] = 0x1b;
      }
      else if (iVar3 == 0x137) {
        *param_1 = 9;
        param_1[0x13] = 0x1c;
      }
      else if (iVar3 == 0x138) {
        *param_1 = 9;
        param_1[0x13] = 0x1d;
      }
    }
    else if (iVar3 < 0x15b) {
      if (iVar3 == 0x15a) {
        *param_1 = 9;
        param_1[0x13] = 0x15;
      }
      else if (iVar3 < 0x153) {
        if (iVar3 == 0x152) {
          *param_1 = 9;
          param_1[0x13] = 0x17;
        }
        else if (iVar3 < 0x14f) {
          if (iVar3 == 0x14e) {
            *param_1 = 9;
            param_1[0x13] = 5;
          }
          else if (iVar3 == 0x13b) {
            *param_1 = 9;
            param_1[0x13] = 0x35;
          }
          else if (iVar3 == 0x14b) {
            *param_1 = 9;
            param_1[0x13] = 0x25;
          }
          else if (iVar3 == 0x14c) {
            *param_1 = 9;
            param_1[0x13] = 0x26;
          }
        }
        else if (iVar3 == 0x14f) {
          *param_1 = 9;
          param_1[0x13] = 6;
        }
        else if (iVar3 == 0x150) {
          *param_1 = 9;
          param_1[0x13] = 7;
        }
        else if (iVar3 == 0x151) {
          *param_1 = 9;
          param_1[0x13] = 0xc;
        }
      }
      else if (iVar3 < 0x157) {
        if (iVar3 == 0x156) {
          *param_1 = 9;
          param_1[0x13] = 0x11;
        }
        else if (iVar3 == 0x153) {
          *param_1 = 9;
          param_1[0x13] = 0x19;
        }
        else if (iVar3 == 0x154) {
          *param_1 = 9;
          param_1[0x13] = 0x18;
        }
        else if (iVar3 == 0x155) {
          *param_1 = 9;
          param_1[0x13] = 0x32;
          iVar4 = 0;
          iVar3 = param_1[0x15];
          if (-1 < iVar3 + -1) {
            do {
              FUN_0162ac70(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x10),
                           param_2);
              FUN_0162ac70(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar4 * 0x10),param_2);
              iVar4 = iVar4 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      else if (iVar3 == 0x157) {
        *param_1 = 9;
        param_1[0x13] = 0x12;
      }
      else if (iVar3 == 0x158) {
        *param_1 = 9;
        param_1[0x13] = 0x13;
      }
      else if (iVar3 == 0x159) {
        *param_1 = 9;
        param_1[0x13] = 0x14;
      }
    }
    else if (iVar3 < 0x164) {
      if (iVar3 == 0x163) {
        *param_1 = 9;
        param_1[0x13] = 0x23;
      }
      else if (iVar3 < 0x15f) {
        if (iVar3 == 0x15e) {
          *param_1 = 9;
          param_1[0x13] = 0x1e;
        }
        else if (iVar3 == 0x15b) {
          *param_1 = 9;
          param_1[0x13] = 0x16;
        }
        else if (iVar3 == 0x15c) {
          *param_1 = 8;
          param_1[0x13] = 0;
        }
        else if (iVar3 == 0x15d) {
          *param_1 = 0xd;
          param_1[0x13] = 0;
        }
      }
      else if (iVar3 == 0x15f) {
        *param_1 = 9;
        param_1[0x13] = 0x1f;
      }
      else if (iVar3 == 0x160) {
        *param_1 = 9;
        param_1[0x13] = 0x20;
      }
      else if (iVar3 == 0x162) {
        *param_1 = 9;
        param_1[0x13] = 0x22;
      }
    }
    else if (iVar3 < 0x3f2) {
      if (iVar3 == 0x3f1) {
        *param_1 = 9;
        param_1[0x13] = 0x38;
      }
      else if (iVar3 == 1000) {
        *param_1 = 10;
      }
      else if (iVar3 == 0x3e9) {
        *param_1 = 9;
        param_1[0x13] = 0x24;
      }
      else if (iVar3 == 0x3ef) {
        *param_1 = 9;
        param_1[0x13] = 0x27;
      }
    }
    else if (iVar3 == 0x3f2) {
      *param_1 = 9;
      param_1[0x13] = 0x2b;
    }
    else if (iVar3 == 0x3f3) {
      *param_1 = 9;
      param_1[0x13] = 0x28;
    }
    else if (iVar3 == 0x3f4) {
      *param_1 = 9;
      param_1[0x13] = 0x29;
    }
    FUN_0162ac70(*(undefined8 *)(param_1 + 2),param_2);
    FUN_0162ac70(*(undefined8 *)(param_1 + 4),param_2);
  }
  FUN_00414560(&local_190,0xb);
  FUN_00414560(&local_38,2);
  return;
}

