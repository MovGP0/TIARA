/* Ghidra address: 011795b0 */
/* Ghidra symbol: FUN_011795b0 */


void FUN_011795b0(longlong param_1)

{
  if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
     (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x848),0xd4);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x840),0xd4);
  }
  else {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x848),0xc6);
  }
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x840),0xc6);
  return;
}

