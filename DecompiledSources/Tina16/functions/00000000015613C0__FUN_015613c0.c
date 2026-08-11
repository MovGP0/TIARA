/* Ghidra address: 015613c0 */
/* Ghidra symbol: FUN_015613c0 */


void FUN_015613c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_150;
  int local_144;
  longlong local_140;
  longlong local_130;
  longlong local_128;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_6b [11];
  int local_60;
  undefined4 local_58;
  uint local_50 [4];
  int local_40;
  int local_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_150 = auStack_188;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_130 = *(longlong *)(param_1 + 0x8f0);
  iVar3 = *(int *)(local_130 + 0x10);
  local_3c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_128 = FUN_01d347d0(local_130,local_3c);
      local_c8 = FUN_00e0f340(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)(local_128 + 0x40));
      if ((local_c8 != 0) &&
         (FUN_00e0e8e0(*(undefined8 *)(local_c8 + 0x828),local_50,local_6b), local_50[0] != 0)) {
        FUN_00414b50(&local_e8,*(undefined8 *)(*(longlong *)(local_c8 + 0x828) + 0x20));
        if ((local_50[0] == 0x40) && (iVar1 = FUN_00416db0(local_e8,L"ATWINC1510"), iVar1 == 0)) {
          FUN_004ae7e0(local_38,local_128);
        }
        if ((local_50[0] != 0x40) && ((local_50[0] & 0xffff) != 0)) {
          FUN_004ae7e0(local_30,local_128);
        }
      }
      local_3c = local_3c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_88);
  iVar3 = *(int *)(local_38 + 0x10);
  local_3c = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_128 = FUN_004aeac0(local_38,local_3c);
      local_b8 = *(longlong **)(local_128 + 0x40);
      iVar1 = (**(code **)(*local_b8 + 0x1c8))(local_b8);
      local_40 = 0;
      local_60 = iVar1;
      if (-1 < iVar1 + -1) {
        do {
          (**(code **)(*local_b8 + 0x298))(local_b8,&local_b0,local_40);
          local_58 = (**(code **)(*local_b8 + 0x210))(local_b8,local_40);
          iVar2 = FUN_00416db0(local_b0,L"IRQN");
          if ((iVar2 == 0) && (local_c0 = FUN_015612f0(auStack_188,local_58), local_c0 != 0)) {
            FUN_015f8b00(&local_a0,local_b8);
            FUN_015f8b00(&local_a8,local_c0);
            local_168 = (undefined1 *)local_a8;
            FUN_00416cd0(&local_88,3,local_a0,&DAT_015618e0);
            local_168 = &LAB_015618f0;
            FUN_00416cd0(param_1 + 0xa0,3,*(undefined8 *)(param_1 + 0xa0),local_88);
          }
          local_40 = local_40 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_3c = local_3c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    local_140 = *(longlong *)(param_1 + 0xa0);
    local_144 = 0;
    if (local_140 != 0) {
      local_144 = *(int *)(local_140 + -4);
    }
    local_60 = local_144;
    FUN_00416e20(param_1 + 0xa0,local_144,1);
  }
  FUN_00410f20(local_38);
  FUN_00410f20(local_30);
  FUN_00414560(&local_f8,4);
  FUN_00414560(&local_b0,8);
  return;
}

