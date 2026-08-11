/* Ghidra address: 01b1def0 */
/* Ghidra symbol: FUN_01b1def0 */


undefined8 FUN_01b1def0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004414c0(local_20,local_res10[0],0);
  FUN_00441a10(&local_28,local_res10[0]);
  FUN_00416cd0(&local_10,4,local_20[0],&LAB_01b1e010,*(undefined8 *)PTR_DAT_02001f18,local_28);
  cVar1 = FUN_00440a20(local_10,1);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  else {
    FUN_00414ad0(param_1,local_10);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

