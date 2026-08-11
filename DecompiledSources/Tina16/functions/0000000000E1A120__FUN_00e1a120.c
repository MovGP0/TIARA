/* Ghidra address: 00e1a120 */
/* Ghidra symbol: FUN_00e1a120 */


void FUN_00e1a120(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e550 == (code *)0x0) {
      DAT_0202e550 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckSAFreqResolution");
    }
    if (DAT_0202e550 != (code *)0x0) {
      (*DAT_0202e550)(param_1,param_2,param_3);
    }
  }
  return;
}

