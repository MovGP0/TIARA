/* Ghidra address: 01479400 */
/* Ghidra symbol: FUN_01479400 */


undefined8 FUN_01479400(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_00414480(param_1);
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x208) + 8);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,param_3);
  FUN_01477740(local_20[0],&local_28,&local_30,&local_38);
  FUN_00414ad0(param_1,local_28);
  FUN_00414560(&local_38,4);
  return param_1;
}

