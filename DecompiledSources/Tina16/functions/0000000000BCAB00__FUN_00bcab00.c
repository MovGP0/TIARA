/* Ghidra address: 00bcab00 */
/* Ghidra symbol: FUN_00bcab00 */


undefined8 * FUN_00bcab00(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  int local_28 [2];
  undefined1 local_20;
  
  uVar1 = param_3 & 0xffff;
  if (uVar1 < 0x15) {
    if (uVar1 == 0x14) {
      FUN_00414ad0(param_2,L"EXACTLY/CI");
      goto LAB_00bcb0a7;
    }
    if (uVar1 < 0xb) {
      if (uVar1 == 10) {
        FUN_00414ad0(param_2,L"STAR");
        goto LAB_00bcb0a7;
      }
      if (uVar1 < 6) {
        if (uVar1 == 5) {
          FUN_00414ad0(param_2,L"ANYBUT");
          goto LAB_00bcb0a7;
        }
        if (uVar1 < 3) {
          if (uVar1 == 2) {
            FUN_00414ad0(param_2,&DAT_00bcb0e4);
            goto LAB_00bcb0a7;
          }
          if (uVar1 == 0) {
            FUN_00414ad0(param_2,&DAT_00bcb36c);
            goto LAB_00bcb0a7;
          }
          if (uVar1 == 1) {
            FUN_00414ad0(param_2,&DAT_00bcb0d0);
            goto LAB_00bcb0a7;
          }
        }
        else {
          if (uVar1 == 3) {
            FUN_00414ad0(param_2,&DAT_00bcb160);
            goto LAB_00bcb0a7;
          }
          if (uVar1 == 4) {
            FUN_00414ad0(param_2,L"ANYOF");
            goto LAB_00bcb0a7;
          }
        }
      }
      else {
        if (uVar1 == 6) {
          FUN_00414ad0(param_2,L"BRANCH");
          goto LAB_00bcb0a7;
        }
        if (uVar1 == 7) {
          FUN_00414ad0(param_2,L"BACK");
          goto LAB_00bcb0a7;
        }
        if (uVar1 == 8) {
          FUN_00414ad0(param_2,L"EXACTLY");
          goto LAB_00bcb0a7;
        }
        if (uVar1 == 9) {
          FUN_00414ad0(param_2,L"NOTHING");
          goto LAB_00bcb0a7;
        }
      }
    }
    else if (uVar1 < 0x10) {
      if (uVar1 == 0xf) {
        FUN_00414ad0(param_2,L"NOTLETTER");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0xb) {
        FUN_00414ad0(param_2,L"PLUS");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0xc) {
        FUN_00414ad0(param_2,L"ANYDIGIT");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0xd) {
        FUN_00414ad0(param_2,L"NOTDIGIT");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0xe) {
        FUN_00414ad0(param_2,L"ANYLETTER");
        goto LAB_00bcb0a7;
      }
    }
    else {
      if (uVar1 == 0x10) {
        FUN_00414ad0(param_2,L"ANYSPACE");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x11) {
        FUN_00414ad0(param_2,L"NOTSPACE");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x12) {
        FUN_00414ad0(param_2,L"BRACES");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x13) {
        FUN_00414ad0(param_2,L"COMMENT");
        goto LAB_00bcb0a7;
      }
    }
  }
  else if (uVar1 < 0x20) {
    if (uVar1 == 0x1f) {
      FUN_00414ad0(param_2,L"PLUSNG");
      goto LAB_00bcb0a7;
    }
    if (uVar1 < 0x1a) {
      if (uVar1 == 0x19) {
        FUN_00414ad0(param_2,L"ANYOFTINYSET");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x15) {
        FUN_00414ad0(param_2,L"ANYOF/CI");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x16) {
        FUN_00414ad0(param_2,L"ANYBUT/CI");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x17) {
        FUN_00414ad0(param_2,L"LOOPENTRY");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x18) {
        FUN_00414ad0(param_2,L"LOOP");
        goto LAB_00bcb0a7;
      }
    }
    else {
      if (uVar1 == 0x1a) {
        FUN_00414ad0(param_2,L"ANYBUTTINYSET");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x1c) {
        FUN_00414ad0(param_2,L"BSUBEXP");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x1d) {
        FUN_00414ad0(param_2,L"BSUBEXP/CI");
        goto LAB_00bcb0a7;
      }
      if (uVar1 == 0x1e) {
        FUN_00414ad0(param_2,L"STARNG");
        goto LAB_00bcb0a7;
      }
    }
  }
  else if (uVar1 < 0x25) {
    if (uVar1 == 0x24) {
      FUN_00414ad0(param_2,L"ANYML");
      goto LAB_00bcb0a7;
    }
    if (uVar1 == 0x20) {
      FUN_00414ad0(param_2,L"BRACESNG");
      goto LAB_00bcb0a7;
    }
    if (uVar1 == 0x21) {
      FUN_00414ad0(param_2,L"LOOPNG");
      goto LAB_00bcb0a7;
    }
    if (uVar1 == 0x22) {
      FUN_00414ad0(param_2,L"BOLML");
      goto LAB_00bcb0a7;
    }
    if (uVar1 == 0x23) {
      FUN_00414ad0(param_2,L"EOLML");
      goto LAB_00bcb0a7;
    }
  }
  else {
    if (uVar1 == 0x25) {
      FUN_00414ad0(param_2,L"BOUND");
      goto LAB_00bcb0a7;
    }
    if (uVar1 == 0x26) {
      FUN_00414ad0(param_2,L"NOTBOUND");
      goto LAB_00bcb0a7;
    }
    if (uVar1 - 0x28 < 0xe) {
      local_28[0] = ((uint)param_3 & 0xffff) - 0x27;
      local_20 = 0;
      FUN_00442f70(param_2,L"OPEN[%d]",local_28,0);
      goto LAB_00bcb0a7;
    }
    if (uVar1 - 0x37 < 0xe) {
      local_28[0] = ((uint)param_3 & 0xffff) - 0x36;
      local_20 = 0;
      FUN_00442f70(param_2,L"CLOSE[%d]",local_28,0);
      goto LAB_00bcb0a7;
    }
  }
  (**(code **)*param_1)(param_1,0x3f3);
LAB_00bcb0a7:
  FUN_00416ba0(param_2,&LAB_00bcb548,*param_2);
  return param_2;
}

