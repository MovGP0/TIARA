/* Ghidra address: 00e1a330 */
/* Ghidra symbol: FUN_00e1a330 */


void FUN_00e1a330(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e578 == (code *)0x0) {
      DAT_0202e578 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAMeasMode");
    }
    if (DAT_0202e578 != (code *)0x0) {
      (*DAT_0202e578)(param_1);
    }
  }
  return;
}

