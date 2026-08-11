/* Ghidra address: 0112b0f0 */
/* Ghidra symbol: FUN_0112b0f0 */


undefined8 FUN_0112b0f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uVar1 = FUN_0112b910(&local_38);
  FUN_0044a090(param_1,param_2,uVar1,PTR_DAT_02004830);
  return param_1;
}

