/* Ghidra address: 012491f0 */
/* Ghidra symbol: FUN_012491f0 */


uint FUN_012491f0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                 longlong param_5,undefined1 param_6,int param_7,uint param_8)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_5c8 [32];
  wchar_t *local_5a8;
  undefined *local_5a0;
  double local_598;
  undefined *local_590;
  longlong *local_588;
  longlong *local_580;
  byte local_578;
  undefined4 local_570;
  int local_564;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [256];
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  wchar_t *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  wchar_t *local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  wchar_t *local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  wchar_t *local_360;
  undefined8 local_358;
  wchar_t *local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  undefined1 *local_310;
  undefined4 local_304;
  char local_2fd;
  undefined4 local_2fc;
  int local_2f8;
  int local_2f4;
  undefined4 local_2f0;
  int local_2ec;
  int local_2e8;
  int local_2e4;
  int *local_2e0;
  int *local_2d0;
  byte *local_2c8;
  int local_2bc;
  int local_2b8;
  undefined1 local_2b4;
  undefined1 local_2b3;
  char local_2b2;
  char local_2b1;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  byte *local_2a0;
  int *local_298;
  undefined4 local_290;
  char acStack_28c [252];
  byte local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_310 = auStack_5c8;
  local_540 = 0;
  local_548 = 0;
  local_550 = 0;
  local_558 = 0;
  local_560 = 0;
  local_538 = 0;
  local_530 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_3f8 = 0;
  local_400 = 0;
  local_408 = (wchar_t *)0x0;
  local_3f0 = 0;
  local_3e8 = 0;
  local_3d0 = 0;
  local_3d8 = 0;
  local_3e0 = (wchar_t *)0x0;
  local_3b8 = 0;
  local_3c0 = 0;
  local_3c8 = 0;
  local_3b0 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_3a8 = (wchar_t *)0x0;
  local_380 = 0;
  local_388 = 0;
  local_390 = 0;
  local_378 = 0;
  local_368 = 0;
  local_370 = 0;
  local_358 = 0;
  local_360 = (wchar_t *)0x0;
  local_340 = 0;
  local_348 = 0;
  local_350 = (wchar_t *)0x0;
  local_328 = 0;
  local_330 = 0;
  local_338 = 0;
  local_318 = 0;
  local_320 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  FUN_00414610(param_5);
  local_4c = 0xffffffff;
  (**(code **)(*param_3 + 0x100))(param_3,&local_320);
  (**(code **)(*local_320 + 0x100))(local_320,&local_318,L"interactive");
  local_2b2 = FUN_0043fc50(local_318,0);
  FUN_0043f750(&local_330,(longlong)*(short *)(param_2 + 0x24));
  FUN_0043f750(&local_338,(longlong)*(short *)(param_2 + 0x26));
  local_5a8 = (wchar_t *)local_338;
  FUN_00416cd0(&local_328,3,local_330,&DAT_0124acc4);
  (**(code **)(*param_4 + 0x108))(param_4,L"origo",local_328);
  FUN_0043f750(&local_348,(longlong)*(short *)(param_2 + 0x28));
  FUN_0043f750(&local_350,(longlong)*(short *)(param_2 + 0x2a));
  local_5a8 = local_350;
  FUN_00416cd0(&local_340,3,local_348,&DAT_0124acc4);
  (**(code **)(*param_4 + 0x108))(param_4,&DAT_0124acd4,local_340);
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x38) + 0x10);
  local_564 = iVar3 + -1;
  local_2a4 = 0;
  if (-1 < local_564) {
    do {
      local_564 = iVar3;
      local_298 = (int *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),local_2a4);
      iVar3 = *local_298;
      if (iVar3 < 0x68) {
        if (iVar3 - 0x65U < 2) {
LAB_01249653:
          FUN_01247da0(local_298,param_3,param_4);
        }
        else {
          if (iVar3 != 0x67) goto LAB_0124a14c;
          local_2a0 = (byte *)(local_298 + 3);
          FUN_00409a70(local_2a0,local_190,*local_2a0 + 1);
          FUN_00b909d0(&local_2a0,*local_2a0 + 2);
          FUN_00409a70(local_2a0,&local_290,*local_2a0 + 1);
          FUN_00b909d0(&local_2a0,*local_2a0 + 2);
          local_2c8 = local_2a0;
          iVar3 = FUN_00414f50(local_190,&DAT_0124acdc,(ulonglong)local_190[0] + 1);
          if (iVar3 == 0) {
            iVar3 = FUN_00414f50(&local_290,&DAT_0124acde,(ulonglong)(byte)local_290 + 1);
            if (iVar3 != 0) goto LAB_0124980e;
            FUN_00414b50(&local_88,&DAT_0124acf4);
            local_290 = 0x69724105;
            acStack_28c[0] = 'a';
            acStack_28c[1] = 'l';
            sVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
            if (sVar2 == 8) {
              local_2e4 = *(short *)(local_2c8 + 2) + -4;
              local_2e8 = *(short *)(local_2c8 + 2) + 2;
              local_2ec = local_2e8;
              if (param_7 == 0) {
                local_2ec = local_2e4;
              }
              local_2b0 = local_2ec;
            }
            else {
              local_2b0 = (int)*(short *)(local_2c8 + 2);
            }
          }
          else {
LAB_0124980e:
            FUN_004169a0(&local_88,local_190);
            local_2b0 = (int)*(short *)(local_2c8 + 2);
          }
          FUN_004169a0(&local_360,&local_290);
          uVar4 = FUN_0040c770(*(double *)(local_2c8 + 4) * 11.0);
          local_5a8 = local_360;
          local_5a0 = (undefined *)CONCAT44(local_5a0._4_4_,(int)*(short *)local_2c8);
          local_598 = (double)CONCAT44(local_598._4_4_,local_2b0);
          local_590 = (undefined *)((ulonglong)local_590 & 0xffffffff00000000);
          local_588 = (longlong *)CONCAT44(local_588._4_4_,uVar4);
          local_580 = (longlong *)CONCAT71(local_580._1_7_,local_2c8[0xc]);
          local_578 = local_2c8[0xd];
          local_570 = *(undefined4 *)(local_2c8 + 0xe);
          FUN_012444f0(&local_358,param_3,param_4,local_88);
        }
      }
      else {
        if (iVar3 - 0x68U < 2) goto LAB_01249653;
        if (iVar3 == 0x6a) {
          if (param_5 != 0) {
            local_2d0 = local_298 + 3;
            local_48 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
            local_40 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
            (**(code **)(*local_48 + 8))(local_48,local_2d0[2]);
            FUN_004b89e0(local_48,local_2d0 + 5,(longlong)local_2d0[2]);
            FUN_004b6dc0(local_48,0);
            (**(code **)(*local_40 + 0xc0))(local_40,local_48);
            if ((local_2d0[3] == 0) || (param_8 != 0xffffffff)) {
              local_2b1 = param_8 < 0x80000000;
            }
            else {
              local_2a0 = (byte *)(local_2d0 + 5);
              FUN_00b909d0(&local_2a0,local_2d0[2]);
              FUN_004b9ec0(local_48);
              (**(code **)(*local_48 + 8))(local_48,local_2d0[3]);
              FUN_004b89e0(local_48,local_2a0,(longlong)local_2d0[3]);
              FUN_004b6dc0(local_48,0);
              local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
              (**(code **)(*local_70 + 0xe8))(local_70,local_48);
              local_2a8 = (**(code **)(*local_70 + 0x28))(local_70);
              local_2a8 = local_2a8 + -1;
              if ((int)(uint)*(byte *)(local_2d0 + 1) <= local_2a8) {
                iVar3 = ((uint)*(byte *)(local_2d0 + 1) - local_2a8) + -1;
                do {
                  (**(code **)(*local_70 + 0x98))(local_70,local_2a8);
                  local_2a8 = local_2a8 + -1;
                  iVar3 = iVar3 + 1;
                } while (iVar3 != 0);
              }
              iVar3 = FUN_004170c0(&DAT_0124ad0c,param_5,1);
              FUN_00416dc0(&local_370,param_5,1,iVar3 + -1);
              FUN_0043ea00(&local_368,local_370);
              local_2b1 = FUN_01cf1650(local_368,local_70,&param_8);
              FUN_00410f20(local_70);
            }
            if (local_2b1 != '\0') {
              local_2ac = FUN_00c3c500((char)local_2d0[1],*(undefined1 *)((longlong)local_2d0 + 5),
                                       *(undefined1 *)((longlong)local_2d0 + 6),
                                       *(undefined1 *)((longlong)local_2d0 + 7));
              local_30 = FUN_007d5080(&PTR_FUN_006441f8,1,0);
              local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
              iVar3 = (**(code **)(*local_40 + 0x60))(local_40);
              FUN_007d55b0(local_30,(longlong)iVar3 / (longlong)local_2ac & 0xffffffff);
              uVar4 = (**(code **)(*local_40 + 0x48))(local_40);
              FUN_007d5610(local_30,uVar4);
              FUN_007d5ad0(local_30,local_40,0x1fffffff);
              FUN_0060bbf0(local_38,6);
              FUN_007d5cb0(local_30,param_8,local_38);
              cVar1 = FUN_004113d0(param_1[0x33],&PTR_FUN_01731160);
              if ((cVar1 == '\0') || (local_2b2 == '\0')) {
                (**(code **)(*param_3 + 0x148))(param_3,&local_58,L"shape");
                (**(code **)(*param_4 + 0x98))(param_4,&local_378,local_58);
                FUN_01b23e30(local_38,param_3,local_58);
                (**(code **)(*local_58 + 0x108))(local_58,L"type",L"image");
                FUN_0043f750(&local_388,(longlong)(short)*local_2d0);
                FUN_0043f750(&local_390,(longlong)*(short *)((longlong)local_2d0 + 2));
                local_5a8 = (wchar_t *)local_390;
                FUN_00416cd0(&local_380,3,local_388,&DAT_0124acc4);
                (**(code **)(*local_58 + 0x108))(local_58,L"position",local_380);
                iVar3 = (**(code **)(*local_38 + 0x60))(local_38);
                uVar6 = FUN_0040c840((double)iVar3 / (double)(float)local_2d0[4]);
                FUN_0043f780(&local_3a0,uVar6);
                iVar3 = (**(code **)(*local_38 + 0x48))(local_38);
                uVar6 = FUN_0040c840((double)iVar3 / (double)(float)local_2d0[4]);
                FUN_0043f780(&local_3a8,uVar6);
                local_5a8 = local_3a8;
                FUN_00416cd0(&local_398,3,local_3a0,&DAT_0124acc4);
                (**(code **)(*local_58 + 0x108))(local_58,L"size",local_398);
              }
              cVar1 = FUN_004113d0(param_1[0x33],&PTR_FUN_01731160);
              if ((cVar1 != '\0') && (local_2b2 == '\0')) {
                (**(code **)(*local_58 + 0x108))(local_58,L"showif",&DAT_0124adb8);
              }
              cVar1 = FUN_004113d0(param_1[0x33],&PTR_FUN_01731160);
              if ((cVar1 != '\0') && (local_2b2 == '\0')) {
                iVar3 = FUN_00c3c520((char)local_2d0[1],*(undefined1 *)((longlong)local_2d0 + 5),
                                     *(undefined1 *)((longlong)local_2d0 + 6));
                FUN_007d5cb0(local_30,param_8 + iVar3,local_38);
                (**(code **)(*param_3 + 0x148))(param_3,&local_58,L"shape");
                (**(code **)(*param_4 + 0x98))(param_4,&local_3b0,local_58);
                FUN_01b23e30(local_38,param_3,local_58);
                (**(code **)(*local_58 + 0x108))(local_58,L"type",L"image");
                FUN_0043f750(&local_3c0,(longlong)(short)*local_2d0);
                FUN_0043f750(&local_3c8,(longlong)*(short *)((longlong)local_2d0 + 2));
                local_5a8 = (wchar_t *)local_3c8;
                FUN_00416cd0(&local_3b8,3,local_3c0,&DAT_0124acc4);
                (**(code **)(*local_58 + 0x108))(local_58,L"position",local_3b8);
                iVar3 = (**(code **)(*local_38 + 0x60))(local_38);
                uVar6 = FUN_0040c840((double)iVar3 / (double)(float)local_2d0[4]);
                FUN_0043f780(&local_3d8,uVar6);
                iVar3 = (**(code **)(*local_38 + 0x48))(local_38);
                uVar6 = FUN_0040c840((double)iVar3 / (double)(float)local_2d0[4]);
                FUN_0043f780(&local_3e0,uVar6);
                local_5a8 = local_3e0;
                FUN_00416cd0(&local_3d0,3,local_3d8,&DAT_0124acc4);
                (**(code **)(*local_58 + 0x108))(local_58,L"size",local_3d0);
                (**(code **)(*local_58 + 0x108))(local_58,L"showif",&DAT_0124adcc);
              }
              local_4c = param_8;
              FUN_00410f20(local_30);
              FUN_00410f20(local_38);
            }
            FUN_00410f20(local_40);
            FUN_00410f20(local_48);
          }
        }
        else if (iVar3 == 0x6b) goto LAB_01249653;
      }
LAB_0124a14c:
      local_2a4 = local_2a4 + 1;
      local_564 = local_564 + -1;
      iVar3 = local_564;
    } while (local_564 != 0);
  }
  local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (((param_1 != (longlong *)0x0) && (cVar1 = FUN_01d04d40(param_1), cVar1 != '\0')) &&
     ((char)param_1[0x34] == '\x01')) {
    FUN_00eeb0b0(param_1,local_78);
  }
  iVar3 = *(int *)(*(longlong *)(param_2 + 0x30) + 0x10);
  local_2a4 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_298 = (int *)FUN_004aeac0(*(undefined8 *)(param_2 + 0x30),local_2a4);
      local_2e0 = local_298 + 3;
      (**(code **)(*param_3 + 0x148))(param_3,&local_60,&DAT_0124ade0);
      (**(code **)(*param_4 + 0x98))(param_4,&local_3e8,local_60);
      FUN_0043f750(&local_3f0,*(byte *)((longlong)local_2e0 + 0x13) & 0xf);
      (**(code **)(*local_60 + 0x108))(local_60,L"type",local_3f0);
      FUN_0043f750(&local_400,(longlong)*(short *)((longlong)local_2e0 + 0x15));
      FUN_0043f750(&local_408,(longlong)*(short *)((longlong)local_2e0 + 0x17));
      local_5a8 = local_408;
      FUN_00416cd0(&local_3f8,3,local_400,&DAT_0124acc4);
      (**(code **)(*local_60 + 0x108))(local_60,L"position",local_3f8);
      FUN_0043f750(&local_410,(*(byte *)((longlong)local_2e0 + 0x13) / 0x10) * 4);
      (**(code **)(*local_60 + 0x108))(local_60,L"length",local_410);
      FUN_0043f750(&local_418,(char)local_2e0[5]);
      (**(code **)(*local_60 + 0x108))(local_60,&DAT_0124ae10,local_418);
      FUN_004169a0(&local_420,local_2e0);
      (**(code **)(*local_60 + 0x108))(local_60,L"text",local_420);
      FUN_0043f750(&local_428,*(undefined1 *)((longlong)local_2e0 + 0x12));
      (**(code **)(*local_60 + 0x108))(local_60,L"electype",local_428);
      if (param_1 != (longlong *)0x0) {
        cVar1 = FUN_01d04d40(param_1);
        if (((cVar1 == '\0') || ((char)param_1[0x34] != '\x01')) ||
           (iVar5 = (**(code **)(*local_78 + 0x28))(local_78), iVar5 <= local_2a4)) {
          FUN_00ee6f30(local_528,param_1,local_2a4);
          FUN_004169a0(&local_90,local_528);
        }
        else {
          (**(code **)(*local_78 + 0x18))(local_78,&local_90,local_2a4);
        }
        iVar5 = FUN_004170c0(L"pin:",local_90,1);
        if (iVar5 < 1) {
          FUN_00414480(&local_90);
        }
        else {
          local_2f4 = FUN_004170c0(L"pin:",local_90,1);
          local_2f4 = local_2f4 + 5;
          local_2f0 = 0;
          if (local_90 != 0) {
            local_2f0 = *(undefined4 *)(local_90 + -4);
          }
          FUN_00416dc0(&local_90,local_90,local_2f4,local_2f0);
          if (local_90 != 0) {
            local_2f8 = 0;
            if (local_90 != 0) {
              local_2f8 = *(int *)(local_90 + -4);
            }
            if (*(short *)(local_90 + -2 + (longlong)local_2f8 * 2) == 0x29) {
              local_2fc = 0;
              if (local_90 != 0) {
                local_2fc = *(undefined4 *)(local_90 + -4);
              }
              FUN_00416e20(&local_90,local_2fc,1);
            }
          }
        }
        (**(code **)(*local_60 + 0x108))(local_60,L"designator",local_90);
      }
      if (*(char *)((longlong)local_2e0 + 0x11) != '\0') {
        cVar1 = (char)local_2e0[5];
        if (cVar1 == '\0') {
          local_2b3 = 0;
          local_2b4 = 1;
        }
        else if (cVar1 == '\x01') {
          local_2b3 = 0;
          local_2b4 = 1;
        }
        else if (cVar1 == '\x02') {
          local_2b3 = 0;
          local_2b4 = 1;
        }
        else if (cVar1 == '\x03') {
          local_2b3 = 0;
          local_2b4 = 1;
        }
        local_2bc = (*(byte *)((longlong)local_2e0 + 0x13) / 0x10) * 4 + 2 +
                    *(int *)((longlong)local_2e0 + 0x1a);
        local_2b8 = *(int *)((longlong)local_2e0 + 0x1e);
        FUN_01245b60(&local_2bc,&local_2b8,cVar1);
        local_2bc = local_2bc + *(short *)((longlong)local_2e0 + 0x15);
        local_2b8 = local_2b8 + *(short *)((longlong)local_2e0 + 0x17);
        FUN_004169a0(&local_80,local_2e0);
        local_5a8 = (wchar_t *)CONCAT71(local_5a8._1_7_,local_2b3);
        local_5a0 = (undefined *)CONCAT71(local_5a0._1_7_,local_2b4);
        local_598 = (*(double *)((longlong)local_2e0 + 0x22) * 0.9) / 8.0;
        local_580 = local_60;
        local_588 = param_3;
        local_590._0_4_ = *(undefined4 *)((longlong)local_2e0 + 0x2a);
        FUN_01244970(&local_80,&local_2bc,&local_2b8,(char)local_2e0[5]);
        if (*(byte *)(local_2e0 + 5) < 8) {
          local_2fd = ((int)CONCAT71((int7)((ulonglong)local_2e0 >> 8),1) <<
                       (*(byte *)(local_2e0 + 5) & 0x1f) & 10U) != 0;
        }
        else {
          local_2fd = false;
        }
        if ((bool)local_2fd == false) {
          local_304 = 0;
        }
        else {
          local_304 = 0x10e;
        }
        uVar4 = FUN_0040c770((*(double *)((longlong)local_2e0 + 0x22) * 9.9) / 8.0);
        local_5a8 = L"Arial";
        local_5a0 = (undefined *)CONCAT44(local_5a0._4_4_,local_2bc);
        local_598 = (double)CONCAT44(local_598._4_4_,local_2b8);
        local_590 = (undefined *)CONCAT44(local_590._4_4_,local_304);
        local_588 = (longlong *)CONCAT44(local_588._4_4_,uVar4);
        local_580 = (longlong *)((ulonglong)local_580 & 0xffffffffffffff00);
        local_578 = 0;
        local_570 = *(undefined4 *)((longlong)local_2e0 + 0x2a);
        FUN_012444f0(&local_530,param_3,local_60,local_80);
      }
      local_2a4 = local_2a4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_78);
  (**(code **)(*param_3 + 0x148))(param_3,&local_58,L"hotzone");
  (**(code **)(*param_4 + 0x98))(param_4,&local_538,local_58);
  FUN_0043f750(&local_548,(longlong)*(short *)(param_2 + 0x14));
  FUN_0043f750(&local_550,(longlong)*(short *)(param_2 + 0x16));
  FUN_0043f750(&local_558,(longlong)*(short *)(param_2 + 0x18));
  FUN_0043f750(&local_560,(longlong)*(short *)(param_2 + 0x1a));
  local_5a8 = (wchar_t *)local_550;
  local_5a0 = &DAT_0124acc4;
  local_598 = (double)local_558;
  local_590 = &DAT_0124acc4;
  local_588 = (longlong *)local_560;
  FUN_00416cd0(&local_540,7,local_548,&DAT_0124acc4);
  (**(code **)(*local_58 + 0x108))(local_58,L"points",local_540);
  local_5a8 = (wchar_t *)CONCAT71(local_5a8._1_7_,param_6);
  FUN_01245c80(param_1,param_3,param_4,param_2);
  FUN_00414560(&local_560,5);
  FUN_0041b800(&local_538);
  FUN_0041b800(&local_530);
  FUN_00414560(&local_428,8);
  FUN_0041b800(&local_3e8);
  FUN_00414560(&local_3e0,6);
  FUN_0041b800(&local_3b0);
  FUN_00414560(&local_3a8,6);
  FUN_0041b800(&local_378);
  FUN_00414560(&local_370,3);
  FUN_0041b800(&local_358);
  FUN_00414560(&local_350,6);
  FUN_0041b800(&local_320);
  FUN_00414480(&local_318);
  FUN_00414560(&local_90,3);
  FUN_00417840(&local_60,&LAB_00b9fca0,2);
  FUN_00414480(&param_5);
  return local_4c;
}

