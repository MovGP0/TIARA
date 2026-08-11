/* Ghidra address: 014b1a70 */
/* Ghidra symbol: FUN_014b1a70 */


void FUN_014b1a70(longlong param_1)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
  if (*(char *)(param_1 + 0x160) == '\x01') {
    FUN_014b10d0(param_1);
    goto LAB_014b1bb9;
  }
  uVar1 = (ulonglong)
          *(ushort *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  if (0x22 < uVar1) {
    if (uVar1 < 0x60) {
      if (uVar1 != 0x5f) {
        if (uVar1 == 0x2a) {
          FUN_014b1720(param_1);
          goto LAB_014b1bb9;
        }
        if (uVar1 - 0x30 < 10) {
          FUN_014b1870(param_1);
          goto LAB_014b1bb9;
        }
        if (0x19 < uVar1 - 0x41) goto LAB_014b1bb1;
      }
    }
    else if (0x19 < uVar1 - 0x61) {
      if (uVar1 - 0x61 == 0x1a) {
        FUN_014b10a0(param_1);
        goto LAB_014b1bb9;
      }
      goto LAB_014b1bb1;
    }
    FUN_014b17e0(param_1);
    goto LAB_014b1bb9;
  }
  if (uVar1 == 0x22) {
    FUN_014b1920(param_1);
    goto LAB_014b1bb9;
  }
  if (uVar1 < 0xb) {
    uVar1 = uVar1 - 1;
    if (uVar1 == 0xffffffffffffffff) {
      FUN_014b0ff0(param_1);
      goto LAB_014b1bb9;
    }
    if (8 < uVar1) {
      if (uVar1 == 9) {
        FUN_014b1070(param_1);
        goto LAB_014b1bb9;
      }
LAB_014b1bb1:
      FUN_014b1a40(param_1);
      goto LAB_014b1bb9;
    }
  }
  else if (1 < uVar1 - 0xb) {
    if (uVar1 == 0xd) {
      FUN_014b1020(param_1);
      goto LAB_014b1bb9;
    }
    if (0x12 < uVar1 - 0xe) goto LAB_014b1bb1;
  }
  FUN_014b0f80(param_1);
LAB_014b1bb9:
  FUN_00bc2200(param_1);
  return;
}

