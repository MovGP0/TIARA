/* Ghidra address: 00e182a0 */
/* Ghidra symbol: FUN_00e182a0 */


void FUN_00e182a0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e348 == (code *)0x0) {
      DAT_0202e348 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneFG");
    }
    if (DAT_0202e348 != (code *)0x0) {
      (*DAT_0202e348)(param_1);
    }
  }
  return;
}

