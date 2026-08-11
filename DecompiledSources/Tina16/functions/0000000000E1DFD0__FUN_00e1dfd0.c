/* Ghidra address: 00e1dfd0 */
/* Ghidra symbol: FUN_00e1dfd0 */


void FUN_00e1dfd0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e940 == (code *)0x0) {
      DAT_0202e940 = (code *)FUN_00427c10(DAT_01edc8a0,L"HWMessageHandler");
    }
    if (DAT_0202e940 != (code *)0x0) {
      (*DAT_0202e940)(param_1,param_2);
    }
  }
  return;
}

