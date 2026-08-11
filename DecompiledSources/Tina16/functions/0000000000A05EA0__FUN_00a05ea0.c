/* Ghidra address: 00a05ea0 */
/* Ghidra symbol: FUN_00a05ea0 */


void FUN_00a05ea0(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  while (*(int *)(lVar1 + 0x901c) < *param_2) {
    FUN_00a05e80(param_1,*(undefined4 *)(lVar1 + 0x4010 + (longlong)*param_2 * 4));
    *param_2 = *(int *)(lVar1 + 0x10 + (longlong)*param_2 * 4);
  }
  FUN_00a05e80(param_1,*param_2);
  return;
}

