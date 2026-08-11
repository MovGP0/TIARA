/* Ghidra address: 00e1d220 */
/* Ghidra symbol: FUN_00e1d220 */


void FUN_00e1d220(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e870 == (code *)0x0) {
      DAT_0202e870 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECChannelOn");
    }
    if (DAT_0202e870 != (code *)0x0) {
      (*DAT_0202e870)(param_1,param_2);
    }
  }
  return;
}

