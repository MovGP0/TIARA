/* Ghidra address: 0089c3d0 */
/* Ghidra symbol: FUN_0089c3d0 */


undefined1 FUN_0089c3d0(undefined8 param_1,longlong param_2)

{
  longlong local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_10;
  char local_9;
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00874ee0(local_20,local_res10,&LAB_0089c598,1,1);
  local_10 = FUN_00877cc0(local_20[0],0xffffffff);
  if ((local_10 < 0) || (0xff < local_10)) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  FUN_00874ee0(&local_28,local_res10,&LAB_0089c598,1,1);
  local_10 = FUN_00877cc0(local_28,0xffffffff);
  if (((local_9 == '\0') || (local_10 < 0)) || (0xff < local_10)) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  FUN_00874ee0(&local_30,local_res10,&LAB_0089c598,1,1);
  local_10 = FUN_00877cc0(local_30,0xffffffff);
  if (((local_9 == '\0') || (local_10 < 0)) || (0xff < local_10)) {
    local_9 = '\0';
  }
  else {
    local_9 = '\x01';
  }
  FUN_00874ee0(&local_38,local_res10,&LAB_0089c598,1,1);
  local_10 = FUN_00877cc0(local_38,0xffffffff);
  if (((local_9 == '\0') || (local_10 < 0)) || ((0xff < local_10 || (local_res10[0] != 0)))) {
    local_9 = 0;
  }
  else {
    local_9 = 1;
  }
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res10);
  return local_9;
}

