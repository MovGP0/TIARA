/* Ghidra address: 013fe560 */
/* Ghidra symbol: FUN_013fe560 */


undefined8
FUN_013fe560(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  short sVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong local_res8;
  longlong *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  int local_70;
  int local_6c;
  longlong *local_68;
  undefined8 local_60;
  bool local_55;
  int local_54;
  int local_50;
  longlong local_48;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_108;
  local_a0 = 0;
  local_a8 = 0;
  local_98 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_48 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_30 = 0;
  if (local_res8 != 0) {
    local_50 = 0;
    if (local_res8 != 0) {
      local_50 = *(int *)(local_res8 + -4);
    }
    local_34 = 1;
    iVar4 = local_50;
    if (0 < local_50) {
      do {
        if (*(short *)(local_res8 + -2 + (longlong)(int)local_34 * 2) == 0x20) {
          FUN_00416e20(&local_res8,local_34,1);
        }
        local_34 = local_34 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_34 = 1;
    (**(code **)(*local_res10 + 0x90))(local_res10);
    while( true ) {
      if (local_34 == 0) {
        local_55 = false;
      }
      else {
        local_54 = 0;
        if (local_res8 != 0) {
          local_54 = *(int *)(local_res8 + -4);
        }
        local_55 = (int)local_34 < local_54;
      }
      if (local_55 == false) break;
      FUN_0043e130(&local_88,local_res8);
      local_60 = local_88;
      local_38 = FUN_004170c0(&DAT_013feae0,local_88,local_34);
      FUN_0043e130(&local_90,local_res8);
      local_68 = local_90;
      plVar3 = local_90;
      local_3c = FUN_004170c0(&DAT_013feaf4,local_90,local_34);
      if (((int)local_38 < 1) || ((int)local_3c < 1)) {
        local_34 = local_3c;
        if (local_38 != 0) {
          local_34 = local_38;
        }
      }
      else {
        plVar3 = (longlong *)(ulonglong)local_3c;
        local_34 = FUN_00b905f0(local_38,plVar3);
      }
      if (local_34 != 0) {
        local_38 = local_34;
        local_3c = 0;
        FUN_00414480(&local_48);
        while( true ) {
          local_6c = 0;
          if (local_res8 != 0) {
            local_6c = *(int *)(local_res8 + -4);
          }
          if ((local_6c < (int)local_34) ||
             (*(short *)(local_res8 + -2 + (longlong)(int)local_34 * 2) == 0x29)) break;
          sVar1 = *(short *)(local_res8 + -2 + (longlong)(int)local_34 * 2);
          uVar2 = sVar1 - 0x28;
          if (uVar2 < 8) {
            bVar5 = ((int)CONCAT71((int7)((ulonglong)plVar3 >> 8),1) << ((byte)uVar2 & 0x1f) & 0x11U
                    ) != 0;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            plVar3 = (longlong *)&DAT_013feb08;
            FUN_00416ad0(&local_48,&DAT_013feb08);
          }
          else {
            FUN_00416780(&local_98,sVar1);
            plVar3 = local_98;
            FUN_00416ad0(&local_48,local_98);
          }
          local_3c = local_3c + 1;
          local_34 = local_34 + 1;
        }
        FUN_00416e20(&local_res8,local_38,local_3c + 1);
        iVar4 = (**(code **)(*local_res10 + 0xb0))(local_res10,local_48);
        if (iVar4 == -1) {
          (**(code **)(*local_res10 + 0x78))(local_res10,local_48);
        }
        FUN_00416ea0(local_48,&local_res8,local_38);
        local_70 = 0;
        if (local_48 != 0) {
          local_70 = *(int *)(local_48 + -4);
        }
        local_34 = local_38 + local_70;
      }
    }
    local_28 = FUN_016b97f0(&DAT_016b45f0,1,0);
    FUN_0043e130(&local_a0,local_res8);
    FUN_00415dd0(&local_a8,local_a0,0);
    local_e8 = param_5;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = local_res10;
    local_c8 = local_28;
    local_c0 = 0;
    local_b8 = local_res18;
    local_20 = FUN_016a67c0(&DAT_016a2760,1,local_a8,local_res20);
    local_30 = FUN_016a9250(local_20);
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  FUN_004144d0(&local_a8);
  FUN_00414560(&local_a0,4);
  FUN_00414480(&local_48);
  FUN_00414480(&local_res8);
  return local_30;
}

