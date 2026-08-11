/* Ghidra address: 00bad6d0 */
/* Ghidra symbol: FUN_00bad6d0 */


void FUN_00bad6d0(longlong param_1,undefined2 param_2)

{
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) * 2;
    FUN_00409620(param_1 + 0x38,(longlong)(*(int *)(param_1 + 0x44) * 2));
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(param_1 + 0x40) * 2) = param_2;
  return;
}

