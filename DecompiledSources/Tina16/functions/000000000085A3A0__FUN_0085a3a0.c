/* Ghidra address: 0085a3a0 */
/* Ghidra symbol: FUN_0085a3a0 */


undefined8 FUN_0085a3a0(undefined8 param_1)

{
  if (DAT_02012780 == (code *)0x0) {
    FUN_00414ad0(param_1);
  }
  else {
    (*DAT_02012780)(param_1);
  }
  return param_1;
}

