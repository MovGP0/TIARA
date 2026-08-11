/* Ghidra address: 00f6e1b0 */
/* Ghidra symbol: FUN_00f6e1b0 */


void FUN_00f6e1b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)*(int *)(param_1 + 0x28) * 8) = param_2;
  *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 4 + (longlong)*(int *)(param_1 + 0x28) * 8) =
       param_3;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

