/* Ghidra address: 00e179c0 */
/* Ghidra symbol: FUN_00e179c0 */


void FUN_00e179c0(undefined1 *param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e2b8 == (code *)0x0) {
      DAT_0202e2b8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPXYMode");
    }
    if (DAT_0202e2b8 != (code *)0x0) {
      (*DAT_0202e2b8)(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}

