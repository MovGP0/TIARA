/* Ghidra address: 00e1acd0 */
/* Ghidra symbol: FUN_00e1acd0 */


void FUN_00e1acd0(undefined4 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e610 == (code *)0x0) {
      DAT_0202e610 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLATrigMode");
    }
    if (DAT_0202e610 != (code *)0x0) {
      (*DAT_0202e610)(param_1);
    }
  }
  return;
}

