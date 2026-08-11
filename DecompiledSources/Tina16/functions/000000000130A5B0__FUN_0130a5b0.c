/* Ghidra address: 0130a5b0 */
/* Ghidra symbol: FUN_0130a5b0 */


bool FUN_0130a5b0(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong local_res10;
  longlong local_res18 [2];
  bool local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  iVar1 = FUN_004170c0(&DAT_0130a77c,local_res10,1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&DAT_0130a77c,local_res10,1);
    FUN_00416dc0(&local_18,local_res10,1,iVar1 + -1);
    FUN_0043ea00(&local_10,local_18);
    FUN_00414b50(&local_res10,local_10);
  }
  iVar1 = FUN_004170c0(&DAT_0130a77c,local_res18[0],1);
  if (0 < iVar1) {
    iVar1 = FUN_004170c0(&DAT_0130a77c,local_res18[0],1);
    FUN_00416dc0(&local_28,local_res18[0],1,iVar1 + -1);
    FUN_0043ea00(&local_20,local_28);
    FUN_00414b50(local_res18,local_20);
  }
  if (param_4 == '\0') {
    if (local_res10 == local_res18[0]) {
      local_29 = true;
    }
    else if ((local_res10 == 0) || (local_res18[0] == 0)) {
      local_29 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_res10,local_res18[0]);
      local_29 = iVar1 == 0;
    }
  }
  else {
    iVar1 = FUN_00416db0(local_res10,local_res18[0]);
    local_29 = iVar1 == 0;
  }
  FUN_00414560(&local_28,4);
  FUN_00414560(&local_res10,2);
  return local_29;
}

