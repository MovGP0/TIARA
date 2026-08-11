/* Ghidra address: 00a275d0 */
/* Ghidra symbol: FUN_00a275d0 */


longlong * FUN_00a275d0(longlong *param_1,longlong param_2,short *param_3)

{
  int iVar1;
  longlong local_res10;
  short *local_res18 [2];
  undefined1 auStack_a8 [32];
  short *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  int local_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_50 = auStack_a8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  FUN_0043ea00(&local_58,local_res10);
  FUN_00414b50(&local_res10,local_58);
  FUN_00a27cc0(&local_28,local_res10);
  local_18 = FUN_004170c0(L"file:///",local_res10,1);
  if (local_18 == 1) {
    local_2c = 0;
    if (local_res10 != 0) {
      local_2c = *(int *)(local_res10 + -4);
    }
    FUN_00416dc0(&local_60,local_res10,9,local_2c + -8);
    local_18 = FUN_004170c0(&DAT_00a27bec,local_60,1);
    local_18 = local_18 + 8;
  }
  else {
    local_18 = FUN_004170c0(&DAT_00a27bfc,local_res10,1);
    if (local_18 < 1) {
      local_18 = FUN_004170c0(&DAT_00a27bec,local_res10,1);
    }
    else {
      local_30 = 0;
      if (local_res10 != 0) {
        local_30 = *(int *)(local_res10 + -4);
      }
      FUN_00416dc0(&local_68,local_res10,local_18 + 3,(local_30 - local_18) + -2);
      iVar1 = FUN_004170c0(&DAT_00a27bec,local_68,1);
      local_18 = iVar1 + local_18 + 2;
    }
  }
  if (local_18 == 0) {
    FUN_00416ad0(&local_res10,&DAT_00a27bec);
    local_34 = 0;
    if (local_res10 != 0) {
      local_34 = *(int *)(local_res10 + -4);
    }
    local_18 = local_34;
  }
  else {
    local_38 = 0;
    if (local_res10 != 0) {
      local_38 = *(int *)(local_res10 + -4);
    }
    if (*(short *)(local_res10 + -2 + (longlong)local_38 * 2) != 0x2f) {
      FUN_00416ad0(&local_res10,&DAT_00a27bec);
    }
  }
  FUN_0043ea00(&local_70,local_res18[0]);
  FUN_00414b50(local_res18,local_70);
  local_3c = 0;
  if (local_res18[0] != (short *)0x0) {
    local_3c = *(int *)(local_res18[0] + -2);
  }
  if ((local_3c < 1) || (*local_res18[0] != 0x2f)) {
    FUN_00416ba0(param_1,local_res10,local_res18[0]);
  }
  else {
    local_40 = 0;
    if (local_res18[0] != (short *)0x0) {
      local_40 = *(int *)(local_res18[0] + -2);
    }
    if ((local_40 < 2) || (local_res18[0][1] != 0x2f)) {
      local_10 = 0;
      FUN_00416dc0(&local_10,local_res10,1,local_18);
      local_44 = 0;
      if (local_res18[0] != (short *)0x0) {
        local_44 = *(int *)(local_res18[0] + -2);
      }
      FUN_00416dc0(&local_78,local_res18[0],2,local_44 + -1);
      FUN_00416ba0(param_1,local_10,local_78);
      FUN_00414480(&local_10);
    }
    else {
      iVar1 = FUN_00416db0(local_28,L"file");
      if (iVar1 == 0) {
        FUN_00416ba0(param_1,L"http:",local_res18[0]);
      }
      else {
        local_88 = local_res18[0];
        FUN_00416cd0(param_1,3,local_28,&DAT_00a27c40);
      }
    }
  }
  iVar1 = FUN_004170c0(L"/../",*param_1,1);
  while (local_14 = iVar1, 0 < iVar1) {
    if (local_18 < iVar1) {
      while ((1 < local_14 && (*(short *)(*param_1 + -2 + (longlong)(local_14 + -1) * 2) != 0x2f)))
      {
        local_14 = local_14 + -1;
      }
      local_1c = iVar1;
      if (local_14 < 2) break;
      FUN_00416e20(param_1,local_14,(iVar1 - local_14) + 4);
    }
    else {
      FUN_00416e20(param_1,iVar1 + 1,3);
    }
    iVar1 = FUN_004170c0(L"/../",*param_1,1);
  }
  local_14 = FUN_004170c0(&DAT_00a27c68,*param_1,1);
  while (0 < local_14) {
    FUN_00416e20(param_1,local_14 + 1,2);
    local_14 = FUN_004170c0(&DAT_00a27c68,*param_1,1);
  }
  FUN_00414560(&local_78,5);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res10,2);
  return param_1;
}

