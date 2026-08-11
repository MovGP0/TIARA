/* Ghidra address: 0041f280 */
/* Ghidra symbol: FUN_0041f280 */


undefined8 FUN_0041f280(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  short *psVar1;
  short *local_20 [2];
  
  local_20[0] = (short *)*param_3;
  for (psVar1 = local_20[0]; (0 < param_4 && (*psVar1 != 0)); psVar1 = psVar1 + 1) {
    param_4 = param_4 + -1;
  }
  FUN_0041f190(param_1,param_2,local_20,((longlong)psVar1 - (longlong)local_20[0]) / 2 & 0xffffffff)
  ;
  return param_2;
}

