/* Ghidra address: 01699120 */
/* Ghidra symbol: FUN_01699120 */


void FUN_01699120(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x2050) + 8) + 0x10);
  if (param_2 < 0x39) {
    if (param_2 == 0x38) {
      FUN_01697c40(uVar1,5);
      FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
    }
    else if (param_2 < 0x1d) {
      if (param_2 == 0x1c) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0xf) {
        if (param_2 == 0xe) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 < 8) {
          if (param_2 == 7) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4)
            ;
          }
          else if (param_2 < 5) {
            if (param_2 == 4) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
            }
            else if (param_2 == 1) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
            }
            else if (param_2 == 2) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
            }
            else if (param_2 == 3) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
            }
          }
          else if (param_2 == 5) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
          else if (param_2 == 6) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
        }
        else if (param_2 < 0xc) {
          if (param_2 == 0xb) {
            FUN_01697c40(uVar1,0x20);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
          }
          else if (param_2 == 8) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4)
            ;
          }
          else if (param_2 == 9) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 10) {
            FUN_01697c40(uVar1,0x17);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
          }
        }
        else if (param_2 == 0xc) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0xd) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
      }
      else if (param_2 < 0x16) {
        if (param_2 == 0x15) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 < 0x13) {
          if (param_2 == 0x12) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
          else if (param_2 == 0xf) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4)
            ;
          }
          else if (param_2 == 0x10) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x11) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x13) {
          FUN_01697c40(uVar1,0x18);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
        else if (param_2 == 0x14) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
      }
      else if (param_2 < 0x1a) {
        if (param_2 == 0x19) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x16) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x17) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x18) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
      }
      else if (param_2 == 0x1a) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
      }
      else if (param_2 == 0x1b) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
      }
    }
    else if (param_2 < 0x2b) {
      if (param_2 == 0x2a) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x24) {
        if (param_2 == 0x23) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x21) {
          if (param_2 == 0x20) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x1d) {
            FUN_01697c40(uVar1,0x20);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
          }
          else if (param_2 == 0x1e) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x1f) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x21) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x22) {
          FUN_01697c40(uVar1,0x19);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
      }
      else if (param_2 < 0x28) {
        if (param_2 == 0x27) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x24) {
          FUN_01697c40(uVar1,0x19);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
        else if (param_2 == 0x25) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x26) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x28) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x29) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x32) {
      if (param_2 == 0x31) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4);
      }
      else if (param_2 < 0x2f) {
        if (param_2 == 0x2e) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x2b) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4);
        }
        else if (param_2 == 0x2c) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x2d) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
      }
      else if (param_2 == 0x2f) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
      }
      else if (param_2 == 0x30) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4);
      }
    }
    else if (param_2 < 0x36) {
      if (param_2 == 0x35) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
      }
      else if (param_2 == 0x32) {
        FUN_01697c40(uVar1,5);
        FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
      }
      else if (param_2 == 0x33) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
      }
      else if (param_2 == 0x34) {
        FUN_01697c40(uVar1,5);
        FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
      }
    }
    else if (param_2 == 0x36) {
      FUN_01697c40(uVar1,5);
      FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
    }
    else if (param_2 == 0x37) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4);
    }
  }
  else if (param_2 < 0x55) {
    if (param_2 == 0x54) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 < 0x47) {
      if (param_2 == 0x46) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x40) {
        if (param_2 == 0x3f) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x3d) {
          if (param_2 == 0x3c) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -4) * 4)
            ;
          }
          else if (param_2 == 0x39) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x3a) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
          else if (param_2 == 0x3b) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
        }
        else if (param_2 == 0x3d) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x3e) {
          FUN_01697c40(uVar1,5);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
      }
      else if (param_2 < 0x44) {
        if (param_2 == 0x43) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x40) {
          FUN_01697c40(uVar1,6);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
        else if (param_2 == 0x41) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x42) {
          FUN_01697c40(uVar1,2);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
      }
      else if (param_2 == 0x44) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x45) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x4e) {
      if (param_2 == 0x4d) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x4b) {
        if (param_2 == 0x4a) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x47) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x48) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x49) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x4b) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x4c) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x52) {
      if (param_2 == 0x51) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x4e) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x4f) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x50) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 == 0x52) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x53) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
  }
  else if (param_2 < 99) {
    if (param_2 == 0x62) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 < 0x5c) {
      if (param_2 == 0x5b) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x59) {
        if (param_2 == 0x58) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x55) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x56) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x57) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x59) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x5a) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x60) {
      if (param_2 == 0x5f) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x5c) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x5d) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x5e) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 == 0x60) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x61) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
  }
  else if (param_2 < 0x6a) {
    if (param_2 == 0x69) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 < 0x67) {
      if (param_2 == 0x66) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 99) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 100) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x65) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 == 0x67) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x68) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
  }
  else if (param_2 < 0x6e) {
    if (param_2 == 0x6d) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x6a) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x6b) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x6c) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
  }
  else if (param_2 == 0x6e) {
    *(undefined4 *)(param_1 + 0x1028) =
         *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
  }
  else if (param_2 == 0x6f) {
    *(undefined4 *)(param_1 + 0x1028) =
         *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
  }
  return;
}

