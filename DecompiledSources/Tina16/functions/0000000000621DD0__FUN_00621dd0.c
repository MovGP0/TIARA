/* Ghidra address: 00621dd0 */
/* Ghidra symbol: FUN_00621dd0 */


undefined4 FUN_00621dd0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_004168e0(&local_20,param_2);
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  (**(code **)*puVar1)(puVar1,&local_28);
  FUN_004168e0(&local_30,local_28);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x10);
  (**(code **)(*plVar2 + 0x10))(plVar2,&local_38);
  FUN_004168e0(&local_40,local_38);
  uVar3 = FUN_00620f50(local_20,0,0x80020009,puVar1 + 8,local_30,local_40);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  FUN_00414520(&local_20);
  return uVar3;
}

