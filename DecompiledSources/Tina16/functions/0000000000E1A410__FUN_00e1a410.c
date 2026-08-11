/* Ghidra address: 00e1a410 */
/* Ghidra symbol: FUN_00e1a410 */


void FUN_00e1a410(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e588 == (code *)0x0) {
      DAT_0202e588 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAMeasWindows");
    }
    if (DAT_0202e588 != (code *)0x0) {
      (*DAT_0202e588)(param_1,param_2);
    }
  }
  return;
}

