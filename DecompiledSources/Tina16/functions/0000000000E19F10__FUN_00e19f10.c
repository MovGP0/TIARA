/* Ghidra address: 00e19f10 */
/* Ghidra symbol: FUN_00e19f10 */


void FUN_00e19f10(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e538 == (code *)0x0) {
      DAT_0202e538 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckSAFreqRange");
    }
    if (DAT_0202e538 != (code *)0x0) {
      (*DAT_0202e538)(param_1,param_2);
    }
  }
  return;
}

