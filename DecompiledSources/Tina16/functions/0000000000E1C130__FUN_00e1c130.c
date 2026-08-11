/* Ghidra address: 00e1c130 */
/* Ghidra symbol: FUN_00e1c130 */


void FUN_00e1c130(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e7d8 == (code *)0x0) {
      DAT_0202e7d8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGDataPattern");
    }
    if (DAT_0202e7d8 != (code *)0x0) {
      (*DAT_0202e7d8)(param_1);
    }
  }
  return;
}

