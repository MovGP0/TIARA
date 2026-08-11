/* Ghidra address: 019a26a0 */
/* Ghidra symbol: FUN_019a26a0 */


longlong FUN_019a26a0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_3d8 [32];
  int local_3b8;
  undefined1 local_3b0;
  undefined1 local_3a8;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  undefined8 local_370;
  longlong local_368;
  undefined8 local_360;
  undefined8 local_358;
  longlong local_350;
  undefined8 local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 *local_320;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  short *local_2d8;
  undefined4 *local_2d0;
  undefined4 local_2c4;
  int local_2c0;
  byte local_2bb [256];
  undefined1 local_1bb [256];
  undefined1 local_bb;
  char local_ba;
  char local_b9;
  short *local_b8;
  undefined4 *local_b0;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  byte local_42;
  char local_41;
  longlong local_40 [4];
  undefined1 local_19;
  
  local_320 = auStack_3d8;
  local_398 = 0;
  local_390 = 0;
  local_380 = 0;
  local_370 = 0;
  local_378 = 0;
  local_368 = 0;
  local_358 = 0;
  local_360 = 0;
  local_350 = 0;
  local_340 = 0;
  local_348 = 0;
  local_338 = 0;
  local_328 = 0;
  local_330 = 0;
  local_60 = 0;
  local_2c4 = 0xa49a20;
  FUN_01994230(param_1);
  local_58 = 0;
  local_42 = '\0';
  local_50 = local_40;
  do {
    lVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *local_50 = lVar6;
    local_42 = local_42 + '\x01';
    local_50 = local_50 + 1;
  } while (local_42 != '\x04');
  local_19 = 0;
  iVar9 = *(int *)(param_1 + 0x10);
  local_2c0 = 0;
  if (-1 < iVar9 + -1) {
    local_42 = 4;
    do {
      uVar7 = FUN_00b94e60(param_1,local_2c0);
      FUN_019a2110(auStack_3d8,uVar7);
      local_2c0 = local_2c0 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_b9 = '\0';
  local_42 = '\0';
  local_50 = local_40;
  do {
    if ((local_b9 == '\0') && (*(int *)(*local_50 + 0x10) < 1)) {
      local_b9 = '\0';
    }
    else {
      local_b9 = '\x01';
    }
    local_42 = local_42 + '\x01';
    local_50 = local_50 + 1;
  } while (local_42 != '\x04');
  local_74 = 0;
  iVar9 = *(int *)(local_40[0] + 0x10);
  local_84 = 0;
  local_42 = 4;
  if (-1 < iVar9 + -1) {
    do {
      plVar8 = (longlong *)FUN_004aeac0(local_40[0],local_84);
      (**(code **)(*plVar8 + 0x288))(plVar8,&local_330);
      FUN_00416dc0(&local_328,local_330,1,0x10);
      FUN_00416910(local_1bb,local_328,0xff);
      FUN_004169a0(&local_338,local_1bb);
      plVar8 = (longlong *)FUN_004aeac0(local_40[0],local_84);
      sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      local_a4 = FUN_019a2670(auStack_3d8,local_338,sVar3 == 0x96);
      if (local_74 < local_a4) {
        local_74 = local_a4;
      }
      local_84 = local_84 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_78 = 0;
  iVar9 = *(int *)(local_40[2] + 0x10);
  local_84 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar8 = (longlong *)FUN_004aeac0(local_40[2],local_84);
      (**(code **)(*plVar8 + 0x288))(plVar8,&local_348);
      FUN_00416dc0(&local_340,local_348,1,0x10);
      FUN_00416910(local_1bb,local_340,0xff);
      FUN_004169a0(&local_350,local_1bb);
      plVar8 = (longlong *)FUN_004aeac0(local_40[2],local_84);
      sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      local_a4 = FUN_019a2670(auStack_3d8,local_350,sVar3 == 0x96);
      if (local_78 < local_a4) {
        local_78 = local_a4;
      }
      local_84 = local_84 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (local_74 < local_78) {
    local_74 = local_78;
  }
  local_7c = 0;
  iVar9 = *(int *)(local_40[1] + 0x10);
  local_84 = 0;
  local_78 = local_74;
  if (-1 < iVar9 + -1) {
    do {
      plVar8 = (longlong *)FUN_004aeac0(local_40[1],local_84);
      (**(code **)(*plVar8 + 0x288))(plVar8,&local_360);
      FUN_00416dc0(&local_358,local_360,1,0x10);
      FUN_00416910(local_1bb,local_358,0xff);
      FUN_004169a0(&local_368,local_1bb);
      plVar8 = (longlong *)FUN_004aeac0(local_40[1],local_84);
      sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      local_a4 = FUN_019a2670(auStack_3d8,local_368,sVar3 == 0x96);
      if (local_7c < local_a4) {
        local_7c = local_a4;
      }
      local_84 = local_84 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  local_80 = 0;
  iVar9 = *(int *)(local_40[3] + 0x10);
  local_84 = 0;
  if (-1 < iVar9 + -1) {
    do {
      plVar8 = (longlong *)FUN_004aeac0(local_40[3],local_84);
      (**(code **)(*plVar8 + 0x288))(plVar8,&local_378);
      FUN_00416dc0(&local_370,local_378,1,0x10);
      FUN_00416910(local_1bb,local_370,0xff);
      FUN_004169a0(&local_380,local_1bb);
      plVar8 = (longlong *)FUN_004aeac0(local_40[3],local_84);
      sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      local_a4 = FUN_019a2670(auStack_3d8,local_380,sVar3 == 0x96);
      if (local_80 < local_a4) {
        local_80 = local_a4;
      }
      local_84 = local_84 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (local_7c < local_80) {
    local_7c = local_80;
  }
  local_80 = local_7c;
  local_68 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  local_388 = FUN_019a2640(auStack_3d8,param_2);
  uVar5 = FUN_00b95a90(&local_388);
  local_2dc = (*(int *)(local_40[1] + 0x10) + 1) * 0x10;
  local_2e0 = local_2dc;
  if (local_2dc < 0x10) {
    local_2e0 = 0x10;
  }
  local_2e4 = (*(int *)(local_40[3] + 0x10) + 1) * 0x10;
  local_2e8 = local_2e4;
  if (local_2e4 < local_2e0) {
    local_2e8 = local_2e0;
  }
  local_70._0_2_ = (short)uVar5;
  iVar9 = ((int)(short)local_70 / 8 + 1) * 8 + ((local_78 + local_74) / 8 + 1) * 8;
  if ((iVar9 / 0x10 + 1) * 0x10 < local_2e8) {
    local_2ec = local_2e8;
  }
  else {
    local_2ec = (iVar9 / 0x10 + 1) * 0x10;
  }
  local_9c = local_2ec;
  local_2f0 = (*(int *)(local_40[0] + 0x10) + 1) * 0x10;
  local_2f4 = local_2f0;
  if (local_2f0 < 0x10) {
    local_2f4 = 0x10;
  }
  local_2f8 = (*(int *)(local_40[2] + 0x10) + 1) * 0x10;
  local_2fc = local_2f8;
  if (local_2f8 < local_2f4) {
    local_2fc = local_2f4;
  }
  local_70._2_2_ = (short)((uint)uVar5 >> 0x10);
  local_a8 = ((int)local_70._2_2_ / 8 + 1) * 8 + ((local_7c + local_80) / 8 + 1) * 8;
  if ((local_a8 / 0x10 + 1) * 0x10 < local_2fc) {
    local_300 = local_2fc;
  }
  else {
    local_300 = (local_a8 / 0x10 + 1) * 0x10;
  }
  local_a0 = local_300;
  sVar4 = (short)(local_2ec / 2);
  sVar3 = sVar4 + 8;
  if (0 < *(int *)(local_40[2] + 0x10)) {
    sVar3 = sVar4 + 0x10;
  }
  sVar2 = (short)(local_300 / 2);
  sVar4 = sVar2 + 8;
  if (0 < *(int *)(local_40[1] + 0x10)) {
    sVar4 = sVar2 + 0x10;
  }
  local_6c = CONCAT22(sVar4,sVar3);
  *(undefined4 *)(local_68 + 0x24) = local_6c;
  local_70 = uVar5;
  uVar5 = FUN_00b92120(0,0);
  *(undefined4 *)(local_68 + 0x28) = uVar5;
  uVar7 = FUN_00b95b20(-(local_9c / 2),-(local_a0 / 2),(longlong)local_9c / 2 & 0xffffffff,
                       (longlong)local_a0 / 2 & 0xffffffff);
  *(undefined8 *)(local_68 + 0x14) = uVar7;
  *(undefined8 *)(local_68 + 0xc) = *(undefined8 *)(local_68 + 0x14);
  if (0 < *(int *)(local_40[2] + 0x10)) {
    *(short *)(local_68 + 0xc) = *(short *)(local_68 + 0xc) + -8;
  }
  if (0 < *(int *)(local_40[1] + 0x10)) {
    *(short *)(local_68 + 0xe) = *(short *)(local_68 + 0xe) + -8;
  }
  if (0 < *(int *)(local_40[0] + 0x10)) {
    *(short *)(local_68 + 0x10) = *(short *)(local_68 + 0x10) + 8;
  }
  if (0 < *(int *)(local_40[3] + 0x10)) {
    *(short *)(local_68 + 0x12) = *(short *)(local_68 + 0x12) + 8;
  }
  uVar5 = FUN_00b92120(*(short *)(local_68 + 0x14) + 4,*(short *)(local_68 + 0x16) + -0xf);
  *(undefined4 *)(local_68 + 0x2c) = uVar5;
  local_b0 = (undefined4 *)FUN_004095c0(0x1f);
  *local_b0 = 0x66;
  local_b0[1] = 0x105;
  local_b0[2] = 0x13;
  local_2d0 = local_b0 + 3;
  *(undefined1 *)local_2d0 = 0;
  *(undefined8 *)((longlong)local_b0 + 0xd) = *(undefined8 *)(local_68 + 0x14);
  uVar5 = FUN_019a21a0(auStack_3d8,L"COL_Object",0x800000);
  *(undefined4 *)((longlong)local_2d0 + 9) = uVar5;
  uVar5 = FUN_019a21a0(auStack_3d8,L"COL_Fill",0xffff);
  *(undefined4 *)((longlong)local_2d0 + 0xd) = uVar5;
  *(undefined2 *)((longlong)local_2d0 + 0x11) = 2;
  FUN_004ae7e0(*(undefined8 *)(local_68 + 0x38),local_b0);
  local_304 = 0;
  if (param_2 != 0) {
    local_304 = *(int *)(param_2 + -4);
  }
  local_308 = 0;
  if (PTR_u_Arial_01fbee20 != (undefined *)0x0) {
    local_308 = *(int *)(PTR_u_Arial_01fbee20 + -4);
  }
  local_b0 = (undefined4 *)FUN_004095c0((longlong)(local_304 + local_308 + 0x22));
  *local_b0 = 0x67;
  local_b0[1] = 0x105;
  local_30c = 0;
  if (param_2 != 0) {
    local_30c = *(int *)(param_2 + -4);
  }
  local_310 = 0;
  if (PTR_u_Arial_01fbee20 != (undefined *)0x0) {
    local_310 = *(int *)(PTR_u_Arial_01fbee20 + -4);
  }
  local_b0[2] = local_30c + local_310 + 0x16;
  local_b8 = (short *)(local_b0 + 3);
  FUN_00416910(local_2bb,param_2,0xff);
  FUN_00409a70(local_2bb,local_b8,local_2bb[0] + 1);
  FUN_00b909d0(&local_b8,local_2bb[0] + 1);
  *(undefined1 *)local_b8 = 0;
  FUN_00b909d0(&local_b8,1);
  FUN_00416910(local_2bb,PTR_u_Arial_01fbee20,0xff);
  FUN_00409a70(local_2bb,local_b8,local_2bb[0] + 1);
  FUN_00b909d0(&local_b8,local_2bb[0] + 1);
  *(undefined1 *)local_b8 = 0;
  FUN_00b909d0(&local_b8,1);
  local_2d8 = local_b8;
  *local_b8 = -((short)local_70 / 2);
  local_b8[1] = -(local_70._2_2_ / 2);
  local_b8[2] = 0x3333;
  local_b8[3] = 0x3333;
  local_b8[4] = 0x3333;
  local_b8[5] = 0x3ff3;
  *(undefined1 *)(local_b8 + 6) = 0;
  *(undefined1 *)((longlong)local_b8 + 0xd) = 0;
  uVar5 = FUN_019a21a0(auStack_3d8,L"COL_Caption",0x800000);
  *(undefined4 *)(local_2d8 + 7) = uVar5;
  FUN_004ae7e0(*(undefined8 *)(local_68 + 0x38),local_b0);
  local_41 = '\0';
  local_42 = 0;
  local_50 = local_40;
  do {
    iVar9 = *(int *)(*local_50 + 0x10);
    local_88 = iVar9;
    if (iVar9 != 0) {
      if (local_42 < 8) {
        local_ba = ((int)CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1) << (local_42 & 0x1f) & 5U) !=
                   0;
      }
      else {
        local_ba = false;
      }
      if ((bool)local_ba == false) {
        uVar1 = (longlong)local_9c / (longlong)(iVar9 + 1);
        local_90 = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) / 8) *
                   8;
        local_8c = ((local_9c - local_90 * (iVar9 + -1)) / 0x10) * 8;
        if (local_42 == 1) {
          sVar3 = *(short *)(local_68 + 0xe);
          local_bb = 1;
        }
        else {
          sVar3 = *(short *)(local_68 + 0x12);
          local_bb = 3;
        }
        local_98 = (int)sVar3;
        local_94 = *(short *)(local_68 + 0x14) + local_8c;
        local_84 = 0;
        if (-1 < iVar9 + -1) {
          do {
            plVar8 = (longlong *)FUN_004aeac0(*local_50,local_84);
            (**(code **)(*plVar8 + 0x288))(plVar8,&local_398);
            plVar8 = (longlong *)FUN_004aeac0(*local_50,local_84);
            sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            local_3b8 = local_98;
            local_3b0 = local_bb;
            local_3a8 = sVar3 == 0x96;
            FUN_019a23a0(auStack_3d8,local_68,local_398,local_94);
            local_94 = local_94 + local_90;
            local_84 = local_84 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        uVar1 = (longlong)local_a0 / (longlong)(iVar9 + 1);
        local_90 = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) / 8) *
                   8;
        local_8c = ((local_a0 - local_90 * (iVar9 + -1)) / 0x10) * 8;
        if (local_42 == 2) {
          sVar3 = *(short *)(local_68 + 0xc);
          local_bb = 0;
        }
        else {
          sVar3 = *(short *)(local_68 + 0x10);
          local_bb = 2;
        }
        local_94 = (int)sVar3;
        local_98 = *(short *)(local_68 + 0x16) + local_8c;
        local_84 = 0;
        if (-1 < iVar9 + -1) {
          do {
            plVar8 = (longlong *)FUN_004aeac0(*local_50,local_84);
            (**(code **)(*plVar8 + 0x288))(plVar8,&local_390);
            plVar8 = (longlong *)FUN_004aeac0(*local_50,local_84);
            sVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            local_3b8 = local_98;
            local_3b0 = local_bb;
            local_3a8 = sVar3 == 0x96;
            FUN_019a23a0(auStack_3d8,local_68,local_390,local_94);
            local_98 = local_98 + local_90;
            local_84 = local_84 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
    }
    local_42 = local_42 + 1;
    local_50 = local_50 + 1;
  } while (local_42 != 4);
  if (local_41 != '\0') {
    FUN_004af4a0(*(undefined8 *)(local_68 + 0x30),FUN_019a1f60);
  }
  *(undefined4 *)(local_68 + 8) = 0;
  local_58 = FUN_00c3d400(&LAB_00c3a6d0,1);
  FUN_00c3f030(local_58,local_68);
  FUN_00414ad0(local_58 + 0x10,param_2);
  *(undefined1 *)(local_58 + 0xd) = 1;
  local_42 = '\0';
  local_50 = local_40;
  do {
    FUN_00410f20(*local_50);
    local_42 = local_42 + '\x01';
    local_50 = local_50 + 1;
  } while (local_42 != '\x04');
  local_60 = local_58;
  FUN_00414560(&local_398,2);
  FUN_00414560(&local_380,0xc);
  return local_60;
}

