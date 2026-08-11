/* Ghidra address: 00e19530 */
/* Ghidra symbol: FUN_00e19530 */


void FUN_00e19530(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e490 == (code *)0x0) {
      DAT_0202e490 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitSAHW");
    }
    if (DAT_0202e490 != (code *)0x0) {
      (*DAT_0202e490)(param_1);
    }
  }
  return;
}

