/* Ghidra address: 00e172b0 */
/* Ghidra symbol: FUN_00e172b0 */


void FUN_00e172b0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e250 == (code *)0x0) {
      DAT_0202e250 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPTrigMode");
    }
    if (DAT_0202e250 != (code *)0x0) {
      (*DAT_0202e250)(param_1);
    }
  }
  return;
}

