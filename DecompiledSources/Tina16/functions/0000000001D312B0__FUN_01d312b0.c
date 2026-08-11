/* Ghidra address: 01d312b0 */
/* Ghidra symbol: FUN_01d312b0 */


void FUN_01d312b0(undefined8 param_1,char *param_2)

{
  FUN_01d30f00(param_1,param_2,1);
  FUN_01d30f00(param_1,param_2 + 1,*param_2);
  *param_2 = *param_2 + -1;
  return;
}

