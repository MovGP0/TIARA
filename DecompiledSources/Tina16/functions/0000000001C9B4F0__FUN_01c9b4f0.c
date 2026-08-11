/* Ghidra address: 01c9b4f0 */
/* Ghidra symbol: FUN_01c9b4f0 */


void FUN_01c9b4f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  wchar_t *local_140;
  int *local_138;
  undefined1 local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined8 local_e0 [3];
  undefined4 local_c2;
  undefined1 local_bc;
  undefined1 local_a9;
  undefined8 local_a8;
  longlong local_a0 [2];
  undefined5 local_90;
  undefined1 local_8b;
  undefined2 uStack_8a;
  undefined1 local_88;
  uint7 uStack_87;
  undefined1 local_80 [3];
  undefined1 auStack_7d [5];
  undefined8 uStack_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64 [5];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_f0 = auStack_168;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_50 = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  local_a8 = 0;
  local_30 = 0;
  local_38 = 0;
  puVar2 = auStack_168;
  if (*PTR_DAT_02003778 == '\0') {
    local_148 = *(wchar_t **)PTR_PTR_020049d8;
    FUN_00416cd0(&local_f8,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01c9bd44);
    cVar3 = FUN_00440a20(local_f8,1);
    puVar2 = local_f0;
    if (cVar3 != '\0') {
      uVar4 = FUN_00e0ac40(*(undefined8 *)PTR_DAT_02005010,&local_a8,PTR_DAT_02001470);
      *PTR_DAT_02003778 = uVar4;
      puVar2 = local_f0;
    }
  }
  local_f0 = puVar2;
  local_148 = (wchar_t *)((ulonglong)local_148 & 0xffffffffffffff00);
  local_140 = (wchar_t *)((ulonglong)local_140 & 0xffffffffffff0000);
  local_138 = local_64;
  cVar3 = FUN_014b7d50(0xd,*(undefined8 *)(param_1 + 0x2788),1,0);
  if (cVar3 == '\0') {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_100,local_64[0] + 0x86);
    FUN_016fd940(local_100);
  }
  else {
    uVar6 = FUN_019a4600();
    cVar3 = FUN_019a02e0(uVar6);
    if (cVar3 == '\0') {
      FUN_016fd940(L"Can\'t convert to VHDL!");
    }
    else {
      puVar8 = (undefined8 *)PTR_DAT_02003ed8;
      puVar9 = local_e0;
      for (lVar7 = 7; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      uVar6 = *(undefined8 *)(PTR_DAT_020034d0 + 0x10);
      uStack_78 = *(undefined8 *)(PTR_DAT_020034d0 + 0x18);
      _local_90 = *(ulonglong *)PTR_DAT_020034d0 & 0xffffffffffffff;
      _local_90 = CONCAT15(1,local_90);
      _local_88 = CONCAT71((uint7)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 8) >> 8) & 0xffffff
                           ,1);
      auStack_7d = SUB85((ulonglong)uVar6 >> 0x18,0);
      local_80 = (undefined1  [3])CONCAT12(1,(ushort)uVar6 & 0xff00);
      uVar1 = _local_80;
      auStack_7d._2_3_ = (undefined3)((ulonglong)uVar6 >> 0x28);
      _local_80 = (uint5)(uint)uVar1;
      local_a9 = *PTR_DAT_020017c0;
      local_c2 = 0;
      local_bc = 0;
      local_40 = FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_015fcb30(&local_108,PTR_DAT_02004770);
      FUN_00414ad0(param_1 + 0x2740,local_108);
      uVar6 = FUN_00442620(param_1 + 0x2528,*(undefined8 *)(param_1 + 0x2740));
      FUN_015fcc20(uVar6,param_1 + 0x2738,0,0);
      local_48 = FUN_0154bb80(&DAT_01546f18,1);
      uVar6 = FUN_019a4600();
      FUN_01ca2f40(param_1,&local_110,uVar6);
      FUN_01569030(local_48,local_110);
      local_140 = (wchar_t *)FUN_019a4600();
      local_148 = (wchar_t *)0x0;
      local_138 = (int *)((ulonglong)local_138 & 0xffffffffffffff00);
      local_130 = 0;
      FUN_0155bbe0(local_48,*(undefined8 *)(param_1 + 0x2740),*(undefined8 *)(param_1 + 0x2738),
                   &stack0xffffffffffffff70);
      FUN_01561f80(local_48,param_2);
      iVar5 = (**(code **)(**(longlong **)(local_48 + 0x990) + 0x28))();
      local_68 = 0;
      if (-1 < iVar5 + -1) {
        do {
          (**(code **)(**(longlong **)(local_48 + 0x990) + 0x18))
                    (*(longlong **)(local_48 + 0x990),local_a0,local_68);
          local_e8 = 0;
          if (local_a0[0] != 0) {
            local_e8 = *(int *)(local_a0[0] + -4);
          }
          local_6c = local_e8;
          local_70 = FUN_004170c0(&DAT_01c9bd90,local_a0[0],1);
          if (local_70 == 1) {
            local_70 = FUN_004170c0(&DAT_01c9bda4,local_a0[0],1);
            FUN_00416dc0(local_a0,local_a0[0],local_70 + 1,local_6c - local_70);
            FUN_01c9b110(auStack_168,local_a0[0],local_68);
          }
          local_68 = local_68 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (*(char *)(local_48 + 0x7bb) != '\0') {
        local_148 = L"VHDL\\Packages";
        local_140 = L"\\tina_lib2_fpga.vhd";
        FUN_00416cd0(local_a0,4,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c9bd44);
        FUN_01c9b110(auStack_168,local_a0[0],0xffffffff);
      }
      if (param_2 == 1) {
        FUN_00414ad0(*(longlong *)(param_1 + 0x12a0) + 0x100,&DAT_01c9be10);
        FUN_00414ad0(*(longlong *)(param_1 + 0x12a0) + 0xe0,L"XDC File|*.xdc");
      }
      else if (param_2 == 2) {
        FUN_00414ad0(*(longlong *)(param_1 + 0x12a0) + 0x100,&DAT_01c9be50);
        FUN_00414ad0(*(longlong *)(param_1 + 0x12a0) + 0xe0,L"QSF File|*.qsf");
      }
      else {
        FUN_00414ad0(*(longlong *)(param_1 + 0x12a0) + 0x100,&DAT_01c9be90);
        FUN_00414ad0(*(longlong *)(param_1 + 0x12a0) + 0xe0,L"UCF File|*.ucf");
      }
      FUN_00441920(&local_118,*(undefined8 *)(local_48 + 0x728));
      FUN_00724380(*(undefined8 *)(param_1 + 0x12a0),local_118);
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x12a0) + 0xa8))
                        (*(longlong **)(param_1 + 0x12a0));
      if (cVar3 != '\0') {
        FUN_00724270(*(undefined8 *)(param_1 + 0x12a0),&local_120);
        FUN_00414ad0(local_48 + 0x728,local_120);
        (**(code **)(**(longlong **)(local_48 + 0x908) + 0x100))
                  (*(longlong **)(local_48 + 0x908),*(undefined8 *)(local_48 + 0x728));
      }
      FUN_00410f20(local_40);
      FUN_00410f20(local_48);
      uVar6 = FUN_00442620(param_1 + 0x2528,*(undefined8 *)(param_1 + 0x2740));
      FUN_015fcd60(*(undefined8 *)(param_1 + 0x2738),uVar6,0);
      FUN_015fcbd0(PTR_DAT_02004770,0);
      local_48 = 0;
    }
  }
  FUN_00414480(&local_120);
  FUN_00414560(&local_118,5);
  FUN_00414560(&local_a8,3);
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,2);
  return;
}

