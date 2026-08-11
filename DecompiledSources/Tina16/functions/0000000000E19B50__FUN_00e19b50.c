/* Ghidra address: 00e19b50 */
/* Ghidra symbol: FUN_00e19b50 */


void FUN_00e19b50(undefined8 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4f8 == (code *)0x0) {
      DAT_0202e4f8 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckSATrigLevel");
    }
    if (DAT_0202e4f8 != (code *)0x0) {
      (*DAT_0202e4f8)(param_1,param_2);
    }
  }
  return;
}

