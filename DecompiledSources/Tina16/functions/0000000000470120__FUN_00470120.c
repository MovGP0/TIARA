/* Ghidra address: 00470120 */
/* Ghidra symbol: FUN_00470120 */


undefined8 FUN_00470120(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  uVar1 = FUN_00416740(local_res20);
  uVar1 = thunk_FUN_041b2403(param_1,param_2,param_3,uVar1);
  FUN_00414480(&local_res20);
  return uVar1;
}

