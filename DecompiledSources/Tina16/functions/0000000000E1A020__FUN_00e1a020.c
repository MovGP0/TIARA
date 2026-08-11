/* Ghidra address: 00e1a020 */
/* Ghidra symbol: FUN_00e1a020 */


void FUN_00e1a020(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e548 == (code *)0x0) {
      DAT_0202e548 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAFreqRange");
    }
    if (DAT_0202e548 != (code *)0x0) {
      (*DAT_0202e548)(param_1,param_2);
    }
  }
  return;
}

