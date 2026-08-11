/* Ghidra address: 0169e2a0 */
/* Ghidra symbol: FUN_0169e2a0 */


void FUN_0169e2a0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 8);
  if (param_2 < 0x21) {
    if (param_2 == 0x20) {
      *(undefined4 *)(param_1 + 0x1030) = 0x128;
    }
    else if (param_2 < 0x11) {
      if (param_2 == 0x10) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 < 9) {
        if (param_2 == 8) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 < 5) {
          if (param_2 == 4) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 == 1) {
            *(undefined8 *)(lVar1 + 0x18) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 == 2) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
          else if (param_2 == 3) {
            *(undefined8 *)(param_1 + 0x1030) =
                 *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
          }
        }
        else if (param_2 == 5) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),1000)
          ;
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -4) * 8)
                               ,uVar2,0x125);
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 6) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0,1000
                              );
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,uVar2,0x125);
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 7) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),1000)
          ;
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -4) * 8)
                               ,uVar2,0x125);
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 < 0xd) {
        if (param_2 == 0xc) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 == 9) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x11d
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 10) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 == 0xb) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x11c
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 == 0xd) {
        uVar2 = FUN_016984a0(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x11b);
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0xe) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 0xf) {
        uVar2 = FUN_01698500(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                             *(undefined4 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
    }
    else if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        uVar2 = FUN_016984a0(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                             *(undefined4 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 < 0x15) {
        if (param_2 == 0x14) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 == 0x11) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                               *(undefined4 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8)
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
        else if (param_2 == 0x12) {
          *(undefined8 *)(param_1 + 0x1030) =
               *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
        }
        else if (param_2 == 0x13) {
          uVar2 = FUN_01698500(*(undefined8 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8)
                               ,*(undefined8 *)
                                 (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                               *(undefined4 *)
                                (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8)
                              );
          *(undefined8 *)(param_1 + 0x1030) = uVar2;
        }
      }
      else if (param_2 == 0x15) {
        uVar2 = FUN_01698500(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x15c);
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x16) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 0x17) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
      }
    }
    else if (param_2 < 0x1d) {
      if (param_2 == 0x1c) {
        uVar2 = FUN_00409570(*(byte *)(*(longlong *)(lVar1 + 0x10) + 0x40) + 1);
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
        FUN_004154b0(&local_20,*(longlong *)(lVar1 + 0x10) + 0x40,0);
        FUN_004425e0(uVar2,local_20);
      }
      else if (param_2 == 0x19) {
        uVar2 = FUN_01698550(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x1a) {
        uVar2 = FUN_016985b0(*(undefined8 *)
                              (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 0x1b) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
    }
    else if (param_2 == 0x1d) {
      *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x98);
    }
    else if (param_2 == 0x1e) {
      uVar2 = FUN_016984a0(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                           *(undefined4 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8));
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
    }
    else if (param_2 == 0x1f) {
      uVar2 = FUN_01698500(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -3) * 8),
                           *(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                           *(undefined4 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -5) * 8));
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
    }
  }
  else if (param_2 < 0x31) {
    if (param_2 == 0x30) {
      *(undefined4 *)(param_1 + 0x1030) = 0x15e;
    }
    else if (param_2 < 0x29) {
      if (param_2 == 0x28) {
        *(undefined4 *)(param_1 + 0x1030) = 0x133;
      }
      else if (param_2 < 0x25) {
        if (param_2 == 0x24) {
          *(undefined4 *)(param_1 + 0x1030) = 0x12d;
        }
        else if (param_2 == 0x21) {
          *(undefined4 *)(param_1 + 0x1030) = 0x129;
        }
        else if (param_2 == 0x22) {
          *(undefined4 *)(param_1 + 0x1030) = 0x12a;
        }
        else if (param_2 == 0x23) {
          *(undefined4 *)(param_1 + 0x1030) = 299;
        }
      }
      else if (param_2 == 0x25) {
        *(undefined4 *)(param_1 + 0x1030) = 0x130;
      }
      else if (param_2 == 0x26) {
        *(undefined4 *)(param_1 + 0x1030) = 0x14e;
      }
      else if (param_2 == 0x27) {
        *(undefined4 *)(param_1 + 0x1030) = 0x131;
      }
    }
    else if (param_2 < 0x2d) {
      if (param_2 == 0x2c) {
        *(undefined4 *)(param_1 + 0x1030) = 0x157;
      }
      else if (param_2 == 0x29) {
        *(undefined4 *)(param_1 + 0x1030) = 0x134;
      }
      else if (param_2 == 0x2a) {
        *(undefined4 *)(param_1 + 0x1030) = 0x152;
      }
      else if (param_2 == 0x2b) {
        *(undefined4 *)(param_1 + 0x1030) = 0x156;
      }
    }
    else if (param_2 == 0x2d) {
      *(undefined4 *)(param_1 + 0x1030) = 0x159;
    }
    else if (param_2 == 0x2e) {
      *(undefined4 *)(param_1 + 0x1030) = 0x15a;
    }
    else if (param_2 == 0x2f) {
      *(undefined4 *)(param_1 + 0x1030) = 0x15b;
    }
  }
  else if (param_2 < 0x39) {
    if (param_2 == 0x38) {
      *(undefined4 *)(param_1 + 0x1030) = 0x158;
    }
    else if (param_2 < 0x35) {
      if (param_2 == 0x34) {
        *(undefined4 *)(param_1 + 0x1030) = 0x14f;
      }
      else if (param_2 == 0x31) {
        *(undefined4 *)(param_1 + 0x1030) = 0x15f;
      }
      else if (param_2 == 0x32) {
        *(undefined4 *)(param_1 + 0x1030) = 0x160;
      }
      else if (param_2 == 0x33) {
        *(undefined4 *)(param_1 + 0x1030) = 0x163;
      }
    }
    else if (param_2 == 0x35) {
      *(undefined4 *)(param_1 + 0x1030) = 0x150;
    }
    else if (param_2 == 0x36) {
      *(undefined4 *)(param_1 + 0x1030) = 0x154;
    }
    else if (param_2 == 0x37) {
      *(undefined4 *)(param_1 + 0x1030) = 0x153;
    }
  }
  else if (param_2 < 0x3d) {
    if (param_2 == 0x3c) {
      *(undefined4 *)(param_1 + 0x1030) = 0x110;
    }
    else if (param_2 == 0x39) {
      *(undefined4 *)(param_1 + 0x1030) = 0x162;
    }
    else if (param_2 == 0x3a) {
      *(undefined4 *)(param_1 + 0x1030) = 0x10e;
    }
    else if (param_2 == 0x3b) {
      *(undefined4 *)(param_1 + 0x1030) = 0x10f;
    }
  }
  else if (param_2 == 0x3d) {
    *(undefined4 *)(param_1 + 0x1030) = 0x111;
  }
  else if (param_2 == 0x3e) {
    *(undefined4 *)(param_1 + 0x1030) = 0x115;
  }
  else if (param_2 == 0x3f) {
    *(undefined4 *)(param_1 + 0x1030) = 0x117;
  }
  FUN_004144d0(&local_20);
  return;
}

