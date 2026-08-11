/* Ghidra address: 00e17680 */
/* Ghidra symbol: FUN_00e17680 */


void FUN_00e17680(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e288 == (code *)0x0) {
      DAT_0202e288 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTrigSource");
    }
    if (DAT_0202e288 != (code *)0x0) {
      (*DAT_0202e288)(param_1);
    }
  }
  return;
}

