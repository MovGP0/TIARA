/* Ghidra address: 00e1dc70 */
/* Ghidra symbol: FUN_00e1dc70 */


void FUN_00e1dc70(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e908 == (code *)0x0) {
      DAT_0202e908 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDigIO");
    }
    if (DAT_0202e908 != (code *)0x0) {
      (*DAT_0202e908)(param_1);
    }
  }
  return;
}

