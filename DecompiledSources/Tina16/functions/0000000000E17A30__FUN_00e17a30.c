/* Ghidra address: 00e17a30 */
/* Ghidra symbol: FUN_00e17a30 */


void FUN_00e17a30(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2c0 == (code *)0x0) {
      DAT_0202e2c0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPXYChannel");
    }
    if (DAT_0202e2c0 != (code *)0x0) {
      (*DAT_0202e2c0)(param_1);
    }
  }
  return;
}

