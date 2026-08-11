/* Ghidra address: 01604ab0 */
/* Ghidra symbol: FUN_01604ab0 */


undefined8 FUN_01604ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_017ff4f0(param_3,&local_18);
  FUN_01b22130(&local_10,local_res10[0]);
  FUN_00416cd0(&local_10,4,local_10,&DAT_01604b98,local_18,L".tbl");
  FUN_00414ad0(param_1,local_10);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return param_1;
}

