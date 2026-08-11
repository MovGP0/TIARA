/* Ghidra address: 01479960 */
/* Ghidra symbol: FUN_01479960 */


void FUN_01479960(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x278) + 0x208) + 8);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_20,param_2);
  FUN_01477740(local_20,&local_28,&local_30,&local_38);
  FUN_01477900(&local_20,local_28,local_res20,local_38);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,local_20);
  FUN_00414560(&local_38,4);
  FUN_00414560(&local_res18,2);
  return;
}

