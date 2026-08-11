/* Ghidra address: 00e17780 */
/* Ghidra symbol: FUN_00e17780 */


void FUN_00e17780(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e298 == (code *)0x0) {
      DAT_0202e298 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPTimeBaseRanges");
    }
    if (DAT_0202e298 != (code *)0x0) {
      (*DAT_0202e298)(param_1,param_2);
    }
  }
  return;
}

