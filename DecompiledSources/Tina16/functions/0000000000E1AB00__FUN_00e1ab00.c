/* Ghidra address: 00e1ab00 */
/* Ghidra symbol: FUN_00e1ab00 */


void FUN_00e1ab00(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5f8 == (code *)0x0) {
      DAT_0202e5f8 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitLA");
    }
    if (DAT_0202e5f8 != (code *)0x0) {
      (*DAT_0202e5f8)(param_1,param_2);
    }
  }
  return;
}

