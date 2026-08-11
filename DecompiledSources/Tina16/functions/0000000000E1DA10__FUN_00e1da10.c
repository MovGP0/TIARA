/* Ghidra address: 00e1da10 */
/* Ghidra symbol: FUN_00e1da10 */


void FUN_00e1da10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8e8 == (code *)0x0) {
      DAT_0202e8e8 = (code *)FUN_00427c10(DAT_01edc8a0,L"Set3PhaseGenAmplitude");
    }
    if (DAT_0202e8e8 != (code *)0x0) {
      (*DAT_0202e8e8)(param_1,param_2,param_3);
    }
  }
  return;
}

