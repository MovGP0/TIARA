/* Ghidra address: 00e19d40 */
/* Ghidra symbol: FUN_00e19d40 */


void FUN_00e19d40(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e518 == (code *)0x0) {
      DAT_0202e518 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSATrigSlope");
    }
    if (DAT_0202e518 != (code *)0x0) {
      (*DAT_0202e518)(param_1);
    }
  }
  return;
}

