/* Ghidra address: 00e168d0 */
/* Ghidra symbol: FUN_00e168d0 */


void FUN_00e168d0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1b8 == (code *)0x0) {
      DAT_0202e1b8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDVMMode");
    }
    if (DAT_0202e1b8 != (code *)0x0) {
      (*DAT_0202e1b8)(param_1,param_2);
    }
  }
  return;
}

