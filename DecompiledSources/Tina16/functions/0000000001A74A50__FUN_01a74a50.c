/* Ghidra address: 01a74a50 */
/* Ghidra symbol: FUN_01a74a50 */


void FUN_01a74a50(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 extraout_var;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_408 [32];
  wchar_t *local_3e8;
  undefined *local_3e0;
  undefined8 local_3d8;
  undefined *local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0 [16];
  undefined8 local_3b0;
  undefined1 *local_3a8;
  wchar_t *local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  longlong local_358;
  wchar_t *local_350;
  undefined8 local_348;
  undefined8 local_340;
  longlong local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined1 *local_310;
  wchar_t *local_308;
  longlong local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  wchar_t *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  undefined1 local_290 [256];
  undefined8 local_190;
  wchar_t *local_188;
  longlong local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 *local_160;
  int local_154;
  longlong local_150;
  int local_148;
  undefined4 local_144;
  longlong local_140;
  int local_134;
  longlong local_130;
  int local_124;
  longlong local_120;
  int local_114;
  longlong local_110;
  int local_108;
  undefined4 local_104;
  longlong local_100;
  int local_f4;
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  int local_80;
  uint local_7c [15];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_160 = auStack_408;
  local_3b0 = 0;
  local_3a0 = (wchar_t *)0x0;
  local_3a8 = (undefined *)0x0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = 0;
  local_358 = 0;
  local_350 = (wchar_t *)0x0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330 = 0;
  local_320 = 0;
  local_328 = 0;
  local_318 = 0;
  local_308 = (wchar_t *)0x0;
  local_310 = (undefined *)0x0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2c0 = 0;
  local_2b8 = (wchar_t *)0x0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_188 = (wchar_t *)0x0;
  local_190 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = (undefined *)0x0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_28 = 0;
  local_20 = 0;
  local_38 = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0x788) != 0) {
    local_160 = auStack_408;
    FUN_0064e140(param_1,0xffeb);
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  puVar2 = auStack_408;
  if (*(longlong *)(param_1 + 0x798) == 0) goto LAB_01a770ea;
  uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),1);
  FUN_0043f750(&local_170,param_4);
  FUN_0043f750(&local_178,param_5);
  local_3e8 = L"  Y:";
  local_3e0 = local_178;
  FUN_00416cd0(&local_168,4,&DAT_01a771e0,local_170);
  FUN_006d85c0(uVar7,local_168);
  uVar8 = (ulonglong)*(byte *)(param_1 + 0x7a8);
  puVar2 = local_160;
  if (uVar8 < 0xb) {
    if (uVar8 == 10) {
      FUN_0064e140(param_1,10);
      local_3e8._0_4_ = *(undefined4 *)(param_1 + 0x774);
      FUN_01a8de70(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x768),
                   *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770));
      *(uint *)(param_1 + 0x770) = param_4;
      *(int *)(param_1 + 0x774) = param_5;
      local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5);
      FUN_01a8de70(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x768),
                   *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770));
      puVar2 = local_160;
      goto LAB_01a770ea;
    }
    if (5 < uVar8) {
      if (uVar8 == 6) {
        FUN_0064e140(param_1,5);
        iVar6 = *(int *)(param_1 + 0x1018);
        iVar1 = *(int *)(param_1 + 0x101c);
        local_3e8 = (wchar_t *)((ulonglong)local_3e8 & 0xffffffff00000000);
        FUN_00498350(local_3c0,0,0,0);
        local_3e0 = local_3c0;
        local_3e8._0_4_ = iVar1 + *(int *)(param_1 + 0x1010);
        FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar6,iVar1,iVar6 + *(int *)(param_1 + 0x1014)
                    );
        *(uint *)(param_1 + 0x1018) = param_4;
        *(int *)(param_1 + 0x101c) = param_5;
        iVar6 = *(int *)(param_1 + 0x1018);
        local_3e8._0_4_ = 0;
        FUN_00498350(local_3c0,0,0,0);
        local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5 + *(int *)(param_1 + 0x1010));
        local_3e0 = local_3c0;
        FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar6,param_5,
                     iVar6 + *(int *)(param_1 + 0x1014));
        puVar2 = local_160;
      }
      else if (uVar8 == 7) {
        FUN_0064e140(param_1,0xb);
        puVar2 = local_160;
      }
      else if (uVar8 == 8) {
        FUN_0064e140(param_1,0xb);
        local_c0 = *(longlong **)(param_1 + 0xfe8);
        (**(code **)(*local_c0 + 0x78))(local_c0,*(undefined8 *)(param_1 + 0x780));
        lVar11 = FUN_00498310(param_4,param_5);
        local_c0[0xe] = lVar11;
        (**(code **)(*local_c0 + 0x78))(local_c0,*(undefined8 *)(param_1 + 0x780));
        puVar2 = local_160;
      }
      else if (uVar8 == 9) {
        FUN_0064e140(param_1,10);
        puVar2 = local_160;
      }
      goto LAB_01a770ea;
    }
    if (uVar8 == 5) {
      FUN_0064e140(param_1,0xfff2);
      FUN_01ad3f00(*(undefined8 *)(param_1 + 0x798),param_4,param_5,param_1 + 0x778);
      FUN_01a65f30(*(undefined8 *)PTR_DAT_02001450);
      puVar2 = local_160;
      goto LAB_01a770ea;
    }
    if (2 < uVar8) {
      if (uVar8 == 3) {
        cVar3 = FUN_01ace900(*(undefined8 *)(param_1 + 0x798),param_4,param_5);
        if (cVar3 == '\0') {
          FUN_0064e140(param_1,0);
          puVar2 = local_160;
        }
        else {
          FUN_0064e140(param_1,0xfffd);
          puVar2 = local_160;
        }
      }
      else if (uVar8 == 4) {
        FUN_0064e140(param_1,0xfff2);
        FUN_01ad3cf0(*(undefined8 *)(param_1 + 0x798),param_4,param_5,param_1 + 0x778);
        puVar2 = local_160;
      }
      goto LAB_01a770ea;
    }
    if (uVar8 == 2) {
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x150))
                        (*(longlong **)(param_1 + 0x1008),param_4,param_5);
      if (cVar3 == '\0') {
        FUN_0064e140(param_1,0);
      }
      else {
        FUN_0064e140(param_1,8);
      }
      local_80 = param_5;
      local_7c[0] = param_4;
      FUN_01ce2130(*(undefined8 *)(param_1 + 0x1008),local_7c,&local_80);
      local_3e0 = *(undefined **)(param_1 + 0x780);
      local_3e8._0_4_ = *(undefined4 *)(param_1 + 0x774);
      (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x140))
                (*(longlong **)(param_1 + 0x1008),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770));
      *(uint *)(param_1 + 0x770) = local_7c[0];
      *(int *)(param_1 + 0x774) = local_80;
      local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,local_80);
      local_3e0 = *(undefined **)(param_1 + 0x780);
      (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x140))
                (*(longlong **)(param_1 + 0x1008),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770));
      puVar2 = local_160;
      goto LAB_01a770ea;
    }
    if (uVar8 != 0) {
      if (uVar8 == 1) {
        FUN_0064e140(param_1,8);
        puVar2 = local_160;
      }
      goto LAB_01a770ea;
    }
LAB_01a74e97:
    cVar3 = FUN_01ace170(*(undefined8 *)(param_1 + 0x798),param_4,param_5);
    if (cVar3 == '\0') {
      FUN_0064e140(param_1,0);
    }
    else {
      FUN_0064e140(param_1,0xfffd);
    }
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if (cVar3 == '\b') {
      uVar7 = FUN_004aeac0(local_40,0);
      cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01a5c280);
      if (cVar3 == '\0') {
        uVar7 = FUN_004aeac0(local_40,0);
        cVar3 = FUN_004113d0(uVar7,&PTR_FUN_010eecc0);
        if (cVar3 == '\0') {
          uVar7 = FUN_004aeac0(local_40,0);
          cVar3 = FUN_004113d0(uVar7,&LAB_00f12330);
          if (cVar3 != '\0') {
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_00414b50(&local_a8,*(undefined8 *)(lVar11 + 0xe8));
            lVar11 = FUN_004aeac0(local_40,0);
            lVar9 = FUN_004aeac0(local_40,0);
            uVar5 = FUN_00f060d0(*(undefined8 *)(lVar9 + 0xb8));
            local_3e8._0_4_ = 2;
            local_3e0._0_4_ = uVar5;
            FUN_00f05e70(&local_188,*(undefined8 *)(lVar11 + 0xb8),0x3ff0000000000000,1);
            lVar11 = FUN_004aeac0(local_40,0);
            lVar9 = FUN_004aeac0(local_40,0);
            uVar5 = FUN_00f060d0(*(undefined8 *)(lVar9 + 0xc0));
            local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,2);
            local_3e0 = (undefined *)CONCAT44(local_3e0._4_4_,uVar5);
            FUN_00f05e70(&local_190,*(undefined8 *)(lVar11 + 0xc0),0x3ff0000000000000,1);
            local_3e8 = local_188;
            local_3e0 = &DAT_01a77220;
            local_3d8 = local_190;
            local_3d0 = &DAT_01a77230;
            FUN_00416cd0(&local_a8,6,local_a8,&DAT_01a7720c);
            uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
            FUN_006d85c0(uVar7,local_a8);
          }
        }
        else {
          uVar7 = FUN_004aeac0(local_40,0);
          bVar4 = FUN_010ef5e0(uVar7,param_4,param_5);
          if (bVar4 < 6) {
            if ((bVar4 == 5) || (bVar4 == 1)) {
              FUN_0064e140(param_1,0x1e);
            }
            else {
              if (bVar4 == 2) goto LAB_01a75058;
              if (bVar4 == 3) goto LAB_01a7506d;
              if (bVar4 == 4) goto LAB_01a75082;
            }
          }
          else if (bVar4 == 6) {
LAB_01a75058:
            FUN_0064e140(param_1,0xfff9);
          }
          else if (bVar4 == 7) {
LAB_01a7506d:
            FUN_0064e140(param_1,0x1e);
          }
          else if (bVar4 == 8) {
LAB_01a75082:
            FUN_0064e140(param_1,0xfff7);
          }
        }
      }
      else {
        uVar7 = FUN_004aeac0(local_40,0);
        local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5);
        FUN_01a5e7d0(uVar7,&local_180,*(undefined8 *)(*(longlong *)(param_1 + 0x798) + 0x80),param_4
                    );
        if (local_180 != 0) {
          FUN_0064e140(param_1,0xffeb);
        }
      }
      FUN_00410f20(local_40);
    }
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if ((cVar3 == '\x02') ||
       (cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40),
       cVar3 == '\x03')) {
      uVar7 = FUN_004aeac0(local_40,0);
      cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01ab0e08);
      if (cVar3 == '\0') {
        uVar7 = FUN_004aeac0(local_40,0);
        cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01aae560);
        if (cVar3 == '\0') {
          uVar7 = FUN_004aeac0(local_40,0);
          cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01aaff18);
          if (cVar3 == '\0') {
            FUN_00414480(&local_a8);
          }
          else {
            uVar7 = FUN_004aeac0(local_40,0);
            FUN_01ab6de0(uVar7,&local_318);
            FUN_00416ad0(&local_a8,local_318);
          }
        }
        else {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_a8,0x823);
          uVar7 = FUN_004aeac0(local_40,0);
          FUN_01ab2940(uVar7,&local_2a0);
          local_e0 = local_2a0;
          local_e4 = 0;
          if (local_2a0 != 0) {
            local_e4 = *(int *)(local_2a0 + -4);
          }
          if (local_e4 < 1) {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_2b0,0x824);
            FUN_00416ad0(&local_a8,local_2b0);
          }
          else {
            uVar7 = FUN_004aeac0(local_40,0);
            FUN_01ab2940(uVar7,&local_2a8);
            FUN_00416ad0(&local_a8,local_2a8);
          }
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_2b8,0x828);
          local_3e8 = local_2b8;
          FUN_00416cd0(&local_a8,3,local_a8,&DAT_01a77244);
          lVar11 = FUN_004aeac0(local_40,0);
          FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_2c0,*(undefined8 *)PTR_DAT_02001f18);
          local_f0 = local_2c0;
          local_f4 = 0;
          if (local_2c0 != 0) {
            local_f4 = *(int *)(local_2c0 + -4);
          }
          if (local_f4 < 1) {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_2f8,0x824);
            FUN_00416ad0(&local_a8,local_2f8);
          }
          else {
            local_20 = 0;
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_2d0,*(undefined8 *)PTR_DAT_02001f18);
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_2d8,*(undefined8 *)PTR_DAT_02001f18);
            iVar6 = FUN_004170c0(&LAB_01a77258,local_2d8,1);
            FUN_00416dc0(&local_2c8,local_2d0,1,iVar6 + -1);
            FUN_00416ba0(&local_20,local_a8,local_2c8);
            local_28 = 0;
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_28,*(undefined8 *)PTR_DAT_02001f18);
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_2e0,*(undefined8 *)PTR_DAT_02001f18);
            local_108 = FUN_004170c0(&LAB_01a77258,local_2e0,1);
            local_108 = local_108 + 1;
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_2e8,*(undefined8 *)PTR_DAT_02001f18);
            local_100 = local_2e8;
            local_104 = 0;
            if (local_2e8 != 0) {
              local_104 = *(undefined4 *)(local_2e8 + -4);
            }
            FUN_00416dc0(&local_2f0,local_28,local_108,local_104);
            FUN_00416ba0(&local_a8,local_20,local_2f0);
            FUN_00414480(&local_20);
            FUN_00414480(&local_28);
          }
          lVar11 = FUN_004aeac0(local_40,0);
          FUN_01cc1600(*(undefined8 *)(lVar11 + 0xe0),&local_300);
          local_110 = local_300;
          local_114 = 0;
          if (local_300 != 0) {
            local_114 = *(int *)(local_300 + -4);
          }
          if (0 < local_114) {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_308,0x829);
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1600(*(undefined8 *)(lVar11 + 0xe0),&local_310);
            local_3e8 = local_308;
            local_3e0 = local_310;
            FUN_00416cd0(&local_a8,4,local_a8,&DAT_01a77244);
          }
          uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
          FUN_006d85c0(uVar7,local_a8);
        }
      }
      else {
        plVar10 = (longlong *)FUN_004aeac0(local_40,0);
        local_3e8 = (wchar_t *)&local_90;
        (**(code **)(*plVar10 + 0xf8))(plVar10,param_4,param_5,&local_88);
        lVar11 = FUN_0040c770(local_88);
        local_88 = (double)lVar11;
        FUN_0040fb60(local_290,local_88,1,0);
        FUN_004169a0(&local_98,local_290);
        uVar7 = FUN_004aeac0(local_40,0);
        local_b0 = FUN_004113f0(uVar7,&PTR_FUN_01ab0e08);
        (**(code **)(**(longlong **)(local_b0 + 0x80) + 0x10))
                  (*(longlong **)(local_b0 + 0x80),*(undefined8 *)(local_b0 + 0x98),1);
        DAT_02110848 = *(undefined8 *)(local_b0 + 0x98);
        local_90 = (**(code **)(**(longlong **)(local_b0 + 0x80) + 0x48))
                             (*(longlong **)(local_b0 + 0x80),local_88);
        FUN_00f05860(&local_a0,local_90,2,0xffffff9c);
        uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
        uVar12 = FUN_00b89270();
        FUN_00b8e520(uVar12,&local_298,0x827);
        FUN_00416ad0(&local_298,local_a0);
        FUN_006d85c0(uVar7,local_298);
      }
    }
    else {
      uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
      FUN_006d85c0(uVar7,0);
    }
    uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
    FUN_006d85c0(uVar7,local_a8);
    FUN_00410f20(local_40);
    uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
    lVar11 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
    FUN_01ae5ed0(*(undefined8 *)(param_1 + 0x798),&local_328);
    FUN_00416ba0(&local_320,*(undefined8 *)(lVar11 + 0x18),local_328);
    FUN_006d85c0(uVar7,local_320);
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  if (0x10 < uVar8) {
    if (uVar8 - 0x11 < 2) {
      FUN_0064e140(param_1,0xfff4);
      cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1000) + 0x58))
                        (*(longlong **)(param_1 + 0x1000));
      if (cVar3 != '\0') {
        plVar10 = *(longlong **)(param_1 + 0x1000);
        *(undefined1 *)((longlong)plVar10 + 0x11) = 0;
        local_3c8 = FUN_00498310(*(undefined4 *)(param_1 + 0x1020),*(undefined4 *)(param_1 + 0x1024)
                                );
        (**(code **)(*plVar10 + 0xd8))(plVar10,param_1,&local_3c8,*(undefined8 *)(param_1 + 0x780));
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      if ((*(char *)(param_1 + 0x7a8) == '\x12') &&
         ((uVar13 = param_4 - *(int *)(param_1 + 0x768), uVar14 = (int)uVar13 >> 0x1f,
          0 < (int)((uVar13 ^ uVar14) - uVar14) ||
          (uVar13 = param_5 - *(int *)(param_1 + 0x76c), uVar14 = (int)uVar13 >> 0x1f,
          0 < (int)((uVar13 ^ uVar14) - uVar14))))) {
        (**(code **)(**(longlong **)(param_1 + 0x1000) + 0x78))
                  (*(longlong **)(param_1 + 0x1000),*(undefined8 *)(param_1 + 0x780));
      }
      (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xa8))
                (*(longlong **)(param_1 + 0x1000),param_4 - *(int *)(param_1 + 0x768),
                 param_5 - *(int *)(param_1 + 0x76c));
      (**(code **)(**(longlong **)(param_1 + 0x1000) + 0xe8))(*(longlong **)(param_1 + 0x1000));
      *(uint *)(param_1 + 0x1018) =
           (*(int *)(param_1 + 0x1018) + param_4) - *(int *)(param_1 + 0x768);
      *(int *)(param_1 + 0x101c) =
           (*(int *)(param_1 + 0x101c) + param_5) - *(int *)(param_1 + 0x76c);
      uVar13 = param_4 - *(int *)(param_1 + 0x768);
      uVar14 = (int)uVar13 >> 0x1f;
      if ((0 < (int)((uVar13 ^ uVar14) - uVar14)) ||
         (uVar13 = param_5 - *(int *)(param_1 + 0x76c), uVar14 = (int)uVar13 >> 0x1f,
         0 < (int)((uVar13 ^ uVar14) - uVar14))) {
        (**(code **)(**(longlong **)(param_1 + 0x1000) + 0x78))
                  (*(longlong **)(param_1 + 0x1000),*(undefined8 *)(param_1 + 0x780));
        *(undefined1 *)(param_1 + 0x7a8) = 0x12;
      }
      *(uint *)(param_1 + 0x768) = param_4;
      *(int *)(param_1 + 0x76c) = param_5;
      puVar2 = local_160;
      goto LAB_01a770ea;
    }
    if (uVar8 != 0x14) {
      if (uVar8 != 0x15) {
        if (uVar8 == 0x16) {
          local_c8 = *(longlong *)(param_1 + 0x1000);
          FUN_010ef4e0(local_c8,*(undefined8 *)(param_1 + 0x780));
          FUN_010ef8a0(local_c8,&local_d8);
          bVar4 = *(byte *)(local_c8 + 0x58);
          if (bVar4 < 6) {
            if (bVar4 == 5) {
              local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5);
              FUN_00498350(local_3c0,local_d8,local_d4,param_4);
              FUN_010ef870(local_c8,local_3c0);
            }
            else if (bVar4 == 1) {
              local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,local_cc);
              FUN_00498350(local_3c0,param_4,param_5,local_d0);
              FUN_010ef870(local_c8,local_3c0);
            }
            else if (bVar4 == 2) {
              local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,local_cc);
              FUN_00498350(local_3c0,local_d8,param_5,local_d0);
              FUN_010ef870(local_c8,local_3c0);
            }
            else if (bVar4 == 3) {
              local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,local_cc);
              FUN_00498350(local_3c0,local_d8,param_5,param_4);
              FUN_010ef870(local_c8,local_3c0);
            }
            else if (bVar4 == 4) {
              local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,local_cc);
              FUN_00498350(local_3c0,local_d8,local_d4,param_4);
              FUN_010ef870(local_c8,local_3c0);
            }
          }
          else if (bVar4 == 6) {
            local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5);
            FUN_00498350(local_3c0,local_d8,local_d4,local_d0);
            FUN_010ef870(local_c8,local_3c0);
          }
          else if (bVar4 == 7) {
            local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5);
            FUN_00498350(local_3c0,param_4,local_d4,local_d0);
            FUN_010ef870(local_c8,local_3c0);
          }
          else if (bVar4 == 8) {
            local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,local_cc);
            FUN_00498350(local_3c0,param_4,local_d4,local_d0);
            FUN_010ef870(local_c8,local_3c0);
          }
          FUN_010ef4e0(local_c8,*(undefined8 *)(param_1 + 0x780));
          puVar2 = local_160;
        }
        goto LAB_01a770ea;
      }
      goto LAB_01a74e97;
    }
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if (cVar3 == '\x02') {
LAB_01a75a93:
      FUN_0064e140(param_1,0x11);
    }
    else {
      if (0 < *(int *)(local_40 + 0x10)) {
        uVar7 = FUN_004aeac0(local_40,0);
        cVar3 = FUN_004113d0(uVar7,&LAB_00f12330);
        if (cVar3 != '\0') goto LAB_01a75a93;
      }
      FUN_0064e140(param_1,0x10);
    }
    FUN_00410f20(local_40);
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if (cVar3 == '\x02') {
      uVar7 = FUN_004aeac0(local_40,0);
      cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01ab0e08);
      if (cVar3 == '\0') {
        uVar7 = FUN_004aeac0(local_40,0);
        cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01aae560);
        if (cVar3 == '\0') {
          uVar7 = FUN_004aeac0(local_40,0);
          cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01aaff18);
          if (cVar3 == '\0') {
            uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
            FUN_006d85c0(uVar7,0);
          }
          else {
            uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
            uVar12 = FUN_004aeac0(local_40,0);
            FUN_01ab6de0(uVar12,&local_3b0);
            FUN_006d85c0(uVar7,local_3b0);
          }
        }
        else {
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_a8,0x823);
          uVar7 = FUN_004aeac0(local_40,0);
          FUN_01ab2940(uVar7,&local_338);
          local_120 = local_338;
          local_124 = 0;
          if (local_338 != 0) {
            local_124 = *(int *)(local_338 + -4);
          }
          if (local_124 < 1) {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_348,0x824);
            FUN_00416ad0(&local_a8,local_348);
          }
          else {
            uVar7 = FUN_004aeac0(local_40,0);
            FUN_01ab2940(uVar7,&local_340);
            FUN_00416ad0(&local_a8,local_340);
          }
          uVar7 = FUN_00b89270();
          FUN_00b8e520(uVar7,&local_350,0x828);
          local_3e8 = local_350;
          FUN_00416cd0(&local_a8,3,local_a8,&DAT_01a77244);
          lVar11 = FUN_004aeac0(local_40,0);
          FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_358,*(undefined8 *)PTR_DAT_02001f18);
          local_130 = local_358;
          local_134 = 0;
          if (local_358 != 0) {
            local_134 = *(int *)(local_358 + -4);
          }
          if (local_134 < 1) {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_390,0x824);
            FUN_00416ad0(&local_a8,local_390);
          }
          else {
            local_30 = 0;
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_368,*(undefined8 *)PTR_DAT_02001f18);
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_370,*(undefined8 *)PTR_DAT_02001f18);
            iVar6 = FUN_004170c0(&LAB_01a77258,local_370,1);
            FUN_00416dc0(&local_360,local_368,1,iVar6 + -1);
            FUN_00416ba0(&local_30,local_a8,local_360);
            local_38 = 0;
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_38,*(undefined8 *)PTR_DAT_02001f18);
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_378,*(undefined8 *)PTR_DAT_02001f18);
            local_148 = FUN_004170c0(&LAB_01a77258,local_378,1);
            local_148 = local_148 + 1;
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1400(*(undefined8 *)(lVar11 + 0xe0),&local_380,*(undefined8 *)PTR_DAT_02001f18);
            local_140 = local_380;
            local_144 = 0;
            if (local_380 != 0) {
              local_144 = *(undefined4 *)(local_380 + -4);
            }
            FUN_00416dc0(&local_388,local_38,local_148,local_144);
            FUN_00416ba0(&local_a8,local_30,local_388);
            FUN_00414480(&local_30);
            FUN_00414480(&local_38);
          }
          lVar11 = FUN_004aeac0(local_40,0);
          FUN_01cc1600(*(undefined8 *)(lVar11 + 0xe0),&local_398);
          local_150 = local_398;
          local_154 = 0;
          if (local_398 != 0) {
            local_154 = *(int *)(local_398 + -4);
          }
          if (0 < local_154) {
            uVar7 = FUN_00b89270();
            FUN_00b8e520(uVar7,&local_3a0,0x829);
            lVar11 = FUN_004aeac0(local_40,0);
            FUN_01cc1600(*(undefined8 *)(lVar11 + 0xe0),&local_3a8);
            local_3e8 = local_3a0;
            local_3e0 = local_3a8;
            FUN_00416cd0(&local_a8,4,local_a8,&DAT_01a77244);
          }
          uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
          FUN_006d85c0(uVar7,local_a8);
        }
      }
      else {
        plVar10 = (longlong *)FUN_004aeac0(local_40,0);
        local_3e8 = (wchar_t *)&local_90;
        (**(code **)(*plVar10 + 0xf8))(plVar10,param_4,param_5,&local_88);
        lVar11 = FUN_0040c770(local_88);
        local_88 = (double)lVar11;
        FUN_0040fb60(local_290,local_88,1,0);
        FUN_004169a0(&local_98,local_290);
        uVar7 = FUN_004aeac0(local_40,0);
        local_b8 = FUN_004113f0(uVar7,&PTR_FUN_01ab0e08);
        (**(code **)(**(longlong **)(local_b8 + 0x80) + 0x10))
                  (*(longlong **)(local_b8 + 0x80),*(undefined8 *)(local_b8 + 0x98),1);
        DAT_02110848 = *(undefined8 *)(local_b8 + 0x98);
        local_90 = (**(code **)(**(longlong **)(local_b8 + 0x80) + 0x48))
                             (*(longlong **)(local_b8 + 0x80),local_88);
        FUN_00f05860(&local_a0,local_90,2,0xffffff9c);
        uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
        uVar12 = FUN_00b89270();
        FUN_00b8e520(uVar12,&local_330,0x827);
        FUN_00416ad0(&local_330,local_a0);
        FUN_006d85c0(uVar7,local_330);
      }
    }
    else {
      uVar7 = FUN_006d8710(*(undefined8 *)(*(longlong *)(param_1 + 0xbd8) + 0x490),0);
      FUN_006d85c0(uVar7,0);
    }
    FUN_00410f20(local_40);
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  if (uVar8 == 0x10) {
    FUN_0064e140(param_1,0xfff4);
    iVar6 = *(int *)(param_1 + 0x1018);
    iVar1 = *(int *)(param_1 + 0x101c);
    local_3e8 = (wchar_t *)((ulonglong)local_3e8 & 0xffffffff00000000);
    FUN_00498350(local_3c0,0,0,0);
    local_3e0 = local_3c0;
    local_3e8._0_4_ = iVar1 + *(int *)(param_1 + 0x1010);
    FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar6,iVar1,iVar6 + *(int *)(param_1 + 0x1014));
    *(uint *)(param_1 + 0x1018) = param_4;
    *(int *)(param_1 + 0x101c) = param_5;
    iVar6 = *(int *)(param_1 + 0x1018);
    local_3e8._0_4_ = 0;
    FUN_00498350(local_3c0,0,0,0);
    local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5 + *(int *)(param_1 + 0x1010));
    local_3e0 = local_3c0;
    FUN_01a8dd40(*(undefined8 *)(param_1 + 0x780),iVar6,param_5,iVar6 + *(int *)(param_1 + 0x1014));
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  if (uVar8 == 0xc) {
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if (cVar3 == '\x02') {
      FUN_0064e140(param_1,0xd);
    }
    else {
      FUN_0064e140(param_1,0xc);
    }
    FUN_00410f20(local_40);
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  if (uVar8 == 0xd) {
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if (cVar3 == '\x02') {
      FUN_0064e140(param_1,0xf);
    }
    else {
      FUN_0064e140(param_1,0xe);
    }
    FUN_00410f20(local_40);
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  if (uVar8 != 0xe) {
    if (uVar8 != 0xf) goto LAB_01a770ea;
    local_40 = 0;
    cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
    if (cVar3 == '\x02') {
      plVar10 = (longlong *)FUN_004aeac0(local_40,0);
      local_3c8 = (**(code **)(**(longlong **)(param_1 + 0xff0) + 0xd0))
                            (*(longlong **)(param_1 + 0xff0));
      cVar3 = (**(code **)(*plVar10 + 0x110))(plVar10,&local_3c8);
      if (cVar3 == '\0') goto LAB_01a76f5e;
      FUN_0064e140(param_1,0x11);
    }
    else {
LAB_01a76f5e:
      FUN_0064e140(param_1,0x10);
    }
    local_3e8._0_4_ = *(undefined4 *)(param_1 + 0x774);
    FUN_01a8de70(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770));
    local_3e8._0_4_ = *(undefined4 *)(param_1 + 0x1014);
    local_3e0._0_4_ = *(undefined4 *)(param_1 + 0x1010);
    uVar5 = FUN_01a8e3e0(param_4,param_5,*(undefined4 *)(param_1 + 0x1018),
                         *(undefined4 *)(param_1 + 0x101c));
    *(undefined4 *)(param_1 + 0x768) = uVar5;
    local_3e8._0_4_ = *(undefined4 *)(param_1 + 0x1014);
    local_3e0 = (undefined *)CONCAT44(local_3e0._4_4_,*(undefined4 *)(param_1 + 0x1010));
    FUN_01a8e3e0(param_4,param_5,*(undefined4 *)(param_1 + 0x1018),*(undefined4 *)(param_1 + 0x101c)
                );
    *(undefined4 *)(param_1 + 0x76c) = extraout_var;
    *(uint *)(param_1 + 0x770) = param_4;
    *(int *)(param_1 + 0x774) = param_5;
    local_3e8 = (wchar_t *)CONCAT44(local_3e8._4_4_,param_5);
    FUN_01a8de70(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x768),
                 *(undefined4 *)(param_1 + 0x76c),*(undefined4 *)(param_1 + 0x770));
    FUN_00410f20(local_40);
    puVar2 = local_160;
    goto LAB_01a770ea;
  }
  local_40 = 0;
  cVar3 = FUN_01ace420(*(undefined8 *)(param_1 + 0x798),param_4,param_5,&local_40);
  if (cVar3 == '\b') {
    uVar7 = FUN_004aeac0(local_40,0);
    cVar3 = FUN_004113d0(uVar7,&PTR_FUN_01a5c280);
    if (cVar3 == '\0') goto LAB_01a76eae;
    FUN_0064e140(param_1,0x13);
  }
  else {
LAB_01a76eae:
    FUN_0064e140(param_1,0x12);
  }
  FUN_00410f20(local_40);
  puVar2 = local_160;
LAB_01a770ea:
  local_160 = puVar2;
  FUN_00414560(&local_3b0,0x24);
  FUN_00414560(&local_190,6);
  FUN_00414560(&local_a8,3);
  return;
}

