/* Ghidra address: 00668090 */
/* Ghidra symbol: FUN_00668090 */


void FUN_00668090(longlong param_1,short param_2)

{
  if (param_2 != *(short *)(param_1 + 0x39)) {
    *(short *)(param_1 + 0x39) = param_2;
    *(undefined1 *)(param_1 + 0x30) = 0;
    FUN_0064fca0(*(undefined8 *)(param_1 + 8),0xb057,0,0);
  }
  return;
}

