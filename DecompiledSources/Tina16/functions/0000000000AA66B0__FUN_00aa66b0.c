/* Ghidra address: 00aa66b0 */
/* Ghidra symbol: FUN_00aa66b0 */


void FUN_00aa66b0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x94) = param_2;
  *(undefined1 *)(param_1 + 0x98) = 1;
  FUN_00aa65c0();
  return;
}

