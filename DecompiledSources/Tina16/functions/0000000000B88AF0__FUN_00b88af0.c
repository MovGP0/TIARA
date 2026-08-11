/* Ghidra address: 00b88af0 */
/* Ghidra symbol: FUN_00b88af0 */


undefined4
FUN_00b88af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  FUN_00414630(local_res20);
  FUN_004b6dc0(param_1,0);
  plVar2 = (longlong *)FUN_00b883e0(local_res18);
  FUN_00b6c0c0(plVar2,local_res20,&PTR_FUN_00b873e8);
  uVar1 = (**(code **)*param_1)(param_1);
  uVar1 = FUN_00b6c660(plVar2,param_1,param_2,uVar1);
  (**(code **)(*plVar2 + 0xb0))(plVar2);
  FUN_00410f20(plVar2);
  FUN_00414590(&local_res18,2);
  return uVar1;
}

