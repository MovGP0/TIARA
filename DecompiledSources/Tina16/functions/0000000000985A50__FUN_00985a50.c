/* Ghidra address: 00985a50 */
/* Ghidra symbol: FUN_00985a50 */


undefined1 FUN_00985a50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_res18;
  undefined8 *local_res20;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  *local_res20 = 0;
  local_10 = FUN_004ba3c0(&PTR_FUN_0047d288,1,0);
  local_11 = (**(code **)(*param_1 + 0xd0))(param_1,param_2,local_res18,local_10);
  FUN_004ba980(local_10,&local_28);
  FUN_00414ad0(local_res20,local_28);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res18);
  return local_11;
}

