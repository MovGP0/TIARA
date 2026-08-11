/* Ghidra address: 00e1a570 */
/* Ghidra symbol: FUN_00e1a570 */


void FUN_00e1a570(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5a8 == (code *)0x0) {
      DAT_0202e5a8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAChannel");
    }
    if (DAT_0202e5a8 != (code *)0x0) {
      (*DAT_0202e5a8)(param_1);
    }
  }
  return;
}

