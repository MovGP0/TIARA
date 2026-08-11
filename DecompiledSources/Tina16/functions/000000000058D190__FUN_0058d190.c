/* Ghidra address: 0058d190 */
/* Ghidra symbol: FUN_0058d190 */


undefined8 FUN_0058d190(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  cVar1 = **(char **)*param_3;
  if ((cVar1 == '\x05') || (cVar1 == '\n')) {
    FUN_0058ce80(&local_10,param_2,param_3);
    FUN_004168e0(param_1,local_10);
  }
  else if (cVar1 == '\v') {
    FUN_00591340(&LAB_0058e4f8,param_1,param_2,param_3);
  }
  else if (cVar1 == '\x12') {
    FUN_0058ce80(&local_18,param_2,param_3);
    FUN_004168e0(param_1,local_18);
  }
  else {
    FUN_00414520(param_1);
  }
  FUN_00414560(&local_18,2);
  return param_1;
}

