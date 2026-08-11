/* Ghidra address: 01768d10 */
/* Ghidra symbol: FUN_01768d10 */


void FUN_01768d10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414ad0(param_1 + 0x40,local_res18);
  FUN_00414ad0(*(longlong *)(param_1 + 0x68) + 0x10,local_res18);
  FUN_00414560(&local_res10,2);
  return;
}

