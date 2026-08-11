/* Ghidra address: 00e17580 */
/* Ghidra symbol: FUN_00e17580 */


void FUN_00e17580(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e278 == (code *)0x0) {
      DAT_0202e278 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPTrigSlope");
    }
    if (DAT_0202e278 != (code *)0x0) {
      (*DAT_0202e278)(param_1);
    }
  }
  return;
}

