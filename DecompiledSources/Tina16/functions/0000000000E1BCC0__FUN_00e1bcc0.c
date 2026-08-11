/* Ghidra address: 00e1bcc0 */
/* Ghidra symbol: FUN_00e1bcc0 */


void FUN_00e1bcc0(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e718 == (code *)0x0) {
      DAT_0202e718 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitDSGHW");
    }
    if (DAT_0202e718 != (code *)0x0) {
      (*DAT_0202e718)(param_1);
    }
  }
  return;
}

