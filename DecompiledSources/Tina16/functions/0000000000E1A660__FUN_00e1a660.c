/* Ghidra address: 00e1a660 */
/* Ghidra symbol: FUN_00e1a660 */


void FUN_00e1a660(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5b0 == (code *)0x0) {
      DAT_0202e5b0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAChannelOn");
    }
    if (DAT_0202e5b0 != (code *)0x0) {
      (*DAT_0202e5b0)(param_1,param_2);
    }
  }
  return;
}

