/* Ghidra address: 00af6c10 */
/* Ghidra symbol: FUN_00af6c10 */


void FUN_00af6c10(longlong param_1,undefined4 param_2)

{
  FUN_00a77870(param_1,param_2);
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x8b0) + 0xac) = param_2;
  }
  return;
}

