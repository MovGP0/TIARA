/* Ghidra address: 01996f80 */
/* Ghidra symbol: FUN_01996f80 */


void FUN_01996f80(longlong param_1,char param_2,undefined4 param_3)

{
  *(int *)(*(longlong *)(param_1 + 0xd0) + 0x388) = (int)param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x38c) = param_3;
  return;
}

