/* Ghidra address: 0108e1e0 */
/* Ghidra symbol: FUN_0108e1e0 */


void FUN_0108e1e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00f60ce0(local_20,local_res10[0]);
  FUN_00414b50(local_res10,local_20[0]);
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x198));
  local_78 = local_res10[0];
  local_70 = 0x11;
  local_68 = local_res10[0];
  local_60 = 0x11;
  local_58 = local_res10[0];
  local_50 = 0x11;
  local_48 = local_res10[0];
  local_40 = 0x11;
  local_38 = local_res10[0];
  local_30 = 0x11;
  FUN_00442f70(&local_28,local_10,&local_78,4);
  FUN_00414b50(&local_10,local_28);
  (**(code **)(*param_3 + 0x78))(param_3,local_10);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

