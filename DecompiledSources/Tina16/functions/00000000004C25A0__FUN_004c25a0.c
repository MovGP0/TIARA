/* Ghidra address: 004c25a0 */
/* Ghidra symbol: FUN_004c25a0 */


void FUN_004c25a0(undefined8 param_1)

{
  ulonglong uVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_004c23c0(param_1);
  uVar1 = uVar1 & 0xff;
  if (uVar1 < 0xd) {
    if (uVar1 == 0xc) {
      FUN_004c24c0(auStack_38,1);
    }
    else if (uVar1 < 6) {
      if (uVar1 == 5) {
        FUN_004c3080(param_1,10);
      }
      else if (uVar1 == 1) {
        FUN_004c2480(auStack_38);
      }
      else if (uVar1 == 2) {
        FUN_004c3080(param_1,1);
      }
      else if (uVar1 == 3) {
        FUN_004c3080(param_1,2);
      }
      else if (uVar1 == 4) {
        FUN_004c3080(param_1,4);
      }
    }
    else if (uVar1 - 6 < 2) {
      FUN_004c1d80(param_1,&local_10);
    }
    else if (uVar1 == 10) {
      FUN_004c24c0(auStack_38,1);
    }
    else if (uVar1 == 0xb) {
      FUN_004c2420(param_1);
    }
  }
  else if (uVar1 < 0x13) {
    if (uVar1 == 0x12) {
      FUN_004c24c0(auStack_38,2);
    }
    else if (uVar1 == 0xe) {
      FUN_004c2500(auStack_38);
    }
    else if (uVar1 == 0xf) {
      FUN_004c3080(param_1,4);
    }
    else if (uVar1 == 0x10) {
      FUN_004c3080(param_1,8);
    }
    else if (uVar1 == 0x11) {
      FUN_004c3080(param_1,8);
    }
  }
  else if (uVar1 == 0x13) {
    FUN_004c3080(param_1,8);
  }
  else if (uVar1 == 0x14) {
    FUN_004c24c0(auStack_38,1);
  }
  else if (uVar1 == 0x15) {
    FUN_004c3080(param_1,8);
  }
  FUN_00414480(&local_10);
  return;
}

