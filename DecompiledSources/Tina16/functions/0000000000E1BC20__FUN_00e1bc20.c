/* Ghidra address: 00e1bc20 */
/* Ghidra symbol: FUN_00e1bc20 */


void FUN_00e1bc20(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  *param_4 = 3;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e708 == (code *)0x0) {
      DAT_0202e708 = (code *)FUN_00427c10(DAT_01edc8a0,L"ReadLAWaveforms");
    }
    if (DAT_0202e708 != (code *)0x0) {
      (*DAT_0202e708)(param_1,param_2,param_3,param_4);
    }
  }
  return;
}

