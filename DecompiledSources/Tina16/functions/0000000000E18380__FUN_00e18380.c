/* Ghidra address: 00e18380 */
/* Ghidra symbol: FUN_00e18380 */


void FUN_00e18380(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e340 == (code *)0x0) {
      DAT_0202e340 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGBusyState");
    }
    if (DAT_0202e340 != (code *)0x0) {
      (*DAT_0202e340)(param_1);
    }
  }
  return;
}

