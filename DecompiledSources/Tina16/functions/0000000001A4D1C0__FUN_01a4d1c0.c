/* Ghidra address: 01a4d1c0 */
/* Ghidra symbol: FUN_01a4d1c0 */


undefined8 FUN_01a4d1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_28 = local_res10;
  local_20 = 0x11;
  local_18 = local_res18;
  local_10 = 0x11;
  FUN_00442f70(param_1,L"Calculate the %s on %s",&local_28,1);
  FUN_00414560(&local_res10,2);
  return param_1;
}

