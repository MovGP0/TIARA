/* Ghidra address: 00e184b0 */
/* Ghidra symbol: FUN_00e184b0 */


void FUN_00e184b0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e368 == (code *)0x0) {
      DAT_0202e368 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGMode");
    }
    if (DAT_0202e368 != (code *)0x0) {
      (*DAT_0202e368)(param_1,param_2);
    }
  }
  return;
}

