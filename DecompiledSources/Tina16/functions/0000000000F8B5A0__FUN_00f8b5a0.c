/* Ghidra address: 00f8b5a0 */
/* Ghidra symbol: FUN_00f8b5a0 */


undefined4 FUN_00f8b5a0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
  if (0 < param_2) {
    param_2 = (param_2 - *(int *)(lVar2 + 0x38)) - *(int *)(param_1 + 0x33e0);
  }
  if (((longlong)param_2 < (longlong)(ulonglong)*(uint *)(lVar2 + 0x34)) && (-1 < param_2)) {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + (longlong)param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

