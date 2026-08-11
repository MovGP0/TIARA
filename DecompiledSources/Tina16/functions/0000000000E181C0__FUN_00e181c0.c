/* Ghidra address: 00e181c0 */
/* Ghidra symbol: FUN_00e181c0 */


void FUN_00e181c0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e330 == (code *)0x0) {
      DAT_0202e330 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitFGHW");
    }
    if (DAT_0202e330 != (code *)0x0) {
      (*DAT_0202e330)(param_1);
    }
  }
  return;
}

