/* Ghidra address: 00e173a0 */
/* Ghidra symbol: FUN_00e173a0 */


void FUN_00e173a0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e260 == (code *)0x0) {
      DAT_0202e260 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPTrigLevel");
    }
    if (DAT_0202e260 != (code *)0x0) {
      (*DAT_0202e260)(param_1);
    }
  }
  return;
}

