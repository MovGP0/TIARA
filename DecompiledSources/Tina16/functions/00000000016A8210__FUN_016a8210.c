/* Ghidra address: 016a8210 */
/* Ghidra symbol: FUN_016a8210 */


void FUN_016a8210(longlong param_1,int *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  byte local_158 [256];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_58 = 0;
  local_50[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  if (param_2 == (int *)0x0) goto code_r0x016a908c;
  *(undefined8 *)(param_2 + 8) = param_3;
  *(undefined1 *)(param_2 + 0x14) = 1;
  iVar4 = *param_2;
  if (iVar4 < 0x13a) {
    if (iVar4 == 0x139) {
      *param_2 = 9;
      param_2[0x13] = 0x34;
    }
    else if (iVar4 < 0x11c) {
      if (iVar4 == 0x11b) {
        *param_2 = 0xb;
        param_2[0x13] = 0;
      }
      else if (iVar4 < 0x114) {
        if (iVar4 == 0x113) {
          *param_2 = 0xf;
          param_2[0x13] = 0;
        }
        else if (iVar4 < 0x110) {
          if (iVar4 == 0x10f) {
            *param_2 = 5;
            param_2[0x13] = 0;
          }
          else if (iVar4 == 0x104) {
            plVar1 = *(longlong **)(param_1 + 0x30);
            if (plVar1 != (longlong *)0x0) {
              FUN_004167a0(local_50,*(undefined8 *)(param_2 + 0x10));
              iVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_50[0]);
              if (-1 < iVar4) {
                FUN_004167a0(&local_58,*(undefined8 *)(param_2 + 0x10));
                iVar4 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                                  (*(longlong **)(param_1 + 0x30),local_58);
                param_2[0x12] = iVar4 + 1;
                *param_2 = 3;
                goto LAB_016a9061;
              }
            }
            FUN_0040f5d0(local_158,*(undefined8 *)(param_2 + 0x10));
            cVar3 = FUN_016a7a00(param_1,local_158,param_2 + 10);
            if (cVar3 == '\0') {
              uVar6 = *(undefined8 *)(param_2 + 0x10);
              FUN_0040f5d0(local_158,uVar6);
              iVar4 = FUN_00414f50(local_158,&DAT_016a9114,(ulonglong)local_158[0] + 1);
              if (iVar4 == 0) {
                *param_2 = 1;
                param_2[10] = -0x44cab734;
                param_2[0xb] = 0x3c07a4e8;
              }
              else {
                FUN_004167a0(&local_160,uVar6);
                iVar4 = FUN_00416db0(local_160,&PTR_DAT_016a9124);
                if (iVar4 == 0) {
                  *param_2 = 1;
                  param_2[10] = 0x54442d18;
                  param_2[0xb] = 0x400921fb;
                }
                else {
                  FUN_004167a0(&local_168,*(undefined8 *)(param_2 + 0x10));
                  iVar4 = FUN_00416db0(local_168,L"GMIN");
                  if (iVar4 == 0) {
                    param_2[0x12] = 1;
                    *param_2 = 2;
                  }
                  else {
                    FUN_0040f5d0(local_158,uVar6);
                    iVar4 = FUN_00414f50(local_158,&DAT_016a9142,(ulonglong)local_158[0] + 1);
                    if (iVar4 == 0) {
                      param_2[0x12] = 2;
                      *param_2 = 2;
                    }
                    else {
                      FUN_0040f5d0(local_158,uVar6);
                      iVar4 = FUN_00414f50(local_158,&DAT_016a9144,(ulonglong)local_158[0] + 1);
                      if (iVar4 == 0) {
                        param_2[0x12] = 3;
                        *param_2 = 2;
                      }
                      else {
                        FUN_004167a0(&local_170,*(undefined8 *)(param_2 + 0x10));
                        iVar4 = FUN_00416db0(local_170,L"TEMP");
                        if (iVar4 == 0) {
                          param_2[0x12] = 4;
                          *param_2 = 2;
                        }
                        else {
                          FUN_004167a0(&local_178,*(undefined8 *)(param_2 + 0x10));
                          iVar4 = FUN_00416db0(local_178,L"TIME");
                          if (iVar4 == 0) {
                            param_2[0x12] = 5;
                            *param_2 = 2;
                          }
                          else {
                            FUN_004167a0(&local_180,*(undefined8 *)(param_2 + 0x10));
                            iVar4 = FUN_00416db0(local_180,&PTR_DAT_016a9184);
                            if (iVar4 == 0) {
                              param_2[0x12] = 6;
                              *param_2 = 2;
                            }
                            else {
                              FUN_004167a0(&local_188,*(undefined8 *)(param_2 + 0x10));
                              iVar4 = FUN_00416db0(local_188,&DAT_016a9198);
                              if (iVar4 == 0) {
                                param_2[0x13] = 0x3c;
                                *param_2 = 9;
                              }
                              else {
                                FUN_004167a0(&local_190,*(undefined8 *)(param_2 + 0x10));
                                iVar4 = FUN_00416db0(local_190,L"RNDR");
                                if (iVar4 == 0) {
                                  param_2[0x13] = 0x3d;
                                  *param_2 = 9;
                                }
                                else {
                                  FUN_004167a0(&local_198,*(undefined8 *)(param_2 + 0x10));
                                  iVar4 = FUN_00416db0(local_198,L"RNDC");
                                  if (iVar4 == 0) {
                                    param_2[0x13] = 0x3e;
                                    *param_2 = 9;
                                  }
                                  else {
                                    *param_2 = 3;
                                    param_2[0x12] = -1;
                                    if (*(longlong *)(param_1 + 0x28) != 0) {
                                      FUN_004167a0(&local_1a0,*(undefined8 *)(param_2 + 0x10));
                                      iVar4 = FUN_004170c0(&DAT_016a91dc,local_1a0,1);
                                      if (-1 < iVar4) {
                                        FUN_004167a0(&local_1a8,*(undefined8 *)(param_2 + 0x10));
                                        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb8)
                                                )(*(longlong **)(param_1 + 0x28),local_1a8);
                                        if (-1 < iVar4) {
                                          FUN_004167a0(&local_1b0,*(undefined8 *)(param_2 + 0x10));
                                          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) +
                                                              0xb8))(*(longlong **)(param_1 + 0x28),
                                                                     local_1b0);
                                          param_2[0x12] = iVar4 + 1;
                                          goto LAB_016a8b4a;
                                        }
                                      }
                                      FUN_004167a0(&local_1b8,*(undefined8 *)(param_2 + 0x10));
                                      iVar4 = FUN_004170c0(&DAT_016a91f0,local_1b8,1);
                                      if (-1 < iVar4) {
                                        FUN_004167a0(&local_1c0,*(undefined8 *)(param_2 + 0x10));
                                        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0)
                                                )(*(longlong **)(param_1 + 0x28),local_1c0);
                                        if (-1 < iVar4) {
                                          FUN_004167a0(&local_1c8,*(undefined8 *)(param_2 + 0x10));
                                          iVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) +
                                                              0xb0))(*(longlong **)(param_1 + 0x28),
                                                                     local_1c8);
                                          param_2[0x12] = iVar4 + 1;
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
LAB_016a8b4a:
              if (param_2[0x12] == -1) {
                lVar2 = *(longlong *)(param_1 + 0x58);
                if (lVar2 == 0) {
                  FUN_004167a0(&local_40,*(undefined8 *)(param_2 + 0x10));
                  local_1e0 = local_40;
                  local_1d8 = 0x11;
                  FUN_00442f70(&local_1d0,L"Undefined global parameter: %s",&local_1e0,0);
                  uVar6 = FUN_0044d490(&PTR_FUN_0169f8c8,1,local_1d0);
                  FUN_004134c0(uVar6);
                }
                else {
                  FUN_0040f5d0(local_158,*(undefined8 *)(param_2 + 0x10));
                  FUN_016a4020(*(undefined8 *)(lVar2 + 0x10),0x1a,local_158,0xffffffff);
                }
              }
            }
            else {
              *param_2 = 1;
            }
          }
          else if (iVar4 == 0x105) {
            *param_2 = 1;
          }
          else if (iVar4 == 0x10e) {
            *param_2 = 4;
            param_2[0x13] = 0;
          }
        }
        else if (iVar4 == 0x110) {
          *param_2 = 6;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x111) {
          *param_2 = 7;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x112) {
          *param_2 = 8;
          param_2[0x13] = 0;
        }
      }
      else if (iVar4 < 0x118) {
        if (iVar4 == 0x117) {
          *param_2 = 0x13;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x114) {
          *param_2 = 0x12;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x115) {
          *param_2 = 0x11;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x116) {
          *param_2 = 0x14;
          param_2[0x13] = 0;
        }
      }
      else if (iVar4 == 0x118) {
        *param_2 = 0x10;
        param_2[0x13] = 0;
      }
      else if (iVar4 == 0x119) {
        *param_2 = 9;
        param_2[0x13] = 0xd;
      }
      else if (iVar4 == 0x11a) {
        *param_2 = 9;
        param_2[0x13] = 0xe;
      }
    }
    else if (iVar4 < 0x12e) {
      if (iVar4 == 0x12d) {
        *param_2 = 9;
        param_2[0x13] = 3;
      }
      else if (iVar4 < 0x129) {
        if (iVar4 == 0x128) {
          *param_2 = 9;
          param_2[0x13] = 8;
        }
        else if (iVar4 == 0x11c) {
          *param_2 = 0xe;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x11d) {
          *param_2 = 0xc;
          param_2[0x13] = 0;
        }
        else if (iVar4 == 0x125) {
          *param_2 = 9;
          param_2[0x13] = 0x1a;
        }
      }
      else if (iVar4 == 0x129) {
        *param_2 = 9;
        param_2[0x13] = 9;
      }
      else if (iVar4 == 0x12a) {
        *param_2 = 9;
        param_2[0x13] = 10;
      }
      else if (iVar4 == 299) {
        *param_2 = 9;
        param_2[0x13] = 0xb;
      }
    }
    else if (iVar4 < 0x135) {
      if (iVar4 == 0x134) {
        *param_2 = 9;
        param_2[0x13] = 0xf;
      }
      else if (iVar4 == 0x130) {
        *param_2 = 9;
        param_2[0x13] = 4;
      }
      else if (iVar4 == 0x131) {
        *param_2 = 9;
        param_2[0x13] = 1;
      }
      else if (iVar4 == 0x133) {
        *param_2 = 9;
        param_2[0x13] = 2;
      }
    }
    else if (iVar4 == 0x136) {
      *param_2 = 9;
      param_2[0x13] = 0x1b;
    }
    else if (iVar4 == 0x137) {
      *param_2 = 9;
      param_2[0x13] = 0x1c;
    }
    else if (iVar4 == 0x138) {
      *param_2 = 9;
      param_2[0x13] = 0x1d;
    }
  }
  else if (iVar4 < 0x15b) {
    if (iVar4 == 0x15a) {
      *param_2 = 9;
      param_2[0x13] = 0x15;
    }
    else if (iVar4 < 0x153) {
      if (iVar4 == 0x152) {
        *param_2 = 9;
        param_2[0x13] = 0x17;
      }
      else if (iVar4 < 0x14f) {
        if (iVar4 == 0x14e) {
          *param_2 = 9;
          param_2[0x13] = 5;
        }
        else if (iVar4 == 0x13b) {
          *param_2 = 9;
          param_2[0x13] = 0x35;
        }
        else if (iVar4 == 0x14b) {
          *param_2 = 9;
          param_2[0x13] = 0x25;
        }
        else if (iVar4 == 0x14c) {
          *param_2 = 9;
          param_2[0x13] = 0x26;
        }
      }
      else if (iVar4 == 0x14f) {
        *param_2 = 9;
        param_2[0x13] = 6;
      }
      else if (iVar4 == 0x150) {
        *param_2 = 9;
        param_2[0x13] = 7;
      }
      else if (iVar4 == 0x151) {
        *param_2 = 9;
        param_2[0x13] = 0xc;
      }
    }
    else if (iVar4 < 0x157) {
      if (iVar4 == 0x156) {
        *param_2 = 9;
        param_2[0x13] = 0x11;
      }
      else if (iVar4 == 0x153) {
        *param_2 = 9;
        param_2[0x13] = 0x19;
      }
      else if (iVar4 == 0x154) {
        *param_2 = 9;
        param_2[0x13] = 0x18;
      }
      else if (iVar4 == 0x155) {
        *param_2 = 9;
        param_2[0x13] = 0x32;
        iVar5 = 0;
        iVar4 = param_2[0x15];
        if (-1 < iVar4 + -1) {
          do {
            FUN_016a8210(param_1,*(undefined8 *)
                                  (*(longlong *)(param_2 + 0x18) + (longlong)iVar5 * 0x10),0);
            FUN_016a8210(param_1,*(undefined8 *)
                                  (*(longlong *)(param_2 + 0x18) + 8 + (longlong)iVar5 * 0x10));
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    else if (iVar4 == 0x157) {
      *param_2 = 9;
      param_2[0x13] = 0x12;
    }
    else if (iVar4 == 0x158) {
      *param_2 = 9;
      param_2[0x13] = 0x13;
    }
    else if (iVar4 == 0x159) {
      *param_2 = 9;
      param_2[0x13] = 0x14;
    }
  }
  else if (iVar4 < 0x163) {
    if (iVar4 == 0x162) {
      *param_2 = 9;
      param_2[0x13] = 0x22;
    }
    else if (iVar4 < 0x15f) {
      if (iVar4 == 0x15e) {
        *param_2 = 9;
        param_2[0x13] = 0x1e;
      }
      else if (iVar4 == 0x15b) {
        *param_2 = 9;
        param_2[0x13] = 0x16;
      }
      else if (iVar4 == 0x15c) {
        *param_2 = 8;
        param_2[0x13] = 0;
      }
      else if (iVar4 == 0x15d) {
        *param_2 = 0xd;
        param_2[0x13] = 0;
      }
    }
    else if (iVar4 == 0x15f) {
      *param_2 = 9;
      param_2[0x13] = 0x1f;
    }
    else if (iVar4 == 0x160) {
      *param_2 = 9;
      param_2[0x13] = 0x20;
    }
    else if (iVar4 == 0x161) {
      *param_2 = 9;
      param_2[0x13] = 0x21;
    }
  }
  else if (iVar4 < 0x3f0) {
    if (iVar4 == 0x3ef) {
      *param_2 = 9;
      param_2[0x13] = 0x27;
    }
    else if (iVar4 == 0x163) {
      *param_2 = 9;
      param_2[0x13] = 0x23;
    }
    else if (iVar4 == 1000) {
      *param_2 = 10;
    }
    else if (iVar4 == 0x3e9) {
      *param_2 = 9;
      param_2[0x13] = 0x24;
    }
  }
  else if (iVar4 == 0x3f2) {
    *param_2 = 9;
    param_2[0x13] = 0x2b;
  }
  else if (iVar4 == 0x3f3) {
    *param_2 = 9;
    param_2[0x13] = 0x28;
  }
  else if (iVar4 == 0x3f4) {
    *param_2 = 9;
    param_2[0x13] = 0x29;
  }
LAB_016a9061:
  FUN_016a8210(param_1,*(undefined8 *)(param_2 + 2),param_2);
  FUN_016a8210(param_1,*(undefined8 *)(param_2 + 4),param_2);
code_r0x016a908c:
  FUN_00414560(&local_1d0,0xf);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,3);
  return;
}

