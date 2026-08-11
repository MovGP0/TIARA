/* Ghidra address: 00e18300 */
/* Ghidra symbol: FUN_00e18300 */


void FUN_00e18300(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e338 == (code *)0x0) {
      DAT_0202e338 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckFGBusyState");
    }
    if (DAT_0202e338 != (code *)0x0) {
      (*DAT_0202e338)(param_1);
    }
  }
  return;
}

