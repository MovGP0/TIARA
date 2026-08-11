/* Ghidra address: 00c3da20 */
/* Ghidra symbol: FUN_00c3da20 */


longlong FUN_00c3da20(longlong param_1,char param_2,longlong param_3,undefined8 *param_4)

{
  short sVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong local_res8;
  undefined1 auStack_3a8 [32];
  int local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 *local_2e0;
  longlong **local_2d0;
  int local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  short *local_2b8;
  undefined4 *local_2b0;
  byte local_2a3 [256];
  undefined1 local_1a3 [256];
  undefined1 local_a3;
  char local_a2;
  char local_a1;
  short *local_a0;
  undefined4 *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5a;
  undefined4 local_56;
  byte local_51;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_2e0 = auStack_3a8;
  local_378 = 0;
  local_370 = 0;
  local_360 = 0;
  local_358 = 0;
  local_348 = 0;
  local_350 = 0;
  local_340 = 0;
  local_338 = 0;
  local_328 = 0;
  local_330 = 0;
  local_320 = 0;
  local_318 = 0;
  local_308 = 0;
  local_310 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_48 = (longlong *)*param_4;
  local_40 = (longlong *)param_4[1];
  local_38 = (longlong *)param_4[2];
  local_30 = (longlong *)param_4[3];
  local_res8 = param_1;
  puVar3 = auStack_3a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar3 = local_2e0;
  }
  local_2e0 = puVar3;
  FUN_01d33100(local_res8,0);
  *(undefined4 *)(local_res8 + 8) = 3;
  *(undefined1 *)(local_res8 + 0xc) = 1;
  FUN_00414ad0(local_res8 + 0x10,L"New_Device");
  FUN_00414ad0(local_res8 + 0x18,L"Label");
  *(undefined2 *)(local_res8 + 0x28) = 0;
  uVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar7;
  uVar7 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar7;
  local_a1 = '\0';
  local_51 = '\0';
  local_2d0 = &local_48;
  do {
    if ((local_a1 == '\0') && (iVar4 = (**(code **)(**local_2d0 + 0x28))(*local_2d0), iVar4 < 1)) {
      local_a1 = '\0';
    }
    else {
      local_a1 = '\x01';
    }
    local_51 = local_51 + '\x01';
    local_2d0 = local_2d0 + 1;
  } while (local_51 != '\x04');
  local_60 = 0;
  iVar4 = (**(code **)(*local_48 + 0x28))();
  local_70 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_48 + 0x18))(local_48,&local_2f0,local_70);
      FUN_00416dc0(&local_2e8,local_2f0,1,0x10);
      FUN_00416910(local_1a3,local_2e8,0xff);
      FUN_004169a0(&local_2f8,local_1a3);
      iVar5 = FUN_00c3d9f0(auStack_3a8,local_2f8);
      if (local_60 < iVar5) {
        FUN_004169a0(&local_300,local_1a3);
        local_60 = FUN_00c3d9f0(auStack_3a8,local_300);
      }
      local_70 = local_70 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_64 = 0;
  iVar4 = (**(code **)(*local_38 + 0x28))();
  local_70 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_38 + 0x18))(local_38,&local_310,local_70);
      FUN_00416dc0(&local_308,local_310,1,0x10);
      FUN_00416910(local_1a3,local_308,0xff);
      FUN_004169a0(&local_318,local_1a3);
      iVar5 = FUN_00c3d9f0(auStack_3a8,local_318);
      if (local_64 < iVar5) {
        FUN_004169a0(&local_320,local_1a3);
        local_64 = FUN_00c3d9f0(auStack_3a8,local_320);
      }
      local_70 = local_70 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_60 < local_64) {
    local_60 = local_64;
  }
  local_68 = 0;
  local_64 = local_60;
  iVar4 = (**(code **)(*local_40 + 0x28))();
  local_70 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_40 + 0x18))(local_40,&local_330,local_70);
      FUN_00416dc0(&local_328,local_330,1,0x10);
      FUN_00416910(local_1a3,local_328,0xff);
      FUN_004169a0(&local_338,local_1a3);
      iVar5 = FUN_00c3d9f0(auStack_3a8,local_338);
      if (local_68 < iVar5) {
        FUN_004169a0(&local_340,local_1a3);
        local_68 = FUN_00c3d9f0(auStack_3a8,local_340);
      }
      local_70 = local_70 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_6c = 0;
  iVar4 = (**(code **)(*local_30 + 0x28))();
  local_70 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_350,local_70);
      FUN_00416dc0(&local_348,local_350,1,0x10);
      FUN_00416910(local_1a3,local_348,0xff);
      FUN_004169a0(&local_358,local_1a3);
      iVar5 = FUN_00c3d9f0(auStack_3a8,local_358);
      if (local_6c < iVar5) {
        FUN_004169a0(&local_360,local_1a3);
        local_6c = FUN_00c3d9f0(auStack_3a8,local_360);
      }
      local_70 = local_70 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_68 < local_6c) {
    local_68 = local_6c;
  }
  local_6c = local_68;
  local_50 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  local_368 = FUN_00c3d9c0(auStack_3a8,param_3);
  local_5a = FUN_00b95a90(&local_368);
  local_88 = 0x10;
  iVar4 = (**(code **)(*local_40 + 0x28))(local_40);
  local_88 = FUN_00c3be70(local_88,(iVar4 + 1) * 0x10);
  iVar4 = (**(code **)(*local_30 + 0x28))(local_30);
  local_88 = FUN_00c3be70(local_88,(iVar4 + 1) * 0x10);
  local_90 = ((int)(short)local_5a / 8 + 1) * 8 + ((local_64 + local_60) / 8 + 1) * 8;
  local_88 = FUN_00c3be70(local_88,(local_90 / 0x10 + 1) * 0x10);
  local_8c = 0x10;
  iVar4 = (**(code **)(*local_48 + 0x28))(local_48);
  local_8c = FUN_00c3be70(local_8c,(iVar4 + 1) * 0x10);
  iVar4 = (**(code **)(*local_38 + 0x28))(local_38);
  local_8c = FUN_00c3be70(local_8c,(iVar4 + 1) * 0x10);
  local_90 = ((int)local_5a._2_2_ / 8 + 1) * 8 + ((local_68 + local_6c) / 8 + 1) * 8;
  local_8c = FUN_00c3be70(local_8c,(local_90 / 0x10 + 1) * 0x10);
  local_56 = CONCAT22(local_56._2_2_,(short)(local_88 / 2) + 8);
  iVar4 = (**(code **)(*local_38 + 0x28))(local_38,(longlong)local_88 % 2 & 0xffffffff);
  if (0 < iVar4) {
    local_56 = (uint)(ushort)((short)local_56 + 8);
  }
  local_56 = CONCAT22((short)(local_8c / 2) + 8,(short)local_56);
  iVar4 = (**(code **)(*local_40 + 0x28))(local_40,(longlong)local_8c % 2 & 0xffffffff);
  if (0 < iVar4) {
    local_56 = CONCAT22(local_56._2_2_ + 8,(short)local_56);
  }
  *(uint *)(local_50 + 0x24) = local_56;
  uVar6 = FUN_00b959a0(0,0);
  *(undefined4 *)(local_50 + 0x28) = uVar6;
  uVar7 = FUN_00b95b20(-(local_88 / 2),-(local_8c / 2),(longlong)local_88 / 2 & 0xffffffff,
                       (longlong)local_8c / 2 & 0xffffffff);
  *(undefined8 *)(local_50 + 0x14) = uVar7;
  *(undefined8 *)(local_50 + 0xc) = *(undefined8 *)(local_50 + 0x14);
  iVar4 = (**(code **)(*local_38 + 0x28))(local_38);
  if (0 < iVar4) {
    *(short *)(local_50 + 0xc) = *(short *)(local_50 + 0xc) + -8;
  }
  iVar4 = (**(code **)(*local_40 + 0x28))(local_40);
  if (0 < iVar4) {
    *(short *)(local_50 + 0xe) = *(short *)(local_50 + 0xe) + -8;
  }
  iVar4 = (**(code **)(*local_48 + 0x28))(local_48);
  if (0 < iVar4) {
    *(short *)(local_50 + 0x10) = *(short *)(local_50 + 0x10) + 8;
  }
  iVar4 = (**(code **)(*local_30 + 0x28))(local_30);
  if (0 < iVar4) {
    *(short *)(local_50 + 0x12) = *(short *)(local_50 + 0x12) + 8;
  }
  uVar6 = FUN_00b959a0(*(short *)(local_50 + 0x14) + 4,*(short *)(local_50 + 0x16) + -0xf);
  *(undefined4 *)(local_50 + 0x2c) = uVar6;
  local_98 = (undefined4 *)FUN_004095c0(0x1f);
  *local_98 = 0x66;
  local_98[1] = 0x105;
  local_98[2] = 0x13;
  local_2b0 = local_98 + 3;
  *(undefined1 *)local_2b0 = 0;
  *(undefined8 *)((longlong)local_98 + 0xd) = *(undefined8 *)(local_50 + 0x14);
  uVar6 = FUN_00c3d570(auStack_3a8,L"COL_Object",0x800000);
  *(undefined4 *)((longlong)local_2b0 + 9) = uVar6;
  uVar6 = FUN_00c3d570(auStack_3a8,L"COL_Fill",0xffff);
  *(undefined4 *)((longlong)local_2b0 + 0xd) = uVar6;
  *(undefined2 *)((longlong)local_2b0 + 0x11) = 2;
  FUN_004ae7e0(*(undefined8 *)(local_50 + 0x38),local_98);
  local_2bc = 0;
  if (param_3 != 0) {
    local_2bc = *(int *)(param_3 + -4);
  }
  local_2c0 = 0;
  if (PTR_u_Arial_01ea2dc0 != (undefined *)0x0) {
    local_2c0 = *(int *)(PTR_u_Arial_01ea2dc0 + -4);
  }
  local_98 = (undefined4 *)FUN_004095c0((longlong)(local_2bc + local_2c0 + 0x22));
  *local_98 = 0x67;
  local_98[1] = 0x105;
  local_2c4 = 0;
  if (param_3 != 0) {
    local_2c4 = *(int *)(param_3 + -4);
  }
  local_2c8 = 0;
  if (PTR_u_Arial_01ea2dc0 != (undefined *)0x0) {
    local_2c8 = *(int *)(PTR_u_Arial_01ea2dc0 + -4);
  }
  local_98[2] = local_2c4 + local_2c8 + 0x16;
  local_a0 = (short *)(local_98 + 3);
  FUN_00416910(local_2a3,param_3,0xff);
  FUN_00409a70(local_2a3,local_a0,local_2a3[0] + 1);
  FUN_00c3be60(&local_a0,local_2a3[0] + 1);
  *(undefined1 *)local_a0 = 0;
  FUN_00c3be60(&local_a0,1);
  FUN_00416910(local_2a3,PTR_u_Arial_01ea2dc0,0xff);
  FUN_00409a70(local_2a3,local_a0,local_2a3[0] + 1);
  FUN_00c3be60(&local_a0,local_2a3[0] + 1);
  *(undefined1 *)local_a0 = 0;
  FUN_00c3be60(&local_a0,1);
  local_2b8 = local_a0;
  *local_a0 = -((short)local_5a / 2);
  local_a0[1] = -(local_5a._2_2_ / 2);
  local_a0[2] = 0x3333;
  local_a0[3] = 0x3333;
  local_a0[4] = 0x3333;
  local_a0[5] = 0x3ff3;
  *(undefined1 *)(local_a0 + 6) = 0;
  *(undefined1 *)((longlong)local_a0 + 0xd) = 0;
  uVar6 = FUN_00c3d570(auStack_3a8,L"COL_Caption",0x800000);
  *(undefined4 *)(local_2b8 + 7) = uVar6;
  FUN_004ae7e0(*(undefined8 *)(local_50 + 0x38),local_98);
  local_51 = 0;
  local_2d0 = &local_48;
  do {
    uVar7 = (**(code **)(**local_2d0 + 0x28))(*local_2d0);
    iVar4 = (int)uVar7;
    local_74 = iVar4;
    if (iVar4 != 0) {
      if (local_51 < 8) {
        local_a2 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (local_51 & 0x1f) & 5U) != 0;
      }
      else {
        local_a2 = false;
      }
      if ((bool)local_a2 == false) {
        uVar2 = (longlong)local_88 / (longlong)(iVar4 + 1);
        local_7c = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) / 8) *
                   8;
        local_78 = ((local_88 - local_7c * (iVar4 + -1)) / 0x10) * 8;
        if (local_51 == 1) {
          sVar1 = *(short *)(local_50 + 0xe);
          local_a3 = 1;
        }
        else {
          sVar1 = *(short *)(local_50 + 0x12);
          local_a3 = 3;
        }
        local_84 = (int)sVar1;
        local_80 = *(short *)(local_50 + 0x14) + local_78;
        local_70 = 0;
        if (-1 < iVar4 + -1) {
          do {
            (**(code **)(**local_2d0 + 0x18))(*local_2d0,&local_378,local_70);
            local_388 = local_84;
            local_380 = local_a3;
            FUN_00c3d770(auStack_3a8,local_50,local_378,local_80);
            local_80 = local_80 + local_7c;
            local_70 = local_70 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      else {
        uVar2 = (longlong)local_8c / (longlong)(iVar4 + 1);
        local_7c = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff) / 8) *
                   8;
        local_78 = ((local_8c - local_7c * (iVar4 + -1)) / 0x10) * 8;
        if (local_51 == 2) {
          sVar1 = *(short *)(local_50 + 0xc);
          local_a3 = 0;
        }
        else {
          sVar1 = *(short *)(local_50 + 0x10);
          local_a3 = 2;
        }
        local_80 = (int)sVar1;
        local_84 = *(short *)(local_50 + 0x16) + local_78;
        local_70 = 0;
        if (-1 < iVar4 + -1) {
          do {
            (**(code **)(**local_2d0 + 0x18))(*local_2d0,&local_370,local_70);
            local_388 = local_84;
            local_380 = local_a3;
            FUN_00c3d770(auStack_3a8,local_50,local_370,local_80);
            local_84 = local_84 + local_7c;
            local_70 = local_70 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
    }
    local_51 = local_51 + 1;
    local_2d0 = local_2d0 + 1;
  } while (local_51 != 4);
  *(undefined4 *)(local_50 + 8) = 0;
  FUN_00c3f030(local_res8,local_50);
  FUN_00414ad0(local_res8 + 0x10,param_3);
  *(undefined1 *)(local_res8 + 0xd) = 1;
  FUN_00414560(&local_378,2);
  FUN_00414560(&local_360,0x10);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

