/* Ghidra address: 013bd170 */
/* Ghidra symbol: FUN_013bd170 */


void FUN_013bd170(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 auStack_3b8 [32];
  wchar_t *local_398;
  undefined8 local_390;
  undefined1 local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined1 *local_360;
  longlong local_350;
  undefined1 local_340 [16];
  undefined1 local_330 [8];
  double local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  char local_2e0 [165];
  undefined1 local_23b [419];
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  int local_5c;
  int local_58;
  int local_54;
  int local_50 [2];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  
  local_360 = auStack_3b8;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_30 = (char *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = 0;
  local_398 = L"curves_out.dat";
  FUN_00416cd0(&local_88,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bd8d0);
  local_38 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_010cd100(local_2e0);
  FUN_00419260(&local_30,&DAT_013bd130,1,2);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  cVar1 = FUN_00440a20(local_88,1);
  if (cVar1 != '\0') {
    FUN_004b9f40(local_38,local_88);
    FUN_004b6dc0(local_38,0);
    FUN_004b84c0(local_38,&local_58,4);
    local_5c = FUN_004b6da0(local_38);
    FUN_01b20fc0(&local_308,local_38);
    FUN_004b6dc0(local_38,(longlong)local_5c);
    lVar2 = FUN_004b6da0(local_38);
    FUN_004b6dc0(local_38,lVar2 + 0x200);
    if (local_58 == 0) {
      FUN_00416880(&local_368,local_308);
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_368);
      FUN_004134c0(uVar3);
    }
    FUN_004b84c0(local_38,local_50,4);
    *(bool *)(param_1 + 0x124) = 0 < local_50[0];
    local_3c = 0;
    iVar4 = local_50[0];
    if (-1 < local_50[0] + -1) {
      do {
        FUN_013bccb0(param_1,local_38,local_2e0);
        FUN_004b84c0(local_38,&local_54,4);
        *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + local_54;
        local_98 = FUN_013bcb70(param_1,local_2e0);
        pcVar5 = local_2e0;
        puVar7 = (undefined8 *)(local_98 + 0x68);
        for (lVar2 = 0x48; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar7 = *(undefined8 *)pcVar5;
          pcVar5 = pcVar5 + 8;
          puVar7 = puVar7 + 1;
        }
        local_350 = *(longlong *)(local_98 + 8);
        *(undefined1 *)(local_350 + 0x4464) = 0;
        FUN_01cc6510(local_98);
        if ((local_2e0[0] == '\0') || (local_2e0[0] == '\x01')) {
          FUN_004169a0(&local_370,local_23b);
          local_398 = (wchar_t *)((ulonglong)local_398 & 0xffffffffffffff00);
          local_390 = 0;
          local_388 = 1;
          local_380 = 0;
          FUN_01cc2930(local_350,local_370,3,0);
        }
        else {
          FUN_004169a0(&local_378,local_23b);
          local_398 = (wchar_t *)((ulonglong)local_398 & 0xffffffffffffff00);
          local_390 = 0;
          local_388 = 1;
          local_380 = 0;
          FUN_01cc2930(local_350,local_378,3,1);
        }
        local_40 = 0;
        iVar6 = local_54;
        if (-1 < local_54 + -1) {
          do {
            FUN_004b84c0(local_38,&local_48,4);
            if (local_48 != 2) {
              uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,
                                   L"LoadCurve: expected number of items in curve point is 2");
              FUN_004134c0(uVar3);
            }
            local_44 = 0;
            iVar8 = local_48;
            if (-1 < local_48 + -1) {
              do {
                lVar2 = (longlong)local_44;
                FUN_004b84c0(local_38,local_30 + lVar2 * 0x30,1);
                if (local_30[lVar2 * 0x30] == '\0') {
                  FUN_004b84c0(local_38,local_30 + lVar2 * 0x30 + 8,8);
                }
                else {
                  FUN_004b84c0(local_38,local_30 + lVar2 * 0x30 + 8,8);
                  FUN_004b84c0(local_38,local_30 + lVar2 * 0x30 + 0x10,8);
                }
                local_44 = local_44 + 1;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
            if (*local_30 == '\0') {
              local_70 = *(double *)(local_30 + 8);
              local_78 = *(undefined8 *)(local_30 + 0x38);
            }
            if ((local_2e0[0] == '\0') || (local_2e0[0] == '\x01')) {
              FUN_01cc6510(local_98);
              FUN_01cc4620(local_98,local_70);
              FUN_01cc46b0(local_98,0,local_78);
            }
            if ((local_2e0[0] == '\x02') || (local_2e0[0] == '\x03')) {
              FUN_00c44460(local_330,*(undefined8 *)(local_30 + 8),*(undefined8 *)(local_30 + 0x10))
              ;
              FUN_00c44460(local_340,*(undefined8 *)(local_30 + 0x38),
                           *(undefined8 *)(local_30 + 0x40));
              local_318 = FUN_00c44590(local_340);
              local_320 = FUN_00c445d0(local_340);
              local_70 = local_328 / 6.283185307179586;
              FUN_01cc47e0(local_98,local_70);
              FUN_01cc48a0(local_98,0,local_318,local_320);
            }
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (*(char *)(param_1 + 0x126) == '\0') {
      FUN_017e1330(*(undefined8 *)(param_1 + 0x58));
    }
  }
  FUN_00419430(&local_30,&DAT_013bd130);
  FUN_00410f20(local_38);
  FUN_00414560(&local_378,3);
  FUN_004144d0(&local_308);
  FUN_00414560(&local_300,3);
  FUN_00414560(&local_88,2);
  FUN_00419430(&local_30,&DAT_013bd130);
  return;
}

