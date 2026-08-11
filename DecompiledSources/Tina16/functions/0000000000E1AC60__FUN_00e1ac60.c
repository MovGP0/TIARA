/* Ghidra address: 00e1ac60 */
/* Ghidra symbol: FUN_00e1ac60 */


void FUN_00e1ac60(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e618 == (code *)0x0) {
      DAT_0202e618 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLATrigMode");
    }
    if (DAT_0202e618 != (code *)0x0) {
      (*DAT_0202e618)(param_1);
    }
  }
  return;
}

