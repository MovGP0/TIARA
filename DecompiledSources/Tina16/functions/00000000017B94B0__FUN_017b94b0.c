/* Ghidra address: 017b94b0 */
/* Ghidra symbol: FUN_017b94b0 */


void FUN_017b94b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  FUN_01b1ccc0(local_res18,local_res20);
  FUN_01cf0ea0(param_1,param_2,local_res18[0],local_res20[0]);
  if (-1 < *(int *)(param_1 + 0x1c)) {
    FUN_01b1ccc0(local_res18,local_res20);
    plVar1 = (longlong *)FUN_017b9690(param_1);
    (**(code **)(*plVar1 + 0x98))(plVar1,0,local_res18[0],local_res20[0]);
    FUN_017b9730(param_1);
  }
  return;
}

