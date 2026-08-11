/* Ghidra address: 00c56eb0 */
/* Ghidra symbol: FUN_00c56eb0 */


void FUN_00c56eb0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4f8) != param_2) {
    FUN_00c55c70(param_1,*(int *)(param_1 + 0x4f8),0);
    *(int *)(param_1 + 0x4f8) = param_2;
    FUN_00c55c70(param_1,param_2,*(undefined1 *)(param_1 + 0x50d));
    FUN_00c55f20(param_1);
  }
  return;
}

