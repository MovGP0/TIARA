/* Ghidra address: 0084b4c0 */
/* Ghidra symbol: FUN_0084b4c0 */


void FUN_0084b4c0(longlong param_1,undefined4 param_2)

{
  short sVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_00411a80(param_1,param_2);
  sVar1 = *(short *)(param_1 + 0x1c);
  for (uVar3 = 0; (uint)uVar3 < *(uint *)(param_1 + 0x10); uVar3 = (ulonglong)((uint)uVar3 + 1)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
    if (lVar2 != 0) {
      FUN_004095f0(lVar2,sVar1 * 8);
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10) * 8);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

