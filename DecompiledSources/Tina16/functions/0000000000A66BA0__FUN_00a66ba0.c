/* Ghidra address: 00a66ba0 */
/* Ghidra symbol: FUN_00a66ba0 */


void FUN_00a66ba0(longlong param_1)

{
  if (*(int *)(param_1 + 0x2c) < *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(undefined2 *)(param_1 + 0x26) =
         *(undefined2 *)
          (*(longlong *)(param_1 + 0x50) + -2 + (longlong)*(int *)(param_1 + 0x2c) * 2);
  }
  else {
    *(undefined2 *)(param_1 + 0x26) = 0;
  }
  return;
}

