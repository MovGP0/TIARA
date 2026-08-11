/* Ghidra address: 00af6c70 */
/* Ghidra symbol: FUN_00af6c70 */


void FUN_00af6c70(longlong param_1,undefined4 param_2)

{
  FUN_00a77760(param_1,param_2);
  if (*(longlong *)(param_1 + 0x8b0) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x8b0) + 0xa8) = param_2;
  }
  return;
}

