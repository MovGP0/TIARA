/* Ghidra address: 0041f230 */
/* Ghidra symbol: FUN_0041f230 */


undefined8
FUN_0041f230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            int param_5)

{
  char *pcVar1;
  char *local_20 [2];
  
  local_20[0] = (char *)*param_4;
  for (pcVar1 = local_20[0]; (0 < param_5 && (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    param_5 = param_5 + -1;
  }
  FUN_0041f0c0(param_1,param_2,param_3,local_20,(int)pcVar1 - (int)local_20[0]);
  return param_2;
}

