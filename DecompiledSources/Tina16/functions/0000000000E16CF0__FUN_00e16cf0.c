/* Ghidra address: 00e16cf0 */
/* Ghidra symbol: FUN_00e16cf0 */


void FUN_00e16cf0(undefined1 *param_1)

{
  *param_1 = 1;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1f8 == (code *)0x0) {
      DAT_0202e1f8 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitSCPHW");
    }
    if (DAT_0202e1f8 != (code *)0x0) {
      (*DAT_0202e1f8)(param_1);
    }
  }
  return;
}

