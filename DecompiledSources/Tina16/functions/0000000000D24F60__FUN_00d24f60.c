/* Ghidra address: 00d24f60 */
/* Ghidra symbol: FUN_00d24f60 */


void FUN_00d24f60(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0x78) = param_2;
  if (param_2 < 0x10) {
    *(undefined4 *)(param_1 + 0x78) = 0x10;
  }
  else if (0x20 < param_2) {
    *(undefined4 *)(param_1 + 0x78) = 0x20;
  }
  return;
}

