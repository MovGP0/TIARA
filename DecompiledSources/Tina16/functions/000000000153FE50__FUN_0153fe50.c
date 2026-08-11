/* Ghidra address: 0153fe50 */
/* Ghidra symbol: FUN_0153fe50 */


void FUN_0153fe50(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar1 = FUN_0153f7d0(&DAT_0153e548,1,param_2,param_3,local_res20);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))(*(longlong **)(param_1 + 0x10),uVar1);
  FUN_00414480(&local_res20);
  return;
}

