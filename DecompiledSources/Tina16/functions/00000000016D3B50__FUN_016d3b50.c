/* Ghidra address: 016d3b50 */
/* Ghidra symbol: FUN_016d3b50 */


void FUN_016d3b50(longlong param_1,ushort param_2)

{
  if (param_2 < 8) {
    param_2 = 8;
  }
  if ((8 < param_2) && (param_2 < 0x11)) {
    param_2 = 0x10;
  }
  if (0x10 < param_2) {
    param_2 = 0x18;
  }
  *(ushort *)(param_1 + 0x4b4) = param_2;
  FUN_016d3db0();
  return;
}

