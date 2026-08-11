/* Ghidra address: 00e16d60 */
/* Ghidra symbol: FUN_00e16d60 */


void FUN_00e16d60(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 1;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e200 == (code *)0x0) {
      DAT_0202e200 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitSCP");
    }
    if (DAT_0202e200 != (code *)0x0) {
      (*DAT_0202e200)(param_1,param_2);
    }
  }
  return;
}

