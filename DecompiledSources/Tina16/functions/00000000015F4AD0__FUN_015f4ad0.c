/* Ghidra address: 015f4ad0 */
/* Ghidra symbol: FUN_015f4ad0 */


undefined1 FUN_015f4ad0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined1 local_9;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],&DAT_015f4bb4);
  if (iVar1 == 0) {
    local_9 = 0;
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],&DAT_015f4bc4);
    if (iVar1 == 0) {
      local_9 = 1;
    }
    else {
      iVar1 = FUN_00416db0(local_res8[0],&DAT_015f4bd4);
      if (iVar1 == 0) {
        local_9 = 4;
      }
      else {
        iVar1 = FUN_00416db0(local_res8[0],&DAT_015f4be4);
        if (iVar1 == 0) {
          local_9 = 3;
        }
        else {
          iVar1 = FUN_00416db0(local_res8[0],&LAB_015f4bf4);
          if (iVar1 == 0) {
            local_9 = 6;
          }
          else {
            local_9 = 4;
          }
        }
      }
    }
  }
  FUN_00414480(local_res8);
  return local_9;
}

