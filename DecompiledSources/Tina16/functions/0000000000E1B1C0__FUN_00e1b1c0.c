/* Ghidra address: 00e1b1c0 */
/* Ghidra symbol: FUN_00e1b1c0 */


void FUN_00e1b1c0(undefined4 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e668 == (code *)0x0) {
      DAT_0202e668 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLATrigPattern");
    }
    if (DAT_0202e668 != (code *)0x0) {
      (*DAT_0202e668)(param_1,param_2);
    }
  }
  return;
}

