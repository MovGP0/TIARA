/* Ghidra address: 01ae9420 */
/* Ghidra symbol: FUN_01ae9420 */


undefined8 FUN_01ae9420(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_10 = 0;
  lVar1 = FUN_01ae91c0(param_1);
  if (lVar1 != 0) {
    local_10 = FUN_01cc6a70(lVar1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return local_10;
}

