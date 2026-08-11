/* Ghidra address: 00e1c740 */
/* Ghidra symbol: FUN_00e1c740 */


void FUN_00e1c740(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e7b8 == (code *)0x0) {
      DAT_0202e7b8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGThresholdModes");
    }
    if (DAT_0202e7b8 != (code *)0x0) {
      (*DAT_0202e7b8)(param_1,param_2);
    }
  }
  return;
}

