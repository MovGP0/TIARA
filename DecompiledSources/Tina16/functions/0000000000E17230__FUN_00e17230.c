/* Ghidra address: 00e17230 */
/* Ghidra symbol: FUN_00e17230 */


void FUN_00e17230(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e248 == (code *)0x0) {
      DAT_0202e248 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTrigMode");
    }
    if (DAT_0202e248 != (code *)0x0) {
      (*DAT_0202e248)(param_1);
    }
  }
  return;
}

