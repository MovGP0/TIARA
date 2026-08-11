/* Ghidra address: 00e1dad0 */
/* Ghidra symbol: FUN_00e1dad0 */


void FUN_00e1dad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8f0 == (code *)0x0) {
      DAT_0202e8f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"Check3PhaseGenAmplitude");
    }
    if (DAT_0202e8f0 != (code *)0x0) {
      (*DAT_0202e8f0)(param_1,param_2,param_3);
    }
  }
  return;
}

