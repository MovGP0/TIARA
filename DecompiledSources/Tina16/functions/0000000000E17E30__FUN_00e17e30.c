/* Ghidra address: 00e17e30 */
/* Ghidra symbol: FUN_00e17e30 */


void FUN_00e17e30(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e300 == (code *)0x0) {
      DAT_0202e300 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPChannel");
    }
    if (DAT_0202e300 != (code *)0x0) {
      (*DAT_0202e300)(param_1);
    }
  }
  return;
}

