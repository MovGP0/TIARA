/* Ghidra address: 00e17700 */
/* Ghidra symbol: FUN_00e17700 */


void FUN_00e17700(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e290 == (code *)0x0) {
      DAT_0202e290 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPTrigSource");
    }
    if (DAT_0202e290 != (code *)0x0) {
      (*DAT_0202e290)(param_1);
    }
  }
  return;
}

