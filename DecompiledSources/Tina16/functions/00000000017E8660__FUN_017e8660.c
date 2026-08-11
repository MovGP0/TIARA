/* Ghidra address: 017e8660 */
/* Ghidra symbol: FUN_017e8660 */


void FUN_017e8660(longlong param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  
  FUN_017e2d40(param_1,param_3,param_2);
  cVar1 = FUN_017e28e0(param_1);
  if (cVar1 == '\0') {
    if (param_2 < 0x136) {
      if (param_2 == 0x135) {
        FUN_010c89b0(param_3);
      }
      else if (param_2 < 0x12f) {
        if (param_2 == 0x12e) {
          FUN_010c86b0(param_3);
        }
        else if (param_2 < 299) {
          if (param_2 == 0x12a) {
            FUN_017e9480(param_1,param_3);
          }
          else if (param_2 == 0x11a) {
            FUN_010c8470(param_3);
          }
          else if (param_2 == 0x128) {
            FUN_017e93c0(param_1,param_3);
          }
          else if (param_2 == 0x129) {
            FUN_017e9420(param_1,param_3);
          }
        }
        else if (param_2 == 299) {
          FUN_010c86d0(param_3);
        }
        else if (param_2 == 300) {
          FUN_010c86f0(param_3);
        }
        else if (param_2 == 0x12d) {
          FUN_010c8720(param_3);
        }
      }
      else if (param_2 < 0x133) {
        if (param_2 == 0x132) {
          FUN_010c8870(param_3);
        }
        else if (param_2 == 0x12f) {
          FUN_010c8670(param_3);
        }
        else if (param_2 == 0x130) {
          FUN_010c87e0(param_3);
        }
        else if (param_2 == 0x131) {
          FUN_010c8830(param_3);
        }
      }
      else if (param_2 == 0x133) {
        FUN_010c88d0(param_3);
      }
      else if (param_2 == 0x134) {
        FUN_010c8950(param_3);
      }
    }
    else if (param_2 < 0x14e) {
      if (param_2 == 0x14d) {
        FUN_010c8b40(param_3);
      }
      else if (param_2 < 0x13a) {
        if (param_2 == 0x139) {
          FUN_017e2900(param_1,0x104);
          return;
        }
        if (param_2 == 0x136) {
          FUN_010c8a60(param_3);
        }
        else if (param_2 == 0x137) {
          FUN_010c8a70(param_3);
        }
        else if (param_2 == 0x138) {
          FUN_017e94d0(param_1,param_3,*(undefined1 *)(param_1 + 0x629));
        }
      }
      else if (param_2 == 0x148) {
        FUN_010c8ac0(param_3);
      }
      else if (param_2 == 0x149) {
        FUN_010c8ae0(param_3);
      }
      else if (param_2 == 0x14a) {
        FUN_010c8b10(param_3);
      }
    }
    else if (param_2 < 0x17a) {
      if (param_2 == 0x179) {
        FUN_010c9210(param_3);
      }
      else if (param_2 == 0x14e) {
        FUN_010c8a90(param_3);
      }
      else if (param_2 == 0x177) {
        FUN_010c9180(param_3);
      }
      else if (param_2 == 0x178) {
        FUN_010c90f0(param_3);
      }
    }
    else if (param_2 == 0x17a) {
      FUN_010c92a0(param_3);
    }
    else if (param_2 == 0x17b) {
      FUN_010c9330(param_3);
    }
    cVar1 = FUN_010c7a10(*(undefined8 *)(param_3 + 0x10));
    if (cVar1 != '\0') {
      *(undefined8 *)(param_3 + 0x10) = 0;
      *param_3 = 0;
    }
  }
  return;
}

