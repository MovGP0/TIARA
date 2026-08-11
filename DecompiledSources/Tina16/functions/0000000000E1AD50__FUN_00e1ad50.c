/* Ghidra address: 00e1ad50 */
/* Ghidra symbol: FUN_00e1ad50 */


void FUN_00e1ad50(undefined1 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e620 == (code *)0x0) {
      DAT_0202e620 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLATrigSources");
    }
    if (DAT_0202e620 != (code *)0x0) {
      (*DAT_0202e620)(param_1,param_2);
    }
  }
  return;
}

