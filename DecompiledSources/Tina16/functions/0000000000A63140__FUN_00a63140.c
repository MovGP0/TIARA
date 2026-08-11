/* Ghidra address: 00a63140 */
/* Ghidra symbol: FUN_00a63140 */


undefined1 FUN_00a63140(short param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_00416780(&local_10,param_1);
  iVar1 = FUN_004170c0(local_10,param_2,1);
  if (iVar1 < 1) {
    FUN_00416780(&local_18,param_1);
    iVar1 = FUN_004170c0(local_18,param_3,1);
    if (iVar1 < 1) {
      if (param_1 == 0) {
        local_19 = 2;
      }
      else {
        local_19 = 0;
      }
    }
    else {
      local_19 = 2;
    }
  }
  else {
    local_19 = 1;
  }
  FUN_00414560(&local_18,2);
  return local_19;
}

