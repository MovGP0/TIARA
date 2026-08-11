/* Ghidra address: 0144dd40 */
/* Ghidra symbol: FUN_0144dd40 */


void FUN_0144dd40(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 local_68 [16];
  double local_58 [3];
  undefined8 uStack_40;
  
  local_58[2] = (double)*param_2;
  uStack_40 = param_2[1];
  if (*(char *)(param_4 + 0x92) == '\0') {
    FUN_019b7940(param_4);
    local_58[0] = (*(double *)(param_1 + 0x130) * 4.0) / *(double *)(param_1 + 0x138);
    local_58[1] = 0.0;
    FUN_0144b710(local_58 + 2,local_68,param_4);
    FUN_01449560(local_58,local_68,param_3,param_4);
  }
  return;
}

