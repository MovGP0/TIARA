/* Ghidra address: 00a3b840 */
/* Ghidra symbol: FUN_00a3b840 */


void FUN_00a3b840(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_48 = 10;
  local_20 = FUN_004baae0(&PTR_FUN_0047d7f8,1,param_2,param_3);
  (**(code **)(*param_1 + 0xc0))(param_1,local_20);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

