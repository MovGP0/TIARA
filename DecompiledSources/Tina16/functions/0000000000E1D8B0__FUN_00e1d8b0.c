/* Ghidra address: 00e1d8b0 */
/* Ghidra symbol: FUN_00e1d8b0 */


void FUN_00e1d8b0(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8d0 == (code *)0x0) {
      DAT_0202e8d0 = (code *)FUN_00427c10(DAT_01edc8a0,L"Init3PhaseGen");
    }
    if (DAT_0202e8d0 != (code *)0x0) {
      (*DAT_0202e8d0)(param_1,param_2);
    }
  }
  return;
}

