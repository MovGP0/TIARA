/* Ghidra address: 00e169d0 */
/* Ghidra symbol: FUN_00e169d0 */


void FUN_00e169d0(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1c8 == (code *)0x0) {
      DAT_0202e1c8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDVMMode");
    }
    if (DAT_0202e1c8 != (code *)0x0) {
      (*DAT_0202e1c8)(param_1,param_2);
    }
  }
  return;
}

