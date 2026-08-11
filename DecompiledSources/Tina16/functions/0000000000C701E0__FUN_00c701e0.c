/* Ghidra address: 00c701e0 */
/* Ghidra symbol: FUN_00c701e0 */


undefined8 FUN_00c701e0(undefined8 param_1,short *param_2)

{
  short *local_res10 [3];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  char local_11;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] == (short *)0x0) {
    FUN_00414480(param_1);
  }
  else {
    local_10 = FUN_005ea3c0(&DAT_005e7878,1);
    if (*local_res10[0] == 0x5c) {
      FUN_00441640(&local_20,local_res10[0]);
      FUN_00441920(&local_28,local_res10[0]);
    }
    else {
      FUN_00414b50(&local_20,
                   L"\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Shell Folders");
      FUN_00414b50(&local_28,local_res10[0]);
    }
    local_11 = FUN_005ea880(local_10,local_20,0);
    if (local_11 != '\0') {
      FUN_005eb6d0(local_10,param_1,local_28);
    }
    FUN_00410f20(local_10);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return param_1;
}

