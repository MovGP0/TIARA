/* Ghidra address: 00f8c990 */
/* Ghidra symbol: FUN_00f8c990 */


void FUN_00f8c990(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,param_2);
  FUN_0043e1a0(local_20,local_28);
  FUN_00414ad0(param_1 + 0x3440,local_20[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa30);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,param_2);
  FUN_0043e1a0(&local_30,local_38);
  FUN_00414ad0(param_1 + 0x3438,local_30);
  FUN_00414560(&local_38,4);
  return;
}

