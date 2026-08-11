/* Ghidra address: 00e193e0 */
/* Ghidra symbol: FUN_00e193e0 */


void FUN_00e193e0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e360 == (code *)0x0) {
      DAT_0202e360 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGChannel");
    }
    if (DAT_0202e360 != (code *)0x0) {
      (*DAT_0202e360)(param_1);
    }
  }
  return;
}

