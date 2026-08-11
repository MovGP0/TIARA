/* Ghidra address: 00e175f0 */
/* Ghidra symbol: FUN_00e175f0 */


void FUN_00e175f0(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e280 == (code *)0x0) {
      DAT_0202e280 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTrigSources");
    }
    if (DAT_0202e280 != (code *)0x0) {
      (*DAT_0202e280)(param_1,param_2);
    }
  }
  return;
}

