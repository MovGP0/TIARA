/* Ghidra address: 019c7160 */
/* Ghidra symbol: FUN_019c7160 */


void FUN_019c7160(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_118;
  int local_114;
  int local_100 [2];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  int local_e0;
  undefined1 local_d8;
  int local_d0;
  undefined1 local_c8;
  int local_c0;
  undefined1 local_b8;
  int local_b0;
  undefined1 local_a8;
  int local_a0;
  undefined1 local_98;
  int local_90;
  undefined1 local_88;
  int local_80;
  undefined1 local_78;
  int local_70;
  undefined1 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_60[0] = 0;
  local_50 = 0;
  local_114 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_114 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x38) + -8);
  }
  local_118 = 0;
  if (-1 < local_114 + -1) {
    do {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)local_118 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      local_48._0_4_ = (int)uVar2;
      iVar5 = (int)local_48;
      iVar9 = (int)local_48 / 8;
      local_48._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
      iVar6 = local_48._4_4_;
      iVar10 = local_48._4_4_ / 8;
      local_40._0_4_ = (int)uVar3;
      iVar7 = (int)local_40;
      iVar11 = (int)local_40 + -1;
      local_40._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      iVar8 = local_40._4_4_;
      iVar12 = local_40._4_4_ + -1;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x50) + (longlong)local_118 * 8);
      local_48 = uVar2;
      local_40 = uVar3;
      (**(code **)(*plVar4 + 0x288))(plVar4,&local_50);
      local_100[0] = local_118;
      local_f8 = 0;
      local_f0 = local_50;
      local_e8 = 0x11;
      local_e0 = iVar5;
      local_d8 = 0;
      local_d0 = iVar6;
      local_c8 = 0;
      local_c0 = iVar7;
      local_b8 = 0;
      local_b0 = iVar8;
      local_a8 = 0;
      local_98 = 0;
      local_88 = 0;
      local_78 = 0;
      local_68 = 0;
      local_a0 = iVar9;
      local_90 = iVar10;
      local_80 = iVar11 / 8;
      local_70 = iVar12 / 8;
      FUN_00442f70(local_60,
                   L"  Obstacle[%d]: lab: %s Rect(L=%d, T=%d, R=%d, B=%d) -> Grid: (%d,%d) -> (%d,%d)"
                   ,local_100,9);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))
                (*(longlong **)(param_1 + 0x70),local_60[0]);
      local_118 = local_118 + 1;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
  FUN_00414480(local_60);
  FUN_00414480(&local_50);
  return;
}

