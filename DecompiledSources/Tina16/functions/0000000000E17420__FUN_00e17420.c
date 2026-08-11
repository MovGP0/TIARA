/* Ghidra address: 00e17420 */
/* Ghidra symbol: FUN_00e17420 */


void FUN_00e17420(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 1;
  *param_6 = 0;
  if (DAT_01edc8a0 != 0) {
    if ((DAT_0202e270 == (code *)0x0) && (DAT_0202e268 == (code *)0x0)) {
      DAT_0202e268 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTrigLevelParamsEx");
      if (DAT_0202e268 == (code *)0x0) {
        DAT_0202e270 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTrigLevelParams");
      }
    }
    if (DAT_0202e268 == (code *)0x0) {
      if (DAT_0202e270 != (code *)0x0) {
        (*DAT_0202e270)(param_1,param_2,param_3);
      }
    }
    else {
      (*DAT_0202e268)(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}

