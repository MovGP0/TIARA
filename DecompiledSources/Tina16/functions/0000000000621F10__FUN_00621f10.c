/* Ghidra address: 00621f10 */
/* Ghidra symbol: FUN_00621f10 */


undefined4 FUN_00621f10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_004168e0(local_20,param_2);
  (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),&local_28);
  FUN_004168e0(&local_30,local_28);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_38);
  FUN_004168e0(&local_40,local_38);
  uVar2 = FUN_00620f50(local_20[0],0,param_4,param_3,local_30,local_40);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  FUN_00414520(local_20);
  return uVar2;
}

