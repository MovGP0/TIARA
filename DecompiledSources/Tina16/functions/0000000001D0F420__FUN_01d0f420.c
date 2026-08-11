/* Ghidra address: 01d0f420 */
/* Ghidra symbol: FUN_01d0f420 */


void FUN_01d0f420(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 < *(int *)(param_1 + 0x10)) {
    param_2 = *(int *)(param_1 + 0x10);
  }
  if (0x7ffffff < param_2) {
    param_2 = 0x7ffffff;
  }
  if (param_2 != *(int *)(param_1 + 0x14)) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00409570((longlong)(param_2 << 3));
      if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
        FUN_00409a70(*(undefined8 *)(param_1 + 8),uVar1,(longlong)(*(int *)(param_1 + 0x10) * 8));
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_004095f0(*(undefined8 *)(param_1 + 8),(longlong)(*(int *)(param_1 + 0x14) * 8));
    }
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(int *)(param_1 + 0x14) = param_2;
  }
  return;
}

