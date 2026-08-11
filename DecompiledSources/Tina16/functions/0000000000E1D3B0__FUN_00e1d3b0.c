/* Ghidra address: 00e1d3b0 */
/* Ghidra symbol: FUN_00e1d3b0 */


void FUN_00e1d3b0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e888 == (code *)0x0) {
      DAT_0202e888 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadXYREC");
    }
    if (DAT_0202e888 != (code *)0x0) {
      (*DAT_0202e888)(param_1,param_2);
    }
  }
  return;
}

