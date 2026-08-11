/* Ghidra address: 00e1afc0 */
/* Ghidra symbol: FUN_00e1afc0 */


void FUN_00e1afc0(undefined4 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e640 == (code *)0x0) {
      DAT_0202e640 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLATrigDelay");
    }
    if (DAT_0202e640 != (code *)0x0) {
      (*DAT_0202e640)(param_1);
    }
  }
  return;
}

