/* Ghidra address: 00e17ba0 */
/* Ghidra symbol: FUN_00e17ba0 */


void FUN_00e17ba0(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2d8 == (code *)0x0) {
      DAT_0202e2d8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPCouplingModes");
    }
    if (DAT_0202e2d8 != (code *)0x0) {
      (*DAT_0202e2d8)(param_1);
    }
  }
  return;
}

