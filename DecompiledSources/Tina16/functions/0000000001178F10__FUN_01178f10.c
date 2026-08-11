/* Ghidra address: 01178f10 */
/* Ghidra symbol: FUN_01178f10 */


void FUN_01178f10(longlong param_1)

{
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7a8),0xd4);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7b8),0xd4);
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x7a8),0xc6);
  }
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x7b8),0xc6);
  return;
}

