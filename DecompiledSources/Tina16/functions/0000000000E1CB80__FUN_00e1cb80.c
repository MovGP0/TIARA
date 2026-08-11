/* Ghidra address: 00e1cb80 */
/* Ghidra symbol: FUN_00e1cb80 */


void FUN_00e1cb80(undefined1 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e808 == (code *)0x0) {
      DAT_0202e808 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitXYREC");
    }
    if (DAT_0202e808 != (code *)0x0) {
      (*DAT_0202e808)(param_1,param_2);
    }
  }
  return;
}

