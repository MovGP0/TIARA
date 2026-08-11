/* Ghidra address: 00be2ee0 */
/* Ghidra symbol: FUN_00be2ee0 */


undefined8 * FUN_00be2ee0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_30 = param_3;
  FUN_005962a0(param_1 + 8,param_3,&local_44);
  *param_2 = local_44;
  param_2[1] = uStack_3c;
  *(undefined4 *)(param_2 + 2) = uStack_34;
  return param_2;
}

