/* Ghidra address: 0140e7a0 */
/* Ghidra symbol: FUN_0140e7a0 */


void FUN_0140e7a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar1 = FUN_0140e6c0(&DAT_0140cb68,1,local_res10[0]);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  FUN_00414480(local_res10);
  return;
}

