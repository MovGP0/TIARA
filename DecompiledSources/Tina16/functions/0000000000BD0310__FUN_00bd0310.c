/* Ghidra address: 00bd0310 */
/* Ghidra symbol: FUN_00bd0310 */


void FUN_00bd0310(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  longlong local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (local_res18[0] != 0) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_20 + 0x60))(local_20,local_res18[0]);
    FUN_00bd0210(param_1,param_2,local_20);
    FUN_00410f20(local_20);
  }
  FUN_00414480(local_res18);
  return;
}

