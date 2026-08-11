/* Ghidra address: 00b3eec0 */
/* Ghidra symbol: FUN_00b3eec0 */


void FUN_00b3eec0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  if (*(uint *)(param_1 + 0x10) < param_3 * 8) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  uVar2 = 0x40 - uVar1;
  if (param_3 < uVar2) {
    uVar2 = 0;
  }
  else {
    FUN_00b3dff0(param_1 + 0x18 + (ulonglong)uVar1,param_2,uVar2);
    FUN_00b3e030(param_1,param_1 + 0x18);
    for (; uVar2 + 0x3f < param_3; uVar2 = uVar2 + 0x40) {
      FUN_00b3e030(param_1,param_2 + (ulonglong)uVar2);
    }
    uVar1 = 0;
  }
  FUN_00b3dff0(param_1 + 0x18 + (ulonglong)uVar1,param_2 + (ulonglong)uVar2,param_3 - uVar2);
  return;
}

