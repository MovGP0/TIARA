/* Ghidra address: 00afdca0 */
/* Ghidra symbol: FUN_00afdca0 */


void FUN_00afdca0(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x50) + 0x78) < *(int *)(param_1 + 0x2c) + -1) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    *(undefined2 *)(param_1 + 0x2a) =
         *(undefined2 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + -2 +
          (longlong)*(int *)(param_1 + 0x2c) * 2);
  }
  else {
    *(undefined2 *)(param_1 + 0x2a) = 0;
  }
  return;
}

