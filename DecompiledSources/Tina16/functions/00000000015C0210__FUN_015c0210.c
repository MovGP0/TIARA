/* Ghidra address: 015c0210 */
/* Ghidra symbol: FUN_015c0210 */


void FUN_015c0210(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x18))(param_1,local_20,param_2);
  FUN_015bff30(param_1[0xf],local_20[0]);
  (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
  FUN_015bf270(&local_28,param_3);
  FUN_015bfad0(param_1[0xf],local_28,param_2);
  FUN_00414560(&local_28,2);
  return;
}

