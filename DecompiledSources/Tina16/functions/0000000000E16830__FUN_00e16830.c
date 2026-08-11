/* Ghidra address: 00e16830 */
/* Ghidra symbol: FUN_00e16830 */


void FUN_00e16830(undefined4 param_1,undefined1 *param_2,undefined8 *param_3,undefined4 param_4)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1a8 == (code *)0x0) {
      DAT_0202e1a8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDVMMeasRange");
    }
    if (DAT_0202e1a8 != (code *)0x0) {
      (*DAT_0202e1a8)(param_1,param_2,param_3,param_4);
      return;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

