/* Ghidra address: 00e167b0 */
/* Ghidra symbol: FUN_00e167b0 */


void FUN_00e167b0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1b0 == (code *)0x0) {
      DAT_0202e1b0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDVMMeasRange");
    }
    if (DAT_0202e1b0 != (code *)0x0) {
      (*DAT_0202e1b0)(param_1,param_2);
    }
  }
  return;
}

