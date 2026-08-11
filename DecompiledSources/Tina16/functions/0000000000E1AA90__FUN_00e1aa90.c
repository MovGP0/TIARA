/* Ghidra address: 00e1aa90 */
/* Ghidra symbol: FUN_00e1aa90 */


void FUN_00e1aa90(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5f0 == (code *)0x0) {
      DAT_0202e5f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitLAHW");
    }
    if (DAT_0202e5f0 != (code *)0x0) {
      (*DAT_0202e5f0)(param_1);
    }
  }
  return;
}

