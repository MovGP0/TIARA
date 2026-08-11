/* Ghidra address: 00415020 */
/* Ghidra symbol: FUN_00415020 */


void FUN_00415020(byte *param_1,byte *param_2,byte param_3)

{
  if (*param_2 < param_3) {
    param_3 = *param_2;
  }
  *param_1 = param_3;
  FUN_00409a70(param_2 + 1,param_1 + 1,param_3);
  return;
}

