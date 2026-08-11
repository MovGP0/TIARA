/* Ghidra address: 01982970 */
/* Ghidra symbol: FUN_01982970 */


void FUN_01982970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x6b0);
  uVar2 = (**(code **)(*plVar1 + 0x1e8))(plVar1,local_res10);
  lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01927248);
  FUN_004168e0(local_20,local_res18);
  (**(code **)(**(longlong **)(lVar3 + 0x308) + 0x40))(*(longlong **)(lVar3 + 0x308),0,local_20[0]);
  FUN_00414520(local_20);
  FUN_00414560(&local_res10,2);
  return;
}

