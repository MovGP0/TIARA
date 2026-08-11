/* Ghidra address: 01776270 */
/* Ghidra symbol: FUN_01776270 */


void FUN_01776270(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(int *)(*(longlong *)(param_1 + 0x170) + 0x10) == 0) {
    local_28 = FUN_0153c260(&DAT_0153c0f8,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x170),local_28);
  }
  else {
    local_28 = FUN_004aeac0(*(longlong *)(param_1 + 0x170),0);
    (**(code **)(**(longlong **)(local_28 + 8) + 0x90))(*(longlong **)(local_28 + 8));
  }
  FUN_0043f750(&local_58,param_2);
  FUN_00416ba0(&local_38,local_58,&DAT_0177648c);
  local_78 = 1;
  FUN_00b8fd60(&local_40,param_3,6,0);
  FUN_00416ba0(&local_30,local_38,local_40);
  FUN_0043f750(&local_60,2);
  (**(code **)(*local_20 + 0x78))(local_20,local_60);
  FUN_0043f750(&local_68,1);
  (**(code **)(*local_20 + 0x78))(local_20,local_68);
  (**(code **)(*local_20 + 0x78))(local_20,local_30);
  (**(code **)(**(longlong **)(local_28 + 8) + 0x88))(*(longlong **)(local_28 + 8),local_20);
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_48,4);
  return;
}

