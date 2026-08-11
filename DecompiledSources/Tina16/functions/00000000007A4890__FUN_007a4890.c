/* Ghidra address: 007a4890 */
/* Ghidra symbol: FUN_007a4890 */


undefined8 * FUN_007a4890(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = param_3;
  FUN_005962a0(param_1 + 8,param_3,&local_40);
  *param_2 = local_40;
  param_2[1] = uStack_38;
  return param_2;
}

