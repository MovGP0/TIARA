/* Ghidra address: 00bfba50 */
/* Ghidra symbol: FUN_00bfba50 */


int FUN_00bfba50(longlong param_1)

{
  int *piVar1;
  ushort *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  int local_84;
  longlong local_80;
  int local_74;
  longlong local_70;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  short *local_50;
  short *local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_a0 = auStack_118;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_24 = 0;
  FUN_00bf2c20(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),&local_a8);
  FUN_00416dc0(&local_30,local_a8,1,
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) + -1);
  local_54 = 0;
  if (local_30 != 0) {
    local_54 = *(int *)(local_30 + -4);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) + -1;
  if (local_54 < iVar6) {
    local_58 = 0;
    if (local_30 != 0) {
      local_58 = *(int *)(local_30 + -4);
    }
    FUN_00bd1750(&local_b0,0x20,iVar6 - local_58);
    FUN_00416ad0(&local_30,local_b0);
  }
  local_20[0] = 0;
  FUN_00bf2c20(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),local_20);
  FUN_00bf2c20(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),&local_b8);
  local_60 = local_b8;
  local_64 = 0;
  if (local_b8 != 0) {
    local_64 = *(int *)(local_b8 + -4);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4);
  FUN_00416dc0(&local_38,local_20[0],iVar6,(local_64 - iVar6) + 1);
  FUN_00414480(local_20);
  local_48 = *(short **)(*(longlong *)(param_1 + 0x50) + 0x80);
  local_50 = (short *)FUN_00bcc3c0(local_48);
  if (*local_50 == 0) {
    FUN_004167d0(&local_d0,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80));
    local_f8 = local_38;
    FUN_00416cd0(&local_40,3,local_30,local_d0);
    FUN_00c0f2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1,local_40
                );
  }
  else {
    FUN_004167d0(&local_c8,*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80));
    FUN_00416dc0(&local_c0,local_c8,1,((longlong)local_50 - (longlong)local_48) / 2 & 0xffffffff);
    FUN_00416ba0(&local_40,local_30,local_c0);
    FUN_00c0f2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1,local_40
                );
    uVar4 = FUN_00bfba10(param_1,local_50);
    FUN_00bd0070(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8),
                 *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc),uVar4)
    ;
  }
  while (*local_50 != 0) {
    if (*local_50 == 0xd) {
      local_50 = local_50 + 1;
    }
    if (*local_50 == 10) {
      local_50 = local_50 + 1;
    }
    piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc);
    *piVar1 = *piVar1 + 1;
    puVar2 = (ushort *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x63e);
    *puVar2 = *puVar2 | 4;
    local_48 = local_50;
    local_50 = (short *)FUN_00bcc3c0(local_50);
    if (local_50 == local_48) {
      if (*local_50 == 0) {
        FUN_00414b50(&local_40,local_38);
      }
      else {
        FUN_00414480(&local_40);
      }
    }
    else {
      FUN_00414740(&local_40,local_48,((longlong)local_50 - (longlong)local_48) / 2 & 0xffffffff);
      if (*local_50 == 0) {
        FUN_00416ad0(&local_40,local_38);
      }
    }
    FUN_00c0f2c0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),
                 *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1,local_40
                );
    local_24 = local_24 + 1;
  }
  uVar5 = FUN_00c09df0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70));
  if ((uVar5 & 0x4000000) == 0) {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,&local_e8,
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1);
    local_90 = local_e8;
    local_94 = 0;
    if (local_e8 != 0) {
      local_94 = *(int *)(local_e8 + -4);
    }
    local_98 = 0;
    if (local_38 != 0) {
      local_98 = *(int *)(local_38 + -4);
    }
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) =
         (local_94 - local_98) + 1;
  }
  else if (local_38 == 0) {
    iVar6 = FUN_00bcc200(local_40,*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x618));
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) = iVar6 + 1;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4e8);
    (**(code **)(*plVar3 + 0x18))
              (plVar3,&local_d8,
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4cc) + -1);
    local_70 = local_d8;
    local_74 = 0;
    if (local_d8 != 0) {
      local_74 = *(int *)(local_d8 + -4);
    }
    FUN_00bf1640(&local_e0,local_38);
    local_80 = local_e0;
    local_84 = 0;
    if (local_e0 != 0) {
      local_84 = *(int *)(local_e0 + -4);
    }
    *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x70) + 0x4c4) =
         (local_74 - local_84) + 1;
  }
  FUN_00c0a950(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),2);
  FUN_00414560(&local_e8,9);
  FUN_00414560(&local_40,3);
  return local_24;
}

