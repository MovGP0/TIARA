/* Ghidra address: 00e1be10 */
/* Ghidra symbol: FUN_00e1be10 */


void FUN_00e1be10(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e730 == (code *)0x0) {
      DAT_0202e730 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGSteppingModes");
    }
    if (DAT_0202e730 != (code *)0x0) {
      (*DAT_0202e730)(param_1,param_2);
    }
  }
  return;
}

