/* Ghidra address: 00e1d700 */
/* Ghidra symbol: FUN_00e1d700 */


void FUN_00e1d700(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8b8 == (code *)0x0) {
      DAT_0202e8b8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECRecordingInterval");
    }
    if (DAT_0202e8b8 != (code *)0x0) {
      (*DAT_0202e8b8)(param_1,param_2,param_3);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}

