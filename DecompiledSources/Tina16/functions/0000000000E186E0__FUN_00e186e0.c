/* Ghidra address: 00e186e0 */
/* Ghidra symbol: FUN_00e186e0 */


void FUN_00e186e0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e388 == (code *)0x0) {
      DAT_0202e388 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGAmpl");
    }
    if (DAT_0202e388 != (code *)0x0) {
      (*DAT_0202e388)(param_1);
    }
  }
  return;
}

