/* Ghidra address: 014e5930 */
/* Ghidra symbol: FUN_014e5930 */


void FUN_014e5930(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                 longlong param_5,undefined1 param_6,char param_7)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_608 [32];
  wchar_t *local_5e8;
  longlong *local_5e0;
  longlong local_5d8;
  undefined1 local_5d0;
  undefined1 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined2 local_588 [4];
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined1 local_4e0 [256];
  undefined1 *local_3e0;
  int local_3cc;
  undefined4 local_3c8;
  int local_3c4;
  undefined4 local_3c0;
  char local_3b5;
  int local_3b4;
  int local_3b0;
  undefined4 local_3ac;
  short *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined1 uStack_390;
  undefined8 local_298;
  char acStack_290 [248];
  undefined8 local_198;
  char acStack_190 [248];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_3e0 = auStack_608;
  local_5a8 = 0;
  local_5b0 = 0;
  local_598 = 0;
  local_5a0 = 0;
  local_590 = 0;
  local_580 = 0;
  local_578 = 0;
  local_560 = 0;
  local_568 = 0;
  local_570 = 0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  local_530 = 0;
  local_538 = 0;
  local_540 = 0;
  local_518 = 0;
  local_520 = 0;
  local_528 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4e8 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  puVar1 = auStack_608;
  if (param_3 != (longlong *)0x0) {
    local_60 = param_5;
    local_38 = (longlong *)FUN_01d34560(&PTR_FUN_016a0250,1,5,5);
    local_40 = (longlong *)FUN_01d34560(&PTR_FUN_016a19c8,1,5,5);
    local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_30,1);
    local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar4 = (**(code **)(*param_3 + 0x28))();
    local_3b4 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_50 = (longlong *)(**(code **)(*param_3 + 0x30))(param_3,local_3b4);
        (**(code **)(*param_3 + 0x18))(param_3,&local_70,local_3b4);
        iVar5 = FUN_004170c0(&DAT_014e7510,local_70,1);
        FUN_00416dc0(&local_78,local_70,1,iVar5 + -1);
        FUN_00416910(local_4e0,local_78,0xff);
        local_3ac = FUN_016bc310(local_60,local_4e0,param_2,1);
        if (param_7 == '\0') {
          (**(code **)(*local_50 + 0x208))(local_50,0,local_3ac,0);
          FUN_00416910(local_4e0,local_78,0xff);
          (**(code **)(*local_50 + 0x238))(local_50,0,local_4e0);
          if (*(char *)(local_60 + 0x9aa) != '\0') {
            FUN_00416910(local_4e0,local_78,0xff);
            uVar6 = FUN_014dbb10(local_4e0,param_4);
            (**(code **)(*local_50 + 0x228))(local_50,0,uVar6);
          }
          sVar3 = (**(code **)(*local_50 + 0xf8))(local_50);
          if (sVar3 == 0x40a) {
            (**(code **)(*local_50 + 0x2d0))(local_50,4,&local_3a8);
            FUN_004169a0(&local_78,local_3a8);
            FUN_00416910(local_4e0,local_78,0xff);
            local_3ac = FUN_016bc310(local_60,local_4e0,param_2,0);
            *(undefined2 *)((longlong)local_3a8 + 0x1f) = (undefined2)local_3ac;
            (**(code **)(*local_50 + 0x2d0))(local_50,5,&local_3a8);
            FUN_004169a0(&local_78,local_3a8);
            FUN_00416910(local_4e0,local_78,0xff);
            local_3ac = FUN_016bc310(local_60,local_4e0,param_2,0);
            *(undefined2 *)((longlong)local_3a8 + 0x1f) = (undefined2)local_3ac;
          }
          else {
            (**(code **)(*local_50 + 0x2d0))(local_50,5,&local_3a8);
            FUN_004169a0(&local_78,local_3a8);
            FUN_00416910(local_4e0,local_78,0xff);
            local_3ac = FUN_016bc310(local_60,local_4e0,param_2,0);
            *(undefined2 *)((longlong)local_3a8 + 0x1f) = (undefined2)local_3ac;
            (**(code **)(*local_50 + 0x2d0))(local_50,6,&local_3a8);
            FUN_004169a0(&local_78,local_3a8);
            FUN_00416910(local_4e0,local_78,0xff);
            local_3ac = FUN_016bc310(local_60,local_4e0,param_2,0);
            *(undefined2 *)((longlong)local_3a8 + 0x1f) = (undefined2)local_3ac;
          }
          (**(code **)(*param_1 + 0x20))(param_1,local_50);
        }
        else {
          local_3c4 = FUN_004170c0(&DAT_014e7510,local_70,1);
          local_3c4 = local_3c4 + 1;
          local_3c0 = 0;
          if (local_70 != 0) {
            local_3c0 = *(undefined4 *)(local_70 + -4);
          }
          FUN_00416dc0(&local_90,local_70,local_3c4,local_3c0);
          local_3b0 = FUN_004170c0(&DAT_014e7520,local_90,1);
          if (0 < local_3b0) {
            FUN_00416dc0(&local_90,local_90,1,local_3b0 + -1);
          }
          FUN_01d34a70(local_38);
          FUN_01d34a70(local_40);
          FUN_00416910(local_4e0,local_90,0xff);
          local_58 = FUN_016c4bb0(local_60,local_4e0,*(undefined8 *)(local_60 + 0x9b8));
          if (local_58 == 0) {
            FUN_00416910(local_4e0,local_90,0xff);
            FUN_016a4020(*(undefined8 *)(local_60 + 0x10),0xc,local_4e0,0xffffffff);
          }
          cVar2 = FUN_014db910(&DAT_014e7524,*(undefined8 *)(local_58 + 0x40),&local_68);
          if (cVar2 == '\0') {
            FUN_00414b50(&local_98,&DAT_014e753c);
          }
          else {
            FUN_0043f750(&local_98,*(undefined4 *)(local_68 + 0x28));
          }
          cVar2 = FUN_014db910(&DAT_014e7540,*(undefined8 *)(local_58 + 0x40),&local_68);
          if (cVar2 == '\0') {
            local_398 = 0x5750464947494408;
            uStack_390 = 0x52;
          }
          else {
            FUN_00414ff0(&local_398,*(undefined8 *)(local_68 + 0x28));
          }
          sVar3 = (**(code **)(*local_50 + 0xf8))(local_50);
          if (sVar3 == 0x40b) {
            FUN_00416910(local_4e0,local_78,0xff);
            local_3a0 = FUN_016bc3a0(local_60,local_4e0);
            (**(code **)(*local_38 + 0x50))(local_38,local_3a0);
            (**(code **)(*local_50 + 0x2d0))(local_50,7,&local_3a8);
            uVar7 = FUN_016a4560(&DAT_0169ffe0,1,&DAT_014e7552,(longlong)*local_3a8);
            (**(code **)(*local_38 + 0x50))(local_38,uVar7);
            (**(code **)(*local_50 + 0x2d0))(local_50,5,&local_3a8);
            FUN_004169a0(&local_80,local_3a8);
            FUN_00416910(local_4e0,local_80,0xff);
            FUN_016bc310(local_60,local_4e0,param_2,1);
            FUN_00416910(local_4e0,local_80,0xff);
            local_3a0 = FUN_016bc3a0(local_60,local_4e0);
            (**(code **)(*local_38 + 0x50))(local_38,local_3a0);
            (**(code **)(*local_50 + 0x2d0))(local_50,6,&local_3a8);
            FUN_004169a0(&local_88,local_3a8);
            FUN_00416910(local_4e0,local_88,0xff);
            FUN_016bc310(local_60,local_4e0,param_2,1);
            FUN_00416910(local_4e0,local_88,0xff);
            local_3a0 = FUN_016bc3a0(local_60,local_4e0);
            (**(code **)(*local_38 + 0x50))(local_38,local_3a0);
            FUN_004154b0(&local_4f0,&local_398,0);
            FUN_004155b0(&local_4f0,&DAT_014e756c);
            FUN_00416880(&local_4f8,local_4f0);
            local_5e8 = L";";
            local_5e0 = (longlong *)local_88;
            FUN_00416cd0(&local_4e8,4,local_4f8,local_80);
            FUN_00416910(&local_398,local_4e8,0xff);
            FUN_004169a0(&local_500,&local_398);
            iVar5 = (**(code **)(*local_48 + 0xb0))(local_48,local_500);
            if (iVar5 == -1) {
              FUN_004169a0(&local_508,&local_398);
              (**(code **)(*local_48 + 0x78))(local_48,local_508);
            }
            cVar2 = FUN_014db910(&DAT_014e7580,*(undefined8 *)(local_58 + 0x40),&local_68);
            if (cVar2 != '\0') {
              local_5e8 = (wchar_t *)0x0;
              local_5e0 = *(longlong **)(local_60 + 0x10);
              uVar7 = FUN_016a5390(&PTR_FUN_016a0e58,1,&DAT_014e7585,
                                   *(undefined8 *)(local_68 + 0x28));
              (**(code **)(*local_40 + 0x50))(local_40,uVar7);
            }
            FUN_00416ba0(&local_510,L"ATOD",local_98);
            FUN_00416910(local_4e0,local_510,0xff);
            cVar2 = FUN_014db910(local_4e0,*(undefined8 *)(local_58 + 0x40),&local_68);
            if (cVar2 == '\0') {
              local_198 = 0x666544446f74410b;
              builtin_strncpy(acStack_190,"ault",4);
            }
            else {
              FUN_00414ff0(&local_198,*(undefined8 *)(local_68 + 0x28));
            }
            local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_198,&local_3b0);
            if (local_3b5 == '\0') {
              local_5e8 = (wchar_t *)param_1;
              cVar2 = FUN_00ee3970(*(undefined8 *)(local_60 + 8),3,&local_198,param_2);
              if (cVar2 != '\0') {
                local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_198,&local_3b0);
              }
            }
            if (local_3b5 == '\0') {
              FUN_016a4020(*(undefined8 *)(local_60 + 0x10),0xd,&local_198,0xffffffff);
            }
            FUN_00416ba0(&local_528,local_78,L"_ATOD");
            FUN_014e5820(auStack_608,&local_520,local_528);
            local_5e8 = L"_ATOD";
            local_5e0 = (longlong *)local_520;
            FUN_00416cd0(&local_518,4,&PTR_u_aFloralwhite_014e75c4,local_78);
            FUN_00416910(local_4e0,local_518,0xff);
            local_5e8 = (wchar_t *)local_40;
            local_5d0 = param_6;
            local_5c8 = 1;
            local_5c0 = 0;
            local_5e0 = param_1;
            local_5d8 = param_2;
            FUN_016c7790(local_60,local_4e0,&local_198,local_38);
            FUN_01d34870(local_38,1);
          }
          else {
            (**(code **)(*local_50 + 0x2d0))(local_50,6,&local_3a8);
            uVar7 = FUN_016a4560(&DAT_0169ffe0,1,&DAT_014e7552,(longlong)*local_3a8);
            (**(code **)(*local_38 + 0x50))(local_38,uVar7);
            FUN_00416910(local_4e0,local_78,0xff);
            local_3a0 = FUN_016bc3a0(local_60,local_4e0);
            (**(code **)(*local_38 + 0x50))(local_38,local_3a0);
            (**(code **)(*local_50 + 0x2d0))(local_50,4,&local_3a8);
            FUN_004169a0(&local_80,local_3a8);
            FUN_00416910(local_4e0,local_80,0xff);
            FUN_016bc310(local_60,local_4e0,param_2,1);
            FUN_00416910(local_4e0,local_80,0xff);
            local_3a0 = FUN_016bc3a0(local_60,local_4e0);
            (**(code **)(*local_38 + 0x50))(local_38,local_3a0);
            (**(code **)(*local_50 + 0x2d0))(local_50,5,&local_3a8);
            FUN_004169a0(&local_88,local_3a8);
            FUN_00416910(local_4e0,local_88,0xff);
            FUN_016bc310(local_60,local_4e0,param_2,1);
            FUN_00416910(local_4e0,local_88,0xff);
            local_3a0 = FUN_016bc3a0(local_60,local_4e0);
            (**(code **)(*local_38 + 0x50))(local_38,local_3a0);
            FUN_004154b0(&local_538,&local_398,0);
            FUN_004155b0(&local_538,&DAT_014e756c);
            FUN_00416880(&local_540,local_538);
            local_5e8 = L";";
            local_5e0 = (longlong *)local_88;
            FUN_00416cd0(&local_530,4,local_540,local_80);
            FUN_00416910(&local_398,local_530,0xff);
            FUN_004169a0(&local_548,&local_398);
            iVar5 = (**(code **)(*local_48 + 0xb0))(local_48,local_548);
            if (iVar5 == -1) {
              FUN_004169a0(&local_550,&local_398);
              (**(code **)(*local_48 + 0x78))(local_48,local_550);
            }
            cVar2 = FUN_014db910(&DAT_014e75e4,*(undefined8 *)(local_58 + 0x40),&local_68);
            if (cVar2 != '\0') {
              local_5e8 = (wchar_t *)0x0;
              local_5e0 = *(longlong **)(local_60 + 0x10);
              uVar7 = FUN_016a5390(&PTR_FUN_016a0e58,1,&DAT_014e75e4,
                                   *(undefined8 *)(local_68 + 0x28));
              (**(code **)(*local_40 + 0x50))(local_40,uVar7);
            }
            cVar2 = FUN_014db910(&DAT_014e75e9,*(undefined8 *)(local_58 + 0x40),&local_68);
            if (cVar2 != '\0') {
              local_5e8 = (wchar_t *)0x0;
              local_5e0 = *(longlong **)(local_60 + 0x10);
              uVar7 = FUN_016a5390(&PTR_FUN_016a0e58,1,&DAT_014e75e9,
                                   *(undefined8 *)(local_68 + 0x28));
              (**(code **)(*local_40 + 0x50))(local_40,uVar7);
            }
            cVar2 = FUN_014db910(&DAT_014e75ee,*(undefined8 *)(local_58 + 0x40),&local_68);
            if (cVar2 != '\0') {
              local_5e8 = (wchar_t *)0x0;
              local_5e0 = *(longlong **)(local_60 + 0x10);
              uVar7 = FUN_016a5390(&PTR_FUN_016a0e58,1,&DAT_014e7585,
                                   *(undefined8 *)(local_68 + 0x28));
              (**(code **)(*local_40 + 0x50))(local_40,uVar7);
            }
            FUN_00416ba0(&local_558,&DAT_014e7600,local_98);
            FUN_00416910(local_4e0,local_558,0xff);
            cVar2 = FUN_014db910(local_4e0,*(undefined8 *)(local_58 + 0x40),&local_68);
            if (cVar2 == '\0') {
              local_298 = 0x666544416f74440b;
              builtin_strncpy(acStack_290,"ault",4);
            }
            else {
              FUN_00414ff0(&local_298,*(undefined8 *)(local_68 + 0x28));
            }
            local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_298,&local_3b0);
            if (local_3b5 == '\0') {
              local_5e8 = (wchar_t *)param_1;
              cVar2 = FUN_00ee3970(*(undefined8 *)(local_60 + 8),3,&local_298,param_2);
              if (cVar2 != '\0') {
                local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_298,&local_3b0);
              }
            }
            if (local_3b5 == '\0') {
              FUN_016a4020(*(undefined8 *)(local_60 + 0x10),0xd,&local_298,0xffffffff);
            }
            FUN_00416ba0(&local_570,local_78,L"_DTOA");
            FUN_014e5820(auStack_608,&local_568,local_570);
            local_5e8 = L"_DTOA";
            local_5e0 = (longlong *)local_568;
            FUN_00416cd0(&local_560,4,&PTR_u_aFloralwhite_014e75c4,local_78);
            FUN_00416910(local_4e0,local_560,0xff);
            local_5e8 = (wchar_t *)local_40;
            local_5d0 = param_6;
            local_5c8 = 1;
            local_5c0 = 0;
            local_5e0 = param_1;
            local_5d8 = param_2;
            FUN_016c7790(local_60,local_4e0,&local_298,local_38);
            FUN_01d34870(local_38,0);
          }
        }
        local_3b4 = local_3b4 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(*local_48 + 0x28))();
    local_3b4 = 0;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(*local_48 + 0x18))(local_48,&local_578,local_3b4);
        iVar5 = (**(code **)(**(longlong **)(param_2 + 0x430) + 0xb0))
                          (*(longlong **)(param_2 + 0x430),local_578);
        if (iVar5 == -1) {
          (**(code **)(*local_48 + 0x18))(local_48,&local_580,local_3b4);
          (**(code **)(**(longlong **)(param_2 + 0x430) + 0x78))
                    (*(longlong **)(param_2 + 0x430),local_580);
          FUN_01d34a70(local_38);
          local_588[0] = 0x3001;
          uVar7 = FUN_016a4560(&DAT_0169ffe0,1,local_588,0);
          (**(code **)(*local_38 + 0x50))(local_38,uVar7);
          FUN_004b3cf0(local_48,&local_590,local_3b4);
          FUN_00416910(&local_398,local_590,0xff);
          FUN_004b5390(local_48,&local_78,local_3b4);
          iVar5 = FUN_004170c0(&DAT_014e757c,local_78,1);
          FUN_00416dc0(&local_80,local_78,1,iVar5 + -1);
          FUN_00416910(local_4e0,local_80,0xff);
          FUN_016bc3a0(local_60,local_4e0);
          local_3cc = FUN_004170c0(&DAT_014e757c,local_78,1);
          local_3cc = local_3cc + 1;
          local_3c8 = 0;
          if (local_78 != 0) {
            local_3c8 = *(undefined4 *)(local_78 + -4);
          }
          FUN_00416dc0(&local_88,local_78,local_3cc,local_3c8);
          FUN_00416910(local_4e0,local_88,0xff);
          FUN_016bc3a0(local_60,local_4e0);
          local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_398,&local_3b0);
          if (local_3b5 == '\0') {
            local_5e8 = (wchar_t *)param_1;
            cVar2 = FUN_00ee3970(*(undefined8 *)(local_60 + 8),3,&local_398,param_2);
            if (cVar2 != '\0') {
              local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_398,&local_3b0);
            }
          }
          if (local_3b5 == '\0') {
            FUN_016a4020(*(undefined8 *)(local_60 + 0x10),0xd,&local_398,0xffffffff);
          }
          FUN_004154b0(&local_5a0,&local_398,0);
          FUN_004156b0(&local_598,&DAT_014e7640,local_5a0);
          FUN_00415560(local_4e0,local_598,0xff);
          local_5e8 = (wchar_t *)0x0;
          local_5d0 = param_6;
          local_5c8 = 1;
          local_5c0 = 0;
          local_5e0 = param_1;
          local_5d8 = param_2;
          FUN_016c7790(local_60,local_4e0,&local_398);
        }
        local_3b4 = local_3b4 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = (**(code **)(*param_3 + 0x28))(param_3);
    if ((((0 < iVar4) && (iVar4 = (**(code **)(*local_48 + 0x28))(local_48), iVar4 == 0)) &&
        (*(char *)(local_60 + 0x42) == '\x03')) &&
       ((*(char *)(local_60 + 0x9a8) != '\0' &&
        (iVar4 = (**(code **)(**(longlong **)(param_2 + 0x430) + 0xb0))
                           (*(longlong **)(param_2 + 0x430),L"DIGIFPWR=$G_DPWR;$G_DGND"),
        iVar4 == -1)))) {
      (**(code **)(**(longlong **)(param_2 + 0x430) + 0x78))
                (*(longlong **)(param_2 + 0x430),L"DIGIFPWR=$G_DPWR;$G_DGND");
      FUN_01d34a70(local_38);
      local_588[0] = 0x3001;
      uVar7 = FUN_016a4560(&DAT_0169ffe0,1,local_588,0);
      (**(code **)(*local_38 + 0x50))(local_38,uVar7);
      local_398 = 0x5750464947494408;
      uStack_390 = 0x52;
      local_3b5 = FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_398,&local_3b0);
      if ((local_3b5 == '\0') &&
         (local_5e8 = (wchar_t *)param_1,
         cVar2 = FUN_00ee3970(*(undefined8 *)(local_60 + 8),3,&local_398,param_2), cVar2 != '\0')) {
        FUN_01d350f0(*(undefined8 *)(local_60 + 0xa20),&local_398,&local_3b0);
      }
      FUN_004154b0(&local_5b0,&local_398,0);
      FUN_004156b0(&local_5a8,&DAT_014e7640,local_5b0);
      FUN_00415560(local_4e0,local_5a8,0xff);
      local_5e8 = (wchar_t *)0x0;
      local_5d0 = param_6;
      local_5c8 = 1;
      local_5c0 = 0;
      local_5e0 = param_1;
      local_5d8 = param_2;
      FUN_016c7790(local_60,local_4e0,&local_398,local_38);
    }
    FUN_01d34a70(local_38);
    FUN_01d34a70(local_40);
    FUN_00410f20(local_38);
    FUN_00410f20(local_40);
    FUN_00410f20(local_30);
    FUN_00410f20(local_48);
    puVar1 = local_3e0;
  }
  local_3e0 = puVar1;
  FUN_00414590(&local_5b0,4);
  FUN_00414480(&local_590);
  FUN_00414560(&local_580,9);
  FUN_004144d0(&local_538);
  FUN_00414560(&local_530,8);
  FUN_004144d0(&local_4f0);
  FUN_00414480(&local_4e8);
  FUN_00414560(&local_98,6);
  return;
}

