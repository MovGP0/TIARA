/* Ghidra address: 007a7e70 */
/* Ghidra symbol: FUN_007a7e70 */


undefined8 * FUN_007a7e70(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = param_3;
  FUN_005962a0(param_1 + 8,param_3,&local_50);
  *param_2 = local_50;
  param_2[1] = uStack_48;
  param_2[2] = uStack_40;
  param_2[3] = uStack_38;
  return param_2;
}

