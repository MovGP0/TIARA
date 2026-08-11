/* Ghidra address: 00c27270 */
/* Ghidra symbol: FUN_00c27270 */


short FUN_00c27270(short param_1)

{
  short sVar1;
  
  sVar1 = 0x1f49 - param_1;
  if (param_1 == 0) {
    sVar1 = 1;
  }
  param_1 = param_1 - sVar1;
  if (param_1 < 0) {
    param_1 = param_1 + 0x1f49;
  }
  return param_1;
}

