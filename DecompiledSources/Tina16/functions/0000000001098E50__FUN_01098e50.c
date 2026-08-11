/* Ghidra address: 01098e50 */
/* Ghidra symbol: FUN_01098e50 */


void FUN_01098e50(longlong param_1)

{
  ulonglong uVar1;
  
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x150);
  uVar1 = (ulonglong)
          *(ushort *)(*(longlong *)(param_1 + 0x120) + (longlong)*(int *)(param_1 + 0x150) * 2);
  if (uVar1 < 0x23) {
    if (uVar1 == 0x22) {
      FUN_01098d00(param_1);
      goto LAB_01098f78;
    }
    if (uVar1 < 0xb) {
      uVar1 = uVar1 - 1;
      if (uVar1 == 0xffffffffffffffff) {
        FUN_010983d0(param_1);
        goto LAB_01098f78;
      }
      if (8 < uVar1) {
        if (uVar1 == 9) {
          FUN_01098450(param_1);
          goto LAB_01098f78;
        }
        goto LAB_01098f70;
      }
    }
    else if (1 < uVar1 - 0xb) {
      if (uVar1 == 0xd) {
        FUN_01098400(param_1);
        goto LAB_01098f78;
      }
      if (0x12 < uVar1 - 0xe) goto LAB_01098f70;
    }
    FUN_01098360(param_1);
  }
  else {
    if (uVar1 < 0x41) {
      if (uVar1 == 0x27) {
        FUN_01098980(param_1);
        goto LAB_01098f78;
      }
      if (uVar1 == 0x2d) {
        FUN_01098b00(param_1);
        goto LAB_01098f78;
      }
      if (uVar1 - 0x30 < 10) {
        FUN_01098c30(param_1);
        goto LAB_01098f78;
      }
    }
    else if (((uVar1 - 0x41 < 0x1a) || (uVar1 == 0x5f)) || (uVar1 - 0x61 < 0x1a)) {
      FUN_01098ba0(param_1);
      goto LAB_01098f78;
    }
LAB_01098f70:
    FUN_01098e20(param_1);
  }
LAB_01098f78:
  FUN_00bc2200(param_1);
  return;
}

