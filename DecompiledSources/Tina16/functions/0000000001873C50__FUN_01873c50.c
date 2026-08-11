/* Ghidra address: 01873c50 */
/* Ghidra symbol: FUN_01873c50 */


void FUN_01873c50(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18) >> 3 & 0x3f;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_3 * 8;
  if (*(uint *)(param_1 + 0x18) < param_3 * 8) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (param_3 >> 0x1d);
  uVar2 = 0x40 - uVar1;
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    FUN_00409a70(param_2,param_1 + 0x20 + (ulonglong)uVar1,uVar2);
    FUN_01873df0(param_1,param_1 + 0x20);
    for (; uVar2 + 0x3f < param_3; uVar2 = uVar2 + 0x40) {
      FUN_01873df0(param_1,param_2 + (ulonglong)uVar2);
    }
    uVar1 = 0;
  }
  FUN_00409a70(param_2 + (ulonglong)uVar2,param_1 + 0x20 + (ulonglong)uVar1,param_3 - uVar2);
  return;
}

