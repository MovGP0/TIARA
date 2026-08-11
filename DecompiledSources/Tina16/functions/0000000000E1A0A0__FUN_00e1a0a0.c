/* Ghidra address: 00e1a0a0 */
/* Ghidra symbol: FUN_00e1a0a0 */


void FUN_00e1a0a0(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e558 == (code *)0x0) {
      DAT_0202e558 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAFreqResolution");
    }
    if (DAT_0202e558 != (code *)0x0) {
      (*DAT_0202e558)(param_1,param_2);
    }
  }
  return;
}

