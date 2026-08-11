/* Ghidra address: 01a05e40 */
/* Ghidra symbol: FUN_01a05e40 */


void FUN_01a05e40(longlong param_1,int param_2,int param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  bool bVar9;
  undefined1 auStack_388 [32];
  undefined *local_368;
  wchar_t *local_360;
  undefined *local_358;
  undefined *local_350;
  undefined *local_348;
  undefined *local_340;
  undefined8 local_338;
  wchar_t *local_330;
  wchar_t *local_328;
  int local_318;
  int local_314;
  undefined *local_310;
  undefined *local_308;
  undefined *local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 local_278 [256];
  wchar_t *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  wchar_t *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined *local_70;
  undefined *local_68;
  wchar_t *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = auStack_388;
  local_2f8 = 0;
  local_300 = (undefined *)0x0;
  local_308 = (undefined *)0x0;
  local_310 = (undefined *)0x0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_288 = 0;
  local_290 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_298 = 0;
  local_280 = 0;
  local_158 = 0;
  local_160 = (undefined *)0x0;
  local_168 = (undefined *)0x0;
  local_170 = (undefined *)0x0;
  local_178 = (wchar_t *)0x0;
  local_150 = 0;
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = (undefined *)0x0;
  local_110 = (undefined *)0x0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = (wchar_t *)0x0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = (wchar_t *)0x0;
  local_68 = (undefined *)0x0;
  local_70 = (undefined *)0x0;
  local_78 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if ((((sVar3 == 0x3fd) ||
       (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3fc)) ||
      (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58))
      , sVar3 == 0x400)) ||
     (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58)),
     sVar3 == 0x401)) {
    local_80 = FUN_019edff0(param_1,1,2);
  }
  else {
    sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (((sVar3 == 0x3f0) ||
        (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                           (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3f6)) ||
       (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                          (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3f7)) {
      local_80 = FUN_019edff0(param_1,1,3);
    }
    else {
      local_80 = -1;
    }
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if (uVar4 < 0x3fd) {
    if (uVar4 != 0x3fc) {
      if (uVar4 == 0x3ef) goto LAB_01a062a2;
      if (uVar4 != 0x3f0) {
        if (uVar4 == 0x3f6) goto LAB_01a062cc;
        if (uVar4 == 0x3f7) goto LAB_01a062e1;
        goto LAB_01a062f4;
      }
    }
    FUN_00414b50(&local_40,L"SRFF");
  }
  else if (uVar4 == 0x3fd) {
LAB_01a062a2:
    FUN_00414b50(&local_40,L"DLTCH");
  }
  else if (uVar4 == 0x400) {
LAB_01a062cc:
    FUN_00414b50(&local_40,L"JKFF");
  }
  else if (uVar4 == 0x401) {
LAB_01a062e1:
    FUN_00414b50(&local_40,&DAT_01a076f8);
  }
LAB_01a062f4:
  uVar8 = (undefined7)((ulonglong)param_1 >> 8);
  if (local_80 != 3) {
    if (*(byte *)(param_1 + 0xc0) < 8) {
      bVar9 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x1cU) != 0;
    }
    else {
      bVar9 = false;
    }
    if (!bVar9) {
      uVar7 = FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
      FUN_019f2df0(param_1,local_278,uVar7);
      FUN_004169a0(&local_280,local_278);
      local_368 = (undefined *)FUN_01cfd6a0(*(undefined8 *)(param_1 + 0x58));
      local_360 = (wchar_t *)param_5;
      FUN_019f29b0(param_1,&local_48,local_280,0x13);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_298);
      local_368 = (undefined *)CONCAT44(local_368._4_4_,0xb);
      FUN_019ee820(param_1,&local_290,0x13,local_298);
      local_368._0_1_ = 1;
      FUN_01a04e90(param_1,&local_2a0,param_2 + 1,0);
      local_368 = (undefined *)((ulonglong)local_368._1_7_ << 8);
      FUN_01a04e90(param_1,&local_2a8,param_2,0);
      local_368 = (undefined *)local_40;
      local_360 = L"(1) ";
      local_358 = (undefined *)local_2a0;
      local_350 = &DAT_01a07754;
      local_348 = (undefined *)local_2a8;
      FUN_00416cd0(&local_288,7,local_290,&DAT_01a07754);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_288)
      ;
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),L"+      ");
      local_7c = 1;
      local_314 = param_3;
      if (0 < param_3) {
        do {
          iVar5 = *(int *)(param_4 + -4 + (longlong)local_7c * 4);
          if (iVar5 == -3) {
            FUN_0043f750(&local_2b8,*(undefined4 *)(param_1 + 0x50));
            FUN_00416ba0(&local_2b0,&DAT_01a07754,local_2b8);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                      (*(longlong **)(param_1 + 0x20),local_2b0);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          }
          else if (iVar5 == -2) {
            FUN_00414480(&local_38);
            local_88 = *(char *)(param_1 + 0xc0) == '\x04';
            if ((bool)local_88) {
              FUN_00414b50(&local_38,&DAT_01a07798);
            }
            else {
              FUN_00414b50(&local_38,L" $G_DGND");
            }
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                      (*(longlong **)(param_1 + 0x20),local_38);
            FUN_00414480(&local_38);
            *(undefined1 *)(param_1 + 0x89) = 1;
          }
          else if (iVar5 == -1) {
            FUN_00414480(&local_30);
            local_87 = *(char *)(param_1 + 0xc0) == '\x04';
            if ((bool)local_87) {
              FUN_00414b50(&local_30,&DAT_01a07764);
            }
            else {
              FUN_00414b50(&local_30,L" $G_DPWR");
            }
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                      (*(longlong **)(param_1 + 0x20),local_30);
            FUN_00414480(&local_30);
            *(undefined1 *)(param_1 + 0x89) = 1;
          }
          else if ((((local_7c == 3) &&
                    ((sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                        (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3f6 ||
                     (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                        (*(longlong **)(param_1 + 0x58)), sVar3 == 0x400)))) &&
                   (local_80 == 1)) ||
                  (((sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                       (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3f7 ||
                    (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                       (*(longlong **)(param_1 + 0x58)), sVar3 == 0x401)) &&
                   (local_80 == 2)))) {
            FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x50));
            FUN_00416ba0(&local_2c0,&DAT_01a07754,local_58);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                      (*(longlong **)(param_1 + 0x20),local_2c0);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
          }
          else {
            FUN_019f0400(param_1,&local_2d0,*(undefined4 *)(param_4 + -4 + (longlong)local_7c * 4),0
                        );
            FUN_00416ba0(&local_2c8,&DAT_01a07754,local_2d0);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                      (*(longlong **)(param_1 + 0x20),local_2c8);
          }
          local_7c = local_7c + 1;
          local_314 = local_314 + -1;
        } while (local_314 != 0);
      }
      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
      if (((sVar3 == 0x3fd) ||
          (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                             (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3fc)) ||
         ((sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                             (*(longlong **)(param_1 + 0x58)), sVar3 == 0x400 ||
          (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                             (*(longlong **)(param_1 + 0x58)), sVar3 == 0x401)))) {
        uVar6 = FUN_019edff0(param_1,1,1);
        FUN_019f3230(param_1,&local_60,uVar6);
        uVar6 = FUN_019edff0(param_1,4,0);
        FUN_0043f750(&local_2d8,uVar6);
        FUN_00416ba0(&local_68,L"MNTYMXDLY=",local_2d8);
        uVar6 = FUN_019edff0(param_1,2,0);
        FUN_0043f750(&local_2e0,uVar6);
        FUN_00416ba0(&local_70,L"IO_LEVEL=",local_2e0);
      }
      else {
        FUN_019f2e60(param_1,&local_60,1);
        FUN_00414480(&local_68);
        FUN_00414480(&local_70);
      }
      local_368 = &DAT_01a07754;
      local_360 = local_60;
      local_358 = &DAT_01a07754;
      local_350 = local_68;
      local_348 = &DAT_01a07754;
      local_340 = local_70;
      FUN_00416cd0(&local_2e8,8,&LAB_01a07980,local_48);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_2e8)
      ;
      sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
      if ((((sVar3 == 0x3f6) ||
           (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                              (*(longlong **)(param_1 + 0x58)), sVar3 == 0x400)) && (local_80 == 1))
         || (((sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                 (*(longlong **)(param_1 + 0x58)), sVar3 == 0x3f7 ||
              (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))
                                 (*(longlong **)(param_1 + 0x58)), sVar3 == 0x401)) &&
             (local_80 == 2)))) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                  (*(longlong **)(param_1 + 0x58),&local_2f0);
        FUN_00416ad0(&local_2f0,L"_INV");
        local_368 = (undefined *)CONCAT44(local_368._4_4_,0xb);
        FUN_019ee820(param_1,&local_50,0x13,local_2f0);
        local_368._0_1_ = 1;
        FUN_01a04e90(param_1,&local_300,param_2 + 1,0);
        local_368 = (undefined *)((ulonglong)local_368._1_7_ << 8);
        FUN_01a04e90(param_1,&local_308,param_2,0);
        FUN_019f0400(param_1,&local_310,*(undefined4 *)(param_4 + 8),0);
        local_368 = local_300;
        local_360 = L" ";
        local_358 = local_308;
        local_350 = &DAT_01a07754;
        local_348 = local_310;
        local_340 = &DAT_01a07754;
        local_338 = local_58;
        local_330 = L" Locgate ";
        local_328 = local_60;
        FUN_00416cd0(&local_2f8,0xb,local_50,L" INV ");
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_2f8);
      }
      goto code_r0x01a07597;
    }
  }
  cVar1 = *(char *)(param_1 + 0xc0);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x8c) = 1;
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + 0x8d) = 1;
  }
  else if (cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0x8e) = 1;
  }
  else if (cVar1 == '\x04') {
    *(undefined1 *)(param_1 + 0x8f) = 1;
  }
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    FUN_00414b50(&local_78,L"+ VARS: ");
  }
  else {
    FUN_00414b50(&local_78,L"+ PARAMS: ");
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))(*(longlong **)(param_1 + 0x58),&local_a0);
  local_368 = (undefined *)CONCAT44(local_368._4_4_,0xb);
  FUN_019ee820(param_1,&local_98,0x15,local_a0);
  FUN_00416ad0(&local_98,&DAT_01a07754);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_98);
  local_7c = 1;
  local_318 = param_3;
  if (0 < param_3) {
    do {
      iVar5 = *(int *)(param_4 + -4 + (longlong)local_7c * 4);
      if (iVar5 == -3) {
        FUN_0043f750(&local_b0,*(undefined4 *)(param_1 + 0x50));
        FUN_00416ba0(&local_a8,&DAT_01a07754,local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_a8);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      else if (iVar5 == -2) {
        FUN_00414480(&local_28);
        local_86 = *(char *)(param_1 + 0xc0) == '\x04';
        if ((bool)local_86) {
          FUN_00414b50(&local_28,&DAT_01a07798);
        }
        else {
          FUN_00414b50(&local_28,L" $G_DGND");
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_28);
        FUN_00414480(&local_28);
        *(undefined1 *)(param_1 + 0x89) = 1;
      }
      else if (iVar5 == -1) {
        FUN_00414480(&local_20);
        local_85 = *(char *)(param_1 + 0xc0) == '\x04';
        if ((bool)local_85) {
          FUN_00414b50(&local_20,&DAT_01a07764);
        }
        else {
          FUN_00414b50(&local_20,L" $G_DPWR");
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_20);
        FUN_00414480(&local_20);
        *(undefined1 *)(param_1 + 0x89) = 1;
      }
      else {
        if (local_7c == 3) {
          if (*(byte *)(param_1 + 0xc0) < 8) {
            bVar9 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 3U) != 0;
          }
          else {
            bVar9 = false;
          }
          if (bVar9) {
            FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x50));
            FUN_00416ba0(&local_b8,&DAT_01a07754,local_58);
            (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                      (*(longlong **)(param_1 + 0x20),local_b8);
            *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
            goto LAB_01a0670b;
          }
        }
        FUN_019f0400(param_1,&local_c8,*(undefined4 *)(param_4 + -4 + (longlong)local_7c * 4),0);
        FUN_00416ba0(&local_c0,&DAT_01a07754,local_c8);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_c0);
      }
LAB_01a0670b:
      local_7c = local_7c + 1;
      local_318 = local_318 + -1;
    } while (local_318 != 0);
  }
  local_368._0_1_ = 1;
  FUN_01a04e90(param_1,&local_d8,param_2 + 1,0);
  local_368 = (undefined *)((ulonglong)local_368._1_7_ << 8);
  FUN_01a04e90(param_1,&local_e0,param_2,0);
  local_368 = &DAT_01a07754;
  local_360 = local_e0;
  FUN_00416cd0(&local_d0,4,&DAT_01a07754,local_d8);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_d0);
  FUN_00416ba0(&local_e8,&DAT_01a07754,local_40);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_e8);
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar9 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 3U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    FUN_019f2e60(param_1,&local_f8,0);
    FUN_00416ba0(&local_f0,&DAT_01a077cc,local_f8);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_f0);
  }
  else {
    sVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
    if (sVar3 == 0x3ef) {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
    }
    else {
      if (local_80 == 1) {
        FUN_00414b50(&local_50,&DAT_01a077e0);
      }
      else if (local_80 == 2) {
        FUN_00414b50(&local_50,&DAT_01a077f4);
      }
      else if (local_80 == 3) {
        FUN_00414b50(&local_50,&DAT_01a077cc);
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_50);
    }
  }
  iVar5 = FUN_019edff0(param_1,4,0);
  if (iVar5 == 1) {
    FUN_019ed1f0(param_1,&local_108,1,1);
    FUN_019ed1f0(param_1,&local_110,1,2);
    local_368 = local_108;
    local_360 = L" DHL=";
    local_358 = local_110;
    FUN_00416cd0(&local_100,5,local_78,L"DLH=");
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_100);
  }
  else {
    FUN_00416ba0(&local_118,local_78,L"DLH=0 DHL=0");
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_118);
  }
  uVar2 = FUN_019f31f0(param_1);
  FUN_0043f750(&local_128,uVar2);
  FUN_00416ba0(&local_120,L" IOMOD=",local_128);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_120);
  iVar5 = FUN_019edff0(param_1,2,0);
  FUN_0043f750(&local_138,iVar5 + 1);
  FUN_00416ba0(&local_130,L" InMode=",local_138);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_130);
  iVar5 = FUN_019edff0(param_1,3,0);
  FUN_0043f750(&local_148,iVar5 + 1);
  FUN_00416ba0(&local_140,L" OutMode=",local_148);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_140);
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar9 = ((int)CONCAT71(uVar8,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 3U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
              (*(longlong **)(param_1 + 0x58),&local_150);
    FUN_00416ad0(&local_150,L"_INV");
    local_368 = (undefined *)CONCAT44(local_368._4_4_,0xb);
    FUN_019ee820(param_1,&local_50,0x13,local_150);
    local_368._0_1_ = 1;
    FUN_01a04e90(param_1,&local_160,param_2 + 1,0);
    local_368 = (undefined *)((ulonglong)local_368._1_7_ << 8);
    FUN_01a04e90(param_1,&local_168,param_2,0);
    FUN_019f0400(param_1,&local_170,*(undefined4 *)(param_4 + 8),0);
    FUN_019f2e60(param_1,&local_178,1);
    local_368 = local_160;
    local_360 = L" ";
    local_358 = local_168;
    local_350 = &DAT_01a07754;
    local_348 = local_170;
    local_340 = &DAT_01a07754;
    local_338 = local_58;
    local_330 = L" Locgate ";
    local_328 = local_178;
    FUN_00416cd0(&local_158,0xb,local_50,L" INV ");
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_158);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
  }
code_r0x01a07597:
  FUN_00414560(&local_310,0x13);
  FUN_00414560(&local_178,0x1d);
  FUN_00414560(&local_78,0xc);
  return;
}

