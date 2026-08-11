/* Ghidra address: 008f9c40 */
/* Ghidra symbol: FUN_008f9c40 */


bool FUN_008f9c40(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_10 = 0;
  local_18 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  if (uVar1 == uVar3) {
    FUN_004168b0(&local_10,param_1);
    FUN_004168b0(&local_18,param_2);
    iVar2 = FUN_0043e420(local_10,local_18);
    local_39 = iVar2 == 0;
  }
  else {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + -4) >> 1;
    }
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(uint *)(param_2 + -4) >> 1;
    }
    if (uVar3 < uVar1) {
      uVar1 = 0;
      if (param_2 != 0) {
        uVar1 = *(uint *)(param_2 + -4) >> 1;
      }
      FUN_00416430(&local_20,param_1,1,uVar1 + 1);
      FUN_004168b0(&local_28,local_20);
      FUN_00416020(&local_30,param_2,&DAT_008f9dfc);
      FUN_004168b0(&local_38,local_30);
      iVar2 = FUN_0043e420(local_28,local_38);
      local_39 = iVar2 == 0;
    }
    else {
      local_39 = false;
    }
  }
  FUN_00414480(&local_38);
  FUN_00414520(&local_30);
  FUN_00414480(&local_28);
  FUN_00414520(&local_20);
  FUN_00414560(&local_18,2);
  return local_39;
}

