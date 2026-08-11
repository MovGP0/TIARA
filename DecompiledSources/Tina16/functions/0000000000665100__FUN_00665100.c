/* Ghidra address: 00665100 */
/* Ghidra symbol: FUN_00665100 */


HIMC FUN_00665100(HWND param_1)

{
  HIMC pHVar1;
  
  if (DAT_01df89d0 == 0) {
    pHVar1 = (HIMC)0x0;
  }
  else {
    pHVar1 = ImmGetContext(param_1);
  }
  return pHVar1;
}

