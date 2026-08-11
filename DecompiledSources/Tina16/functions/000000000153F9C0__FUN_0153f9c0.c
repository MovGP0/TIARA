/* Ghidra address: 0153f9c0 */
/* Ghidra symbol: FUN_0153f9c0 */


void FUN_0153f9c0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar1 = FUN_0153f5a0(&DAT_0153dd58,1,param_2,param_3,local_res20,param_5,param_6,param_7);
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  FUN_00414480(&local_res20);
  return;
}

