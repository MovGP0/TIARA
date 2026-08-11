/* Ghidra address: 0169ae40 */
/* Ghidra symbol: FUN_0169ae40 */


void FUN_0169ae40(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 8);
  if (param_2 < 0x2d) {
    if (param_2 == 0x2c) {
      *(undefined4 *)(param_1 + 0x1030) = 0x129;
    }
    else if (param_2 < 0x17) {
      if (param_2 == 0x16) {
        uVar2 = FUN_01698500(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                             *(undefined4 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 < 0xc) {
        if (param_2 == 0xb) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 < 7) {
          if (param_2 == 6) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 < 4) {
            if (param_2 == 3) {
              uVar2 = FUN_01698500(*(undefined8 *)
                                    (param_1 + 0x1038 +
                                    (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                                   *(undefined8 *)
                                    (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                                   *(undefined4 *)
                                    (param_1 + 0x1038 +
                                    (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
              *(undefined8 *)(param_1 + 0x1030) = uVar2;
            }
            else if (param_2 == 1) {
              *(undefined8 *)(lVar1 + 0x18) =
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
            }
            else if (param_2 == 2) {
              *(undefined8 *)(param_1 + 0x1030) =
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
            }
          }
          else if (param_2 == 4) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 == 5) {
            uVar2 = FUN_01698500(*(undefined8 *)
                                  (param_1 + 0x1038 +
                                  (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                                 *(undefined8 *)
                                  (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                                 *(undefined4 *)
                                  (param_1 + 0x1038 +
                                  (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
            *(undefined8 *)(param_1 + 0x1030) = uVar2;
          }
        }
        else if (param_2 == 7) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x15c
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 8) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 == 9) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
        }
        else if (param_2 == 10) {
          uVar2 = FUN_016984a0(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                               *(undefined4 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8)
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 < 0x12) {
        if (param_2 == 0x11) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 < 0xf) {
          if (param_2 == 0xe) {
            uVar2 = FUN_01698500(*(undefined8 *)
                                  (param_1 + 0x1038 +
                                  (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                                 *(undefined8 *)
                                  (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                                 0x11c);
            *(undefined8 *)(param_1 + 0x1030) = uVar2;
          }
          else if (param_2 == 0xc) {
            uVar2 = FUN_01698500(*(undefined8 *)
                                  (param_1 + 0x1038 +
                                  (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                                 *(undefined8 *)
                                  (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                                 *(undefined4 *)
                                  (param_1 + 0x1038 +
                                  (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
            *(undefined8 *)(param_1 + 0x1030) = uVar2;
          }
          else if (param_2 == 0xd) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
        }
        else if (param_2 == 0xf) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 == 0x10) {
          uVar2 = FUN_016984a0(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x11b)
          ;
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 == 0x12) {
        uVar2 = FUN_01698500(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                             *(undefined4 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x13) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 0x14) {
        uVar2 = FUN_01698500(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                             *(undefined4 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x15) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
    }
    else if (param_2 < 0x22) {
      if (param_2 == 0x21) {
        uVar2 = FUN_016984a0(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                             *(undefined4 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 < 0x1d) {
        if (param_2 == 0x1c) {
          uVar2 = FUN_01698550(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 < 0x1a) {
          if (param_2 == 0x19) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 == 0x17) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 == 0x18) {
            uVar2 = FUN_01698500(*(undefined8 *)
                                  (param_1 + 0x1038 +
                                  (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                                 *(undefined8 *)
                                  (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                                 0x15c);
            *(undefined8 *)(param_1 + 0x1030) = uVar2;
          }
        }
        else if (param_2 == 0x1a) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
        }
        else if (param_2 == 0x1b) {
          uVar2 = FUN_016984a0(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                               *(undefined4 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8)
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 == 0x1d) {
        uVar2 = FUN_016985b0(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x1e) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 0x1f) {
        uVar2 = FUN_00409570(*(byte *)(*(longlong *)(lVar1 + 0x10) + 0x40) + 1);
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
        FUN_004154b0(&local_20,*(longlong *)(lVar1 + 0x10) + 0x40,0);
        FUN_004425e0(uVar2,local_20);
      }
      else if (param_2 == 0x20) {
        *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x98);
      }
    }
    else if (param_2 < 0x28) {
      if (param_2 == 0x27) {
        FUN_016989b0(lVar1,*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),1);
      }
      else if (param_2 < 0x25) {
        if (param_2 == 0x24) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8
                                 ),1000);
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8)
                               ,uVar2,0x125);
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 0x22) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8
                                 ),*(undefined4 *)
                                    (param_1 + 0x1038 +
                                    (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8));
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 0x23) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8
                                 ),1000);
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8)
                               ,uVar2,0x151);
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 == 0x25) {
        uVar2 = FUN_016986c0(lVar1,*(undefined8 *)
                                    (param_1 + 0x1038 +
                                    (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x26) {
        lVar3 = FUN_01698740(lVar1,*(undefined8 *)
                                    (param_1 + 0x1038 +
                                    (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
        *(longlong *)(param_1 + 0x1030) = lVar3;
        if (lVar3 == 0) {
          FUN_01698b30(lVar1,1);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x3060) + 0x10));
        }
      }
    }
    else if (param_2 == 0x28) {
      FUN_016989b0(lVar1,*(undefined8 *)
                          (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0);
    }
    else if (param_2 == 0x29) {
      FUN_01698a60(lVar1,*(undefined8 *)
                          (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),1);
    }
    else if (param_2 == 0x2a) {
      FUN_01698a60(lVar1,*(undefined8 *)
                          (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                   *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0);
    }
    else if (param_2 == 0x2b) {
      *(undefined4 *)(param_1 + 0x1030) = 0x128;
    }
  }
  else if (param_2 < 0x43) {
    if (param_2 == 0x42) {
      *(undefined4 *)(param_1 + 0x1030) = 0x138;
    }
    else if (param_2 < 0x38) {
      if (param_2 == 0x37) {
        *(undefined4 *)(param_1 + 0x1030) = 0x157;
      }
      else if (param_2 < 0x33) {
        if (param_2 == 0x32) {
          *(undefined4 *)(param_1 + 0x1030) = 0x131;
        }
        else if (param_2 < 0x30) {
          if (param_2 == 0x2f) {
            *(undefined4 *)(param_1 + 0x1030) = 0x12d;
          }
          else if (param_2 == 0x2d) {
            *(undefined4 *)(param_1 + 0x1030) = 0x12a;
          }
          else if (param_2 == 0x2e) {
            *(undefined4 *)(param_1 + 0x1030) = 299;
          }
        }
        else if (param_2 == 0x30) {
          *(undefined4 *)(param_1 + 0x1030) = 0x130;
        }
        else if (param_2 == 0x31) {
          *(undefined4 *)(param_1 + 0x1030) = 0x14e;
        }
      }
      else if (param_2 == 0x33) {
        *(undefined4 *)(param_1 + 0x1030) = 0x133;
      }
      else if (param_2 == 0x34) {
        *(undefined4 *)(param_1 + 0x1030) = 0x134;
      }
      else if (param_2 == 0x35) {
        *(undefined4 *)(param_1 + 0x1030) = 0x152;
      }
      else if (param_2 == 0x36) {
        *(undefined4 *)(param_1 + 0x1030) = 0x156;
      }
    }
    else if (param_2 < 0x3e) {
      if (param_2 == 0x3d) {
        *(undefined4 *)(param_1 + 0x1030) = 0x160;
      }
      else if (param_2 < 0x3b) {
        if (param_2 == 0x3a) {
          *(undefined4 *)(param_1 + 0x1030) = 0x15b;
        }
        else if (param_2 == 0x38) {
          *(undefined4 *)(param_1 + 0x1030) = 0x159;
        }
        else if (param_2 == 0x39) {
          *(undefined4 *)(param_1 + 0x1030) = 0x15a;
        }
      }
      else if (param_2 == 0x3b) {
        *(undefined4 *)(param_1 + 0x1030) = 0x15e;
      }
      else if (param_2 == 0x3c) {
        *(undefined4 *)(param_1 + 0x1030) = 0x15f;
      }
    }
    else if (param_2 == 0x3e) {
      *(undefined4 *)(param_1 + 0x1030) = 0x139;
    }
    else if (param_2 == 0x3f) {
      *(undefined4 *)(param_1 + 0x1030) = 0x13b;
    }
    else if (param_2 == 0x40) {
      *(undefined4 *)(param_1 + 0x1030) = 0x136;
    }
    else if (param_2 == 0x41) {
      *(undefined4 *)(param_1 + 0x1030) = 0x137;
    }
  }
  else if (param_2 < 0x4e) {
    if (param_2 == 0x4d) {
      *(undefined4 *)(param_1 + 0x1030) = 0x110;
    }
    else if (param_2 < 0x49) {
      if (param_2 == 0x48) {
        *(undefined4 *)(param_1 + 0x1030) = 0x153;
      }
      else if (param_2 < 0x46) {
        if (param_2 == 0x45) {
          *(undefined4 *)(param_1 + 0x1030) = 0x14f;
        }
        else if (param_2 == 0x43) {
          *(undefined4 *)(param_1 + 0x1030) = 0x14b;
        }
        else if (param_2 == 0x44) {
          *(undefined4 *)(param_1 + 0x1030) = 0x14c;
        }
      }
      else if (param_2 == 0x46) {
        *(undefined4 *)(param_1 + 0x1030) = 0x150;
      }
      else if (param_2 == 0x47) {
        *(undefined4 *)(param_1 + 0x1030) = 0x154;
      }
    }
    else if (param_2 == 0x49) {
      *(undefined4 *)(param_1 + 0x1030) = 0x158;
    }
    else if (param_2 == 0x4a) {
      *(undefined4 *)(param_1 + 0x1030) = 0x161;
    }
    else if (param_2 == 0x4b) {
      *(undefined4 *)(param_1 + 0x1030) = 0x10e;
    }
    else if (param_2 == 0x4c) {
      *(undefined4 *)(param_1 + 0x1030) = 0x10f;
    }
  }
  else if (param_2 < 0x53) {
    if (param_2 == 0x52) {
      *(undefined4 *)(param_1 + 0x1030) = 0x115;
    }
    else if (param_2 == 0x4e) {
      *(undefined4 *)(param_1 + 0x1030) = 0x111;
    }
    else if (param_2 == 0x4f) {
      *(undefined4 *)(param_1 + 0x1030) = 0x11d;
    }
    else if (param_2 == 0x50) {
      *(undefined4 *)(param_1 + 0x1030) = 0x15d;
    }
    else if (param_2 == 0x51) {
      *(undefined4 *)(param_1 + 0x1030) = 0x114;
    }
  }
  else if (param_2 == 0x53) {
    *(undefined4 *)(param_1 + 0x1030) = 0x116;
  }
  else if (param_2 == 0x54) {
    *(undefined4 *)(param_1 + 0x1030) = 0x117;
  }
  else if (param_2 == 0x55) {
    *(undefined4 *)(param_1 + 0x1030) = 0x113;
  }
  else if (param_2 == 0x56) {
    *(undefined4 *)(param_1 + 0x1030) = 0x118;
  }
  FUN_004144d0(&local_20);
  return;
}

