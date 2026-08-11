/* Ghidra address: 00e16ec0 */
/* Ghidra symbol: FUN_00e16ec0 */


void FUN_00e16ec0(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e218 == (code *)0x0) {
      DAT_0202e218 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPMeasRange");
    }
    if (DAT_0202e218 != (code *)0x0) {
      (*DAT_0202e218)(param_1,param_2,param_3);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}

