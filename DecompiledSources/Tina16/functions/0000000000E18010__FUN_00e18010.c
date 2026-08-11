/* Ghidra address: 00e18010 */
/* Ghidra symbol: FUN_00e18010 */


void FUN_00e18010(undefined4 param_1,undefined2 *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined1 *param_9,undefined1 *param_10)

{
  *param_9 = 0;
  *param_10 = 1;
  if (DAT_01edc8a0 != 0) {
    if (((DAT_0202e320 == (code *)0x0) && (DAT_0202e328 == (code *)0x0)) &&
       (DAT_0202e328 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadSCPWaveformEx"),
       DAT_0202e328 == (code *)0x0)) {
      DAT_0202e320 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadSCPWaveform");
    }
    if (DAT_0202e328 != (code *)0x0) {
      (*DAT_0202e328)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
      return;
    }
    if (DAT_0202e320 != (code *)0x0) {
      (*DAT_0202e320)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      return;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

