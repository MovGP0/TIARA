/* Ghidra address: 007fded0 */
/* Ghidra symbol: FUN_007fded0 */


void FUN_007fded0(longlong param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0xa4) & 8) == 0) {
    FUN_0064d0e0();
  }
  else {
    *(undefined4 *)(param_1 + 0x538) = param_2;
    *(byte *)(param_1 + 0xfc) = *(byte *)(param_1 + 0xfc) | 4;
  }
  return;
}

