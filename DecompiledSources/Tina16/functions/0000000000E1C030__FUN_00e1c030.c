/* Ghidra address: 00e1c030 */
/* Ghidra symbol: FUN_00e1c030 */


void FUN_00e1c030(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e750 == (code *)0x0) {
      DAT_0202e750 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGTrigSource");
    }
    if (DAT_0202e750 != (code *)0x0) {
      (*DAT_0202e750)(param_1);
    }
  }
  return;
}

