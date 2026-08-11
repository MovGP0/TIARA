/* Ghidra address: 0144de60 */
/* Ghidra symbol: FUN_0144de60 */


void FUN_0144de60(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  double local_68 [2];
  double local_58 [3];
  undefined8 uStack_40;
  
  local_58[2] = (double)*param_2;
  uStack_40 = param_2[1];
  if (*(char *)(param_4 + 0x92) == '\0') {
    FUN_019b7940(param_4);
    local_58[0] = *(double *)(param_1 + 0x138) / 2.0;
    local_58[1] = 0.0;
    FUN_01449560(local_58 + 2,local_58,local_58,param_4);
    FUN_014494b0(local_58,local_68,param_4);
    local_68[0] = local_68[0] + 1.0;
    FUN_0144dd40(param_1,local_58 + 2,local_58,param_4);
    FUN_01449410(local_58,local_68,param_3,param_4);
  }
  return;
}

