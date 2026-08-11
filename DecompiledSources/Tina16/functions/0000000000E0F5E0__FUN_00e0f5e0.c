/* Ghidra address: 00e0f5e0 */
/* Ghidra symbol: FUN_00e0f5e0 */


bool FUN_00e0f5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  bool local_9;
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_9 = false;
  lVar1 = FUN_00e0f340(param_1,param_2);
  if (lVar1 != 0) {
    lVar1 = FUN_00e106f0(lVar1,local_res18[0]);
    local_9 = lVar1 != 0;
  }
  FUN_00414480(local_res18);
  return local_9;
}

