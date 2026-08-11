/* Ghidra address: 00e17930 */
/* Ghidra symbol: FUN_00e17930 */


void FUN_00e17930(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2b0 == (code *)0x0) {
      DAT_0202e2b0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPHorizontalPosition");
    }
    if (DAT_0202e2b0 != (code *)0x0) {
      (*DAT_0202e2b0)(param_1);
    }
  }
  return;
}

