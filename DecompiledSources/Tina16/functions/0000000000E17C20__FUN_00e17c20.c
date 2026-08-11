/* Ghidra address: 00e17c20 */
/* Ghidra symbol: FUN_00e17c20 */


void FUN_00e17c20(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2e0 == (code *)0x0) {
      DAT_0202e2e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPCouplingMode");
    }
    if (DAT_0202e2e0 != (code *)0x0) {
      (*DAT_0202e2e0)(param_1);
    }
  }
  return;
}

