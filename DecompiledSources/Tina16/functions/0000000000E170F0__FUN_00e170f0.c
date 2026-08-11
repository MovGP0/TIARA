/* Ghidra address: 00e170f0 */
/* Ghidra symbol: FUN_00e170f0 */


void FUN_00e170f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  *param_1 = 0;
  *param_2 = 0;
  *param_3 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e238 == (code *)0x0) {
      DAT_0202e238 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPVerticalLevelParams");
    }
    if (DAT_0202e238 != (code *)0x0) {
      (*DAT_0202e238)(param_1,param_2,param_3);
    }
  }
  return;
}

