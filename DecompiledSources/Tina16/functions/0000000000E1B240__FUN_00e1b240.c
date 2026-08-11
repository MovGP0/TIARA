/* Ghidra address: 00e1b240 */
/* Ghidra symbol: FUN_00e1b240 */


void FUN_00e1b240(undefined1 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e670 == (code *)0x0) {
      DAT_0202e670 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLATrigPattern");
    }
    if (DAT_0202e670 != (code *)0x0) {
      (*DAT_0202e670)(param_1,param_2);
    }
  }
  return;
}

