/* Ghidra address: 00f7f3c0 */
/* Ghidra symbol: FUN_00f7f3c0 */


void FUN_00f7f3c0(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x38) =
       *(undefined2 *)(*(longlong *)(param_1 + 0x18) + -2 + (longlong)*(int *)(param_1 + 0x30) * 2);
  while (*(short *)(param_1 + 0x38) == 0x20) {
    FUN_00f7f400(param_1);
  }
  return;
}

