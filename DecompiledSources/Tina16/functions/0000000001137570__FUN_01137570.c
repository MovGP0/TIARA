/* Ghidra address: 01137570 */
/* Ghidra symbol: FUN_01137570 */


void FUN_01137570(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  bool bVar6;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined1 local_370 [96];
  undefined1 *local_310;
  undefined1 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0 [88];
  undefined1 local_278;
  char local_277;
  undefined1 local_270 [256];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  longlong local_140;
  undefined1 local_12c;
  undefined1 local_12b [11];
  undefined1 local_120 [11];
  undefined2 local_115;
  undefined1 local_10a [81];
  byte local_b9 [97];
  double local_58;
  double local_50 [2];
  int local_40;
  int local_30 [8];
  
  local_150 = auStack_3c8;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  cVar2 = FUN_00f83630(param_2,param_1 + 0xa8e);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 8))(*(longlong **)(param_1 + 0xa18));
    if (cVar2 == '\0') {
      local_40 = 0;
      local_12c = *(undefined1 *)(param_2 + 0x10);
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),1);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x960),&local_160);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x9f0),&local_168);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x9e8),&local_170);
      local_3a8 = local_170;
      FUN_00416cd0(&local_158,3,local_160,local_168);
      FUN_00416910(local_270,local_158,0xff);
      puVar5 = local_270;
      FUN_00415020(local_b9,puVar5,0x50);
      local_115 = (ushort)local_115._1_1_ << 8;
      if ((byte)(local_b9[1] - 0x28) < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << (local_b9[1] - 0x28 & 0x1f) &
                0x28U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (bVar6) {
        local_278 = 1;
        local_277 = local_b9[1];
        FUN_00415020(&local_115,&local_278,10);
      }
      local_140 = *(longlong *)(param_1 + 0xa10);
      bVar1 = *(byte *)(param_1 + 0xa0c);
      if (bVar1 < 5) {
        if (bVar1 == 4) {
          FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
          local_58 = local_50[0];
          if (*(char *)(param_1 + 0xa20) == '\0') {
            local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))
                                 (*(longlong **)(param_1 + 0xa18),local_50);
          }
          else {
            local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
                                 (*(longlong **)(param_1 + 0xa18),local_50);
          }
          if (local_40 == 0) {
            *(double *)(param_1 + 0xa28) = local_50[0];
            *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x168) =
                 *(undefined8 *)(param_1 + 0xa28);
          }
          if (*(char *)(param_1 + 0xa20) == '\0') {
            iVar3 = FUN_00c42630(*(undefined8 *)(param_1 + 0xa28));
            if (0 < iVar3) {
              local_115 = 0x2b01;
            }
          }
          local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
          FUN_010c1330(local_2d0,*(undefined8 *)(param_1 + 0xa28),*(undefined1 *)(param_1 + 0xa78),
                       local_b9);
          *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xa28);
        }
        else if (bVar1 == 0) {
          FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
          local_58 = local_50[0];
          local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xe0))
                               (*(longlong **)(param_1 + 0xa18),local_50);
          if (local_40 == 0) {
            *(double *)(local_140 + 0x118) = local_50[0];
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x98))
                      (*(longlong **)(param_1 + 0xa18),*(undefined8 *)(local_140 + 0x118));
          }
          local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
          FUN_010c1330(local_2d0,*(undefined8 *)(local_140 + 0x118),*(undefined1 *)(param_1 + 0xa78)
                       ,local_b9);
          FUN_004169a0(&local_2d8,local_b9);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x928),local_2d8);
          local_115 = local_115 & 0xff00;
        }
        else if (bVar1 == 1) {
          FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
          local_58 = local_50[0];
          local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xe8))
                               (*(longlong **)(param_1 + 0xa18),local_50,local_12c);
          if (local_40 == 0) {
            *(double *)(local_140 + 0x120) = local_50[0];
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xa0))
                      (*(longlong **)(param_1 + 0xa18),*(undefined8 *)(local_140 + 0x120));
          }
          local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
          FUN_010c1330(local_2d0,*(undefined8 *)(local_140 + 0x120),*(undefined1 *)(param_1 + 0xa78)
                       ,local_b9);
          FUN_004169a0(&local_2e0,local_b9);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x918),local_2e0);
          local_115 = local_115 & 0xff00;
        }
        else if (bVar1 == 2) {
          FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
          local_58 = local_50[0];
          local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))
                               (*(longlong **)(param_1 + 0xa18),local_50);
          if (local_40 == 0) {
            *(double *)(local_140 + 0x128) = local_50[0];
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xa8))
                      (*(longlong **)(param_1 + 0xa18),*(undefined8 *)(local_140 + 0x128));
          }
          local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
          FUN_010c1330(local_2d0,*(undefined8 *)(local_140 + 0x128),*(undefined1 *)(param_1 + 0xa78)
                       ,local_b9);
          iVar3 = FUN_00c42630(*(undefined8 *)(local_140 + 0x128));
          if (0 < iVar3) {
            local_115 = 0x2b01;
          }
          FUN_004169a0(&local_2e8,local_b9);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x920),local_2e8);
        }
        else if (bVar1 == 3) {
          FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
          local_58 = local_50[0];
          local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf8))
                               (*(longlong **)(param_1 + 0xa18),local_50);
          if (local_40 == 0) {
            *(double *)(local_140 + 0x130) = local_50[0];
            (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xb0))
                      (*(longlong **)(param_1 + 0xa18),*(undefined8 *)(local_140 + 0x130));
          }
          local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
          FUN_010c1330(local_2d0,*(undefined8 *)(local_140 + 0x130),*(undefined1 *)(param_1 + 0xa78)
                       ,local_b9);
          iVar3 = FUN_00c42630(*(undefined8 *)(local_140 + 0x130));
          if (0 < iVar3) {
            local_115 = 0x2b01;
          }
          FUN_004169a0(&local_2f0,local_b9);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x930),local_2f0);
        }
      }
      else if (bVar1 == 5) {
        FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
        local_58 = local_50[0];
        if (*(char *)(param_1 + 0xa20) == '\0') {
          local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))
                               (*(longlong **)(param_1 + 0xa18),local_50);
        }
        else {
          local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))
                               (*(longlong **)(param_1 + 0xa18),local_50);
        }
        if (local_40 == 0) {
          *(double *)(param_1 + 0xa48) = local_50[0];
          *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x170) = *(undefined8 *)(param_1 + 0xa48)
          ;
        }
        if (*(char *)(param_1 + 0xa20) == '\0') {
          iVar3 = FUN_00c42630(*(undefined8 *)(param_1 + 0xa48));
          if (0 < iVar3) {
            local_115 = 0x2b01;
          }
        }
        local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
        FUN_010c1330(local_2d0,*(undefined8 *)(param_1 + 0xa48),*(undefined1 *)(param_1 + 0xa78),
                     local_b9);
      }
      else if (bVar1 == 6) {
        FUN_010c1040(local_b9,local_50,param_1 + 0xa78);
        local_58 = local_50[0];
        local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x108))
                             (*(longlong **)(param_1 + 0xa18),local_50);
        if (local_40 == 0) {
          *(double *)(param_1 + 0xa50) = local_50[0];
        }
        local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
        FUN_010c1330(local_2d0,*(undefined8 *)(param_1 + 0xa50),*(undefined1 *)(param_1 + 0xa78),
                     local_b9);
      }
      else if (bVar1 == 7) {
        FUN_010c11e0(local_b9,local_30,param_1 + 0xa78);
        local_58 = (double)local_30[0];
        local_40 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x110))
                             (*(longlong **)(param_1 + 0xa18),local_30);
        if (local_40 == 0) {
          *(int *)(param_1 + 0xa58) = local_30[0];
          *(int *)(*(longlong *)(param_1 + 0xa10) + 0x178) = local_30[0];
        }
        FUN_010c1450(local_2d0,*(undefined4 *)(param_1 + 0xa58),*(undefined1 *)(param_1 + 0xa78),
                     local_b9);
      }
      if (local_40 != 0) {
        local_3a8 = CONCAT71(local_3a8._1_7_,*(undefined1 *)(param_1 + 0xa74));
        FUN_010c1330(local_2d0,local_58,*(undefined1 *)(param_1 + 0xa78),local_10a);
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_300,0x132);
        local_310 = local_10a;
        local_308 = 4;
        FUN_00442f70(&local_2f8,local_300,&local_310,0);
        FUN_016fe230(local_2f8);
      }
      uVar4 = FUN_010bffb0(local_b9,local_120,local_12b,*(undefined1 *)(param_1 + 0xa78));
      if ((byte)(local_b9[1] - 0x28) < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (local_b9[1] - 0x28 & 0x1f) &
                0x28U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        FUN_00414ff0(local_370,&local_115);
        FUN_00415110(local_370,local_b9,0x5a);
        FUN_00415020(local_b9,local_370,0x50);
      }
      if (*(char *)(param_1 + 0xa0c) == '\a') {
        FUN_004169a0(&local_380,local_b9);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_380);
      }
      else {
        FUN_010c15a0(local_2d0,9,4,local_b9);
        FUN_004169a0(&local_378,local_2d0);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x960),local_378);
      }
      if ((int)(local_b9[0] - 1) < *(int *)(param_1 + 0xa6c)) {
        *(uint *)(param_1 + 0xa6c) = local_b9[0] - 1;
      }
      if ((ushort)local_b9[*(int *)(param_1 + 0xa6c) + 1] == *(ushort *)PTR_DAT_020032f8) {
        *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + -1;
      }
      FUN_004169a0(&local_388,local_120);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x9f0),local_388);
      FUN_004169a0(&local_390,local_12b);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x9e8),local_390);
      if (*(char *)(*(longlong *)(param_1 + 0x958) + 0x328) == '\0') {
        if (*(char *)(param_1 + 0xa70) == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x290))(*(longlong **)(param_1 + 0x9f0),0)
          ;
          (**(code **)(**(longlong **)(param_1 + 0x9f0) + 0x288))(*(longlong **)(param_1 + 0x9f0),1)
          ;
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x960) + 0x290))
                    (*(longlong **)(param_1 + 0x960),*(undefined4 *)(param_1 + 0xa6c));
          (**(code **)(**(longlong **)(param_1 + 0x960) + 0x288))(*(longlong **)(param_1 + 0x960),1)
          ;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x10))(*(longlong **)(param_1 + 0xa18),0);
    }
    else {
      uVar4 = FUN_0065b870(param_1);
      FUN_00f83670(uVar4,param_2);
    }
  }
  FUN_00414560(&local_390,4);
  FUN_00414560(&local_300,6);
  FUN_00414560(&local_170,4);
  return;
}

