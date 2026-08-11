/* Ghidra address: 013bdcf0 */
/* Ghidra symbol: FUN_013bdcf0 */


void FUN_013bdcf0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2050) + 8);
  if (param_2 < 0x5d) {
    if (param_2 == 0x5c) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 < 0x30) {
      if (param_2 == 0x2f) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x19) {
        if (param_2 == 0x18) {
          FUN_01695da0(lVar1,*DAT_02004b08);
          if (*(longlong *)PTR_DAT_02002d20 != 0) {
            uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
            thunk_FUN_041b2403(uVar3,0x5f7,0,0);
          }
        }
        else if (param_2 < 0xe) {
          if (param_2 == 0xd) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 < 8) {
            if (param_2 == 7) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
            else if (param_2 < 4) {
              if (param_2 == 3) {
                *(undefined4 *)(param_1 + 0x1028) =
                     *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
              }
              else if (param_2 == 1) {
                *(undefined4 *)(param_1 + 0x1028) =
                     *(undefined4 *)
                      (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
              }
              else if (param_2 == 2) {
                *(undefined4 *)(param_1 + 0x1028) =
                     *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
              }
            }
            else if (param_2 == 5) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
            else if (param_2 == 6) {
              FUN_01697c40(lVar1,7);
              FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
            }
          }
          else if (param_2 < 0xb) {
            if (param_2 == 10) {
              FUN_01697c40(lVar1,5);
              FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
            }
            else if (param_2 == 8) {
              FUN_01697c40(lVar1,8);
              FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
            }
            else if (param_2 == 9) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
          }
          else if (param_2 == 0xb) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0xc) {
            FUN_01697c40(lVar1,6);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
          }
        }
        else if (param_2 < 0x14) {
          if (param_2 == 0x13) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 < 0x11) {
            if (param_2 == 0x10) {
              FUN_01697c40(lVar1,9);
              FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
            }
            else if (param_2 == 0xe) {
              FUN_01697c40(lVar1,2);
              FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
            }
            else if (param_2 == 0xf) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
          }
          else if (param_2 == 0x11) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
          else if (param_2 == 0x12) {
            FUN_01697c40(lVar1,0xc);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
          }
        }
        else if (param_2 == 0x14) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
        }
        else if (param_2 == 0x15) {
          FUN_01695da0(lVar1,*PTR_DAT_02004b10);
          if (*(longlong *)PTR_DAT_02002d20 != 0) {
            uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
            thunk_FUN_041b2403(uVar3,0x5f7,0,0);
          }
        }
        else if (param_2 == 0x16) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x17) {
          FUN_01697c40(lVar1,0xf);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
      }
      else if (param_2 < 0x25) {
        if (param_2 == 0x24) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x1f) {
          if (param_2 == 0x1e) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
          else if (param_2 < 0x1c) {
            if (param_2 == 0x1b) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
            else if (param_2 == 0x19) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
            }
            else if (param_2 == 0x1a) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
            }
          }
          else if (param_2 == 0x1c) {
            FUN_01697c40(lVar1,0x10);
            FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
          }
          else if (param_2 == 0x1d) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 < 0x22) {
          if (param_2 == 0x21) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x1f) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4)
            ;
          }
          else if (param_2 == 0x20) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x22) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x23) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
        }
      }
      else if (param_2 < 0x2b) {
        if (param_2 == 0x2a) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4);
        }
        else if (param_2 < 0x28) {
          if (param_2 == 0x27) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
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
      else if (param_2 == 0x2b) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -5) * 4);
      }
      else if (param_2 == 0x2c) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
      }
      else if (param_2 == 0x2d) {
        FUN_01697c40(lVar1,0x11);
        FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
      }
      else if (param_2 == 0x2e) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
      }
    }
    else if (param_2 < 0x47) {
      if (param_2 == 0x46) {
        FUN_01697c40(lVar1,0x13);
        FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
      }
      else if (param_2 < 0x3c) {
        if (param_2 == 0x3b) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 < 0x36) {
          if (param_2 == 0x35) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 < 0x33) {
            if (param_2 == 0x32) {
              FUN_01697c40(lVar1,0x12);
              FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
            }
            else if (param_2 == 0x30) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
            else if (param_2 == 0x31) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -6) * 4);
            }
          }
          else if (param_2 == 0x33) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4)
            ;
          }
          else if (param_2 == 0x34) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 < 0x39) {
          if (param_2 == 0x38) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x36) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4)
            ;
          }
          else if (param_2 == 0x37) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x39) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x3a) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
      }
      else if (param_2 < 0x42) {
        if (param_2 == 0x41) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x3f) {
          if (param_2 == 0x3e) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x3c) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4)
            ;
          }
          else if (param_2 == 0x3d) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x3f) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x40) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x42) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x43) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x44) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x45) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
      }
    }
    else if (param_2 < 0x52) {
      if (param_2 == 0x51) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -4) * 4);
      }
      else if (param_2 < 0x4d) {
        if (param_2 == 0x4c) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x4a) {
          if (param_2 == 0x49) {
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
        }
        else if (param_2 == 0x4a) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x4b) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x4d) {
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
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
      }
    }
    else if (param_2 < 0x58) {
      if (param_2 == 0x57) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x55) {
        if (param_2 == 0x54) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
        }
        else if (param_2 == 0x52) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -4) * 4);
        }
        else if (param_2 == 0x53) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x55) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x56) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 == 0x58) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x59) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x5a) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x5b) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
  }
  else if (param_2 < 0x8a) {
    if (param_2 == 0x89) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
    }
    else if (param_2 < 0x74) {
      if (param_2 == 0x73) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x69) {
        if (param_2 == 0x68) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 99) {
          if (param_2 == 0x62) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 < 0x60) {
            if (param_2 == 0x5f) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
            }
            else if (param_2 == 0x5d) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
            }
            else if (param_2 == 0x5e) {
              *(undefined4 *)(param_1 + 0x1028) =
                   *(undefined4 *)
                    (param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -4) * 4);
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
        else if (param_2 < 0x66) {
          if (param_2 == 0x65) {
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
        }
        else if (param_2 == 0x66) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x67) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 < 0x6f) {
        if (param_2 == 0x6e) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x6c) {
          if (param_2 == 0x6b) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x69) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x6a) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x6c) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x6d) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x6f) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x70) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x71) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x72) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x7f) {
      if (param_2 == 0x7e) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x7a) {
        if (param_2 == 0x79) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 < 0x77) {
          if (param_2 == 0x76) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x74) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
          else if (param_2 == 0x75) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
          }
        }
        else if (param_2 == 0x77) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x78) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x7a) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x7b) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x7c) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x7d) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x85) {
      if (param_2 == 0x84) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x82) {
        if (param_2 == 0x81) {
          FUN_01697c40(lVar1,0xe);
          FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
        }
        else if (param_2 == 0x7f) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0x80) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
        }
      }
      else if (param_2 == 0x82) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x83) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
      }
    }
    else if (param_2 == 0x85) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
    }
    else if (param_2 == 0x86) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x87) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
    }
    else if (param_2 == 0x88) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
  }
  else if (param_2 < 0xa1) {
    if (param_2 == 0xa0) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 < 0x96) {
      if (param_2 == 0x95) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x90) {
        if (param_2 == 0x8f) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -5) * 4);
        }
        else if (param_2 < 0x8d) {
          if (param_2 == 0x8c) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -6) * 4)
            ;
          }
          else if (param_2 == 0x8a) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4)
            ;
          }
          else if (param_2 == 0x8b) {
            *(undefined4 *)(param_1 + 0x1028) =
                 *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -3) * 4)
            ;
          }
        }
        else if (param_2 == 0x8d) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -6) * 4);
        }
        else if (param_2 == 0x8e) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -5) * 4);
        }
      }
      else if (param_2 < 0x93) {
        if (param_2 == 0x92) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -9) * 4);
        }
        else if (param_2 == 0x90) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -5) * 4);
        }
        else if (param_2 == 0x91) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -5) * 4);
        }
      }
      else if (param_2 == 0x93) {
        FUN_01697c40(lVar1,0xe);
        FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
      }
      else if (param_2 == 0x94) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 < 0x9c) {
      if (param_2 == 0x9b) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0x99) {
        if (param_2 == 0x98) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x96) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
        else if (param_2 == 0x97) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
        }
      }
      else if (param_2 == 0x99) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 == 0x9a) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
    }
    else if (param_2 == 0x9c) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x9d) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x9e) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
    }
    else if (param_2 == 0x9f) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
    }
  }
  else if (param_2 < 0xac) {
    if (param_2 == 0xab) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
    }
    else if (param_2 < 0xa7) {
      if (param_2 == 0xa6) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)*(int *)(param_1 + 0x102c) * 4);
      }
      else if (param_2 < 0xa4) {
        if (param_2 == 0xa3) {
          FUN_01695da0(lVar1,*PTR_DAT_02004b10);
          if (*(longlong *)PTR_DAT_02002d20 != 0) {
            uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
            thunk_FUN_041b2403(uVar3,0x5f7,0,0);
          }
        }
        else if (param_2 == 0xa1) {
          *(undefined4 *)(param_1 + 0x1028) =
               *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
        }
        else if (param_2 == 0xa2) {
          FUN_01695da0(lVar1,*PTR_DAT_02003f70);
          if (*(longlong *)PTR_DAT_02002d20 != 0) {
            uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
            thunk_FUN_041b2403(uVar3,0x5f7,0,0);
          }
        }
      }
      else if (param_2 == 0xa4) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -1) * 4);
      }
      else if (param_2 == 0xa5) {
        *(undefined4 *)(param_1 + 0x1028) =
             *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -4) * 4);
      }
    }
    else if (param_2 == 0xa7) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
    }
    else if (param_2 == 0xa8) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -2) * 4);
    }
    else if (param_2 == 0xa9) {
      *(undefined4 *)(param_1 + 0x1028) =
           *(undefined4 *)(param_1 + 0x102c + (longlong)(*(int *)(param_1 + 0x102c) + -4) * 4);
    }
    else if (param_2 == 0xaa) {
      FUN_01697c40(lVar1,0x15);
      FUN_00e08650(*(undefined8 *)(*(longlong *)(param_1 + 0x2050) + 0x10));
    }
  }
  else if (param_2 < 0xb2) {
    if (param_2 == 0xb1) {
      FUN_01695da0(lVar1,*PTR_DAT_02004b10);
    }
    else if (param_2 < 0xaf) {
      if (param_2 == 0xae) {
        FUN_01695da0(lVar1,*PTR_DAT_02001c98);
      }
      else if (param_2 == 0xac) {
        FUN_01695da0(lVar1,*PTR_DAT_02001c98);
      }
      else if (param_2 == 0xad) {
        FUN_01695da0(lVar1,*PTR_DAT_02005a48);
      }
    }
    else if (param_2 == 0xaf) {
      FUN_01695da0(lVar1,*PTR_DAT_02005a48);
    }
    else if (param_2 == 0xb0) {
      FUN_01695da0(lVar1,*PTR_DAT_02001118);
    }
  }
  else if (param_2 == 0xb2) {
    FUN_00416e20(lVar1 + 0x2e0,1,1);
    if (*(char *)(lVar1 + 0x5f8) == '\0') {
      FUN_01697c40(lVar1,0x302);
    }
    else if (*(char *)(lVar1 + 0x5f8) == '\x02') {
      FUN_01697c40(lVar1,0x300);
    }
    cVar2 = FUN_017e2ac0(lVar1);
    if ((cVar2 != '\0') && (*(longlong *)PTR_DAT_02002d20 != 0)) {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
      thunk_FUN_041b2403(uVar3,0x5f4,0,0);
    }
  }
  else if (param_2 == 0xb3) {
    FUN_00416e20(lVar1 + 0x2e8,1,1);
    if (*(char *)(lVar1 + 0x5f8) == '\0') {
      FUN_01697c40(lVar1,0x303);
    }
    else if (*(char *)(lVar1 + 0x5f8) == '\x01') {
      FUN_01697c40(lVar1,0x301);
    }
    cVar2 = FUN_017e2ac0(lVar1);
    if ((cVar2 != '\0') && (*(longlong *)PTR_DAT_02002d20 != 0)) {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
      thunk_FUN_041b2403(uVar3,0x5f5,0,0);
    }
  }
  else if (param_2 == 0xb4) {
    FUN_00416e20(lVar1 + 0x2e0,1,1);
    if (*(char *)(lVar1 + 0x5f8) == '\0') {
      FUN_01697c40(lVar1,0x306);
    }
    else if (*(char *)(lVar1 + 0x5f8) == '\x02') {
      FUN_01697c40(lVar1,0x304);
    }
    cVar2 = FUN_017e2ac0(lVar1);
    if ((cVar2 != '\0') && (*(longlong *)PTR_DAT_02002d20 != 0)) {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
      thunk_FUN_041b2403(uVar3,0x5f4,0,0);
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
      thunk_FUN_041b2403(uVar3,0x5f6,0,0);
    }
  }
  else if (param_2 == 0xb5) {
    FUN_00416e20(lVar1 + 0x2e8,1,1);
    if (*(char *)(lVar1 + 0x5f8) == '\0') {
      FUN_01697c40(lVar1,0x307);
    }
    else if (*(char *)(lVar1 + 0x5f8) == '\x01') {
      FUN_01697c40(lVar1,0x305);
    }
    cVar2 = FUN_017e2ac0(lVar1);
    if ((cVar2 != '\0') && (*(longlong *)PTR_DAT_02002d20 != 0)) {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
      thunk_FUN_041b2403(uVar3,0x5f5,0,0);
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_02002d20);
      thunk_FUN_041b2403(uVar3,0x5f6,0,0);
    }
  }
  return;
}

