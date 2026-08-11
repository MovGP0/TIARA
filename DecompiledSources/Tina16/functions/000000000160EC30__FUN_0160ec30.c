/* Ghidra address: 0160ec30 */
/* Ghidra symbol: FUN_0160ec30 */


undefined8 FUN_0160ec30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00441640(&local_10,local_res10);
  FUN_00441920(&local_28,local_res10);
  FUN_00f60ce0(local_20,local_28);
  FUN_00416cd0(param_1,5,local_10,local_20[0],&DAT_0160ed68,local_res18,L".bin");
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return param_1;
}

