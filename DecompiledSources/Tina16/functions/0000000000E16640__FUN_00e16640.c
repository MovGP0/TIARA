/* Ghidra address: 00e16640 */
/* Ghidra symbol: FUN_00e16640 */


void FUN_00e16640(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  *param_2 = 1;
  *param_3 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e190 == (code *)0x0) {
      DAT_0202e190 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitDVM");
    }
    if (DAT_0202e190 != (code *)0x0) {
      (*DAT_0202e190)(param_1,param_2,param_3);
    }
  }
  return;
}

