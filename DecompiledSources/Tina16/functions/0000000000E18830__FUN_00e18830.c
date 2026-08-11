/* Ghidra address: 00e18830 */
/* Ghidra symbol: FUN_00e18830 */


void FUN_00e18830(undefined8 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e3b0 == (code *)0x0) {
      DAT_0202e3b0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGOffs");
    }
    if (DAT_0202e3b0 != (code *)0x0) {
      (*DAT_0202e3b0)(param_1);
    }
  }
  return;
}

