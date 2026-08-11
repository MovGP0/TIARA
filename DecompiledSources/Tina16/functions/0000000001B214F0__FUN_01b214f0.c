/* Ghidra address: 01b214f0 */
/* Ghidra symbol: FUN_01b214f0 */


void FUN_01b214f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x78))(local_20,local_res8);
  (**(code **)(*local_20 + 0x100))(local_20,local_res10);
  FUN_00410f20(local_20);
  FUN_00414560(&local_res8,2);
  return;
}

