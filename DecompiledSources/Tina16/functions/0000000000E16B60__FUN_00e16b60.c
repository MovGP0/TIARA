/* Ghidra address: 00e16b60 */
/* Ghidra symbol: FUN_00e16b60 */


void FUN_00e16b60(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1e0 == (code *)0x0) {
      DAT_0202e1e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDVMChannel");
    }
    if (DAT_0202e1e0 != (code *)0x0) {
      (*DAT_0202e1e0)(param_1,param_2);
    }
  }
  return;
}

