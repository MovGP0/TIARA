/* Ghidra address: 00f2c860 */
/* Ghidra symbol: FUN_00f2c860 */


void FUN_00f2c860(longlong *param_1,longlong param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = *param_1 + (longlong)param_3 * 2;
  return;
}

