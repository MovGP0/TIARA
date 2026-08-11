/* Ghidra address: 008ffe10 */
/* Ghidra symbol: FUN_008ffe10 */


undefined1 FUN_008ffe10(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  iVar1 = FUN_00417170(&DAT_008fff00,param_1,1);
  if (iVar1 == 1) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + -4) >> 1;
    }
    FUN_00416430(local_20,param_1,uVar2,1);
    iVar1 = FUN_00416420(local_20[0],&LAB_008fff08);
    if (iVar1 == 0) {
      uVar2 = 0;
      if (param_1 != 0) {
        uVar2 = *(uint *)(param_1 + -4) >> 1;
      }
      FUN_00416430(&local_28,param_1,2,uVar2 - 2);
      local_29 = FUN_008ff6c0(local_28);
    }
    else {
      local_29 = 0;
    }
  }
  else {
    local_29 = 0;
  }
  FUN_004145c0(&local_28,2);
  return local_29;
}

