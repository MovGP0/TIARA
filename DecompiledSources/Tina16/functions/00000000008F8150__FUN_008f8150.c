/* Ghidra address: 008f8150 */
/* Ghidra symbol: FUN_008f8150 */


void FUN_008f8150(longlong param_1,undefined2 param_2)

{
  if (*(int *)(param_1 + 8) == *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0xc) / 4;
    FUN_00416660(param_1 + 0x10,*(undefined4 *)(param_1 + 0xc));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(undefined2 *)(*(longlong *)(param_1 + 0x10) + -2 + (longlong)*(int *)(param_1 + 8) * 2) =
       param_2;
  return;
}

