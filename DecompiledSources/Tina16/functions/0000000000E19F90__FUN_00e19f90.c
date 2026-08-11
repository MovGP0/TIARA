/* Ghidra address: 00e19f90 */
/* Ghidra symbol: FUN_00e19f90 */


void FUN_00e19f90(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e540 == (code *)0x0) {
      DAT_0202e540 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAFreqRange");
    }
    if (DAT_0202e540 != (code *)0x0) {
      (*DAT_0202e540)(param_1,param_2);
    }
  }
  return;
}

