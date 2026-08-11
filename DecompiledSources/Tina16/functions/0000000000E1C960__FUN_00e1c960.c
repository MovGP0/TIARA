/* Ghidra address: 00e1c960 */
/* Ghidra symbol: FUN_00e1c960 */


void FUN_00e1c960(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e7e0 == (code *)0x0) {
      DAT_0202e7e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"StartDSG");
    }
    if (DAT_0202e7e0 != (code *)0x0) {
      (*DAT_0202e7e0)(param_1);
    }
  }
  return;
}

