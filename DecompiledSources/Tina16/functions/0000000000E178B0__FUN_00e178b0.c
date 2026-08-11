/* Ghidra address: 00e178b0 */
/* Ghidra symbol: FUN_00e178b0 */


void FUN_00e178b0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2a8 == (code *)0x0) {
      DAT_0202e2a8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPTimeBaseRange");
    }
    if (DAT_0202e2a8 != (code *)0x0) {
      (*DAT_0202e2a8)(param_1);
    }
  }
  return;
}

