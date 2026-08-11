/* Ghidra address: 00e17810 */
/* Ghidra symbol: FUN_00e17810 */


void FUN_00e17810(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2a0 == (code *)0x0) {
      DAT_0202e2a0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTimeBaseRange");
    }
    if (DAT_0202e2a0 != (code *)0x0) {
      (*DAT_0202e2a0)(param_1,param_2,param_3);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}

