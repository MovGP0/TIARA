/* Ghidra address: 010b4440 */
/* Ghidra symbol: FUN_010b4440 */


void FUN_010b4440(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00416cd0(local_20,3,local_res10,local_res18,L".text");
  FUN_004b9df0(*(undefined8 *)(param_1 + 8),local_20[0]);
  FUN_00416cd0(&local_28,3,local_res10,local_res18,L".data");
  FUN_004b9df0(*(undefined8 *)(param_1 + 0x10),local_28);
  FUN_00416cd0(&local_30,3,local_res10,local_res18,L".romfs");
  FUN_004b9df0(*(undefined8 *)(param_1 + 0x18),local_30);
  FUN_00416cd0(&local_38,3,local_res10,local_res18,L".config");
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x100))(*(longlong **)(param_1 + 0x20),local_38);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  if (0 < iVar1) {
    FUN_00416cd0(&local_40,3,local_res10,local_res18,L".userfs");
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x100))(*(longlong **)(param_1 + 0x30),local_40);
    FUN_010b4360(&local_50,*(undefined8 *)(param_1 + 0x30));
    FUN_00416ba0(&local_48,local_res10,local_50);
    FUN_004b9df0(*(undefined8 *)(param_1 + 0x28),local_48);
  }
  FUN_00414560(&local_50,7);
  FUN_00414560(&local_res10,2);
  return;
}

