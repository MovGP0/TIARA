/* Ghidra address: 00f2d260 */
/* Ghidra symbol: FUN_00f2d260 */


undefined8 FUN_00f2d260(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = FUN_004540d0(&DAT_00438748,1,0x100);
  FUN_00417320(&local_38,0x20,param_3);
  (**(code **)(*param_1 + 0x10))(param_1,local_20,0,local_38);
  FUN_00455ae0(local_20,param_2,1);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return param_2;
}

