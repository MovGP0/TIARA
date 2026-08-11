/* Ghidra address: 00cb34a0 */
/* Ghidra symbol: FUN_00cb34a0 */


void FUN_00cb34a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x148) = param_2;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x100) + 0xf4) = param_2;
  }
  return;
}

