/* Ghidra address: 00e1b850 */
/* Ghidra symbol: FUN_00e1b850 */


void FUN_00e1b850(undefined2 *param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e6d0 == (code *)0x0) {
      DAT_0202e6d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckLATimeOut");
    }
    if (DAT_0202e6d0 != (code *)0x0) {
      (*DAT_0202e6d0)(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}

