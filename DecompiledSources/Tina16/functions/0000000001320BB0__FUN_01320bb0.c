/* Ghidra address: 01320bb0 */
/* Ghidra symbol: FUN_01320bb0 */


/* WARNING: Removing unreachable block (ram,0x013222af) */
/* WARNING: Removing unreachable block (ram,0x013222b9) */
/* WARNING: Removing unreachable block (ram,0x013222d3) */

char FUN_01320bb0(byte param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                 longlong param_6,longlong *param_7,undefined1 *param_8,undefined4 param_9,
                 undefined1 param_10,char param_11,undefined8 *param_12,undefined1 *param_13,
                 int param_14,char param_15,int param_16)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  double dVar11;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  char local_290;
  undefined8 *local_288;
  undefined1 *local_280;
  longlong *local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  int local_ec;
  undefined4 local_e8;
  longlong *local_e0;
  int local_d4;
  uint local_d0;
  undefined1 local_cc [3];
  byte local_c9;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 *local_50 [2];
  undefined8 local_40 [2];
  char local_29;
  longlong local_28;
  char local_19;
  
  local_100 = auStack_2b8;
  local_258 = 0;
  local_238 = 0;
  local_250 = 0;
  local_240 = 0;
  local_248 = 0;
  local_210 = 0;
  local_218 = 0;
  local_230 = 0;
  local_220 = 0;
  local_228 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_200 = (longlong *)0x0;
  local_1e8 = 0;
  local_1f0 = (longlong *)0x0;
  local_1d8 = 0;
  local_1e0 = (longlong *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = (longlong *)0x0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_138 = 0;
  local_120 = 0;
  local_130 = 0;
  local_128 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_50[0] = (undefined8 *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_70 = (undefined8 *)0x0;
  local_40[0] = 0;
  local_78 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  FUN_0041b910(param_7);
  FUN_0041b910(param_8);
  FUN_00414610(param_13);
  local_29 = '\0';
  local_19 = 1;
  local_28 = 0;
  if (param_12 == (undefined8 *)0x0) {
    FUN_00414480(local_50);
  }
  else {
    FUN_00441640(&local_110,param_12[1]);
    FUN_0044f8b0(&local_108,local_110);
    FUN_00441920(local_50,local_108);
  }
  if ((param_12 == (undefined8 *)0x0) ||
     (((param_6 == 0 && (param_8 == (undefined1 *)0x0)) || (param_7 != (longlong *)0x0)))) {
    local_c9 = 0;
  }
  else {
    local_c9 = 1;
  }
  if (local_c9 != 0) {
    local_298 = (wchar_t *)param_13;
    FUN_012bb180(param_2,0,L"Components",param_12);
  }
  *(int *)(param_2 + 0xde0) = param_14;
  local_298 = (wchar_t *)0x0;
  FUN_015fc970(&local_118,param_12,0,0);
  local_298 = (wchar_t *)CONCAT71(local_298._1_7_,param_1);
  local_290 = param_5;
  local_288 = local_50[0];
  local_280 = param_13;
  local_278 = (longlong *)CONCAT71(local_278._1_7_,param_11);
  local_270 = CONCAT31(local_270._1_3_,1);
  local_268 = local_118;
  local_28 = FUN_0131dba0(&PTR_FUN_0131cd18,1,param_2,1);
  *(undefined8 **)(local_28 + 0x1320) = param_12;
  *(byte *)(local_28 + 0x335) = local_c9;
  *(undefined1 *)(local_28 + 0x12f2) = param_10;
  FUN_01320320(param_1,param_5,local_28);
  if (local_c9 != 0) {
    if (5000 < *(int *)(local_28 + 0x30c)) {
      FUN_0041ddd0(&local_128,PTR_LAB_020018d8);
      local_298 = (wchar_t *)local_128;
      FUN_00de8a20(&local_120,L"Analdat",L"SCircuitTooBigForInteractive",
                   *(undefined8 *)(local_28 + 0x1310));
      FUN_004168b0(&local_130,local_120);
      FUN_01b05000(local_130,0);
    }
    local_298 = (wchar_t *)param_13;
    FUN_012bb180(param_2,local_28,L"Globals",param_12);
  }
  FUN_017d18e0(local_28,1);
  FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_01320550);
  lVar1 = *(longlong *)(local_28 + 0xf10);
  *(undefined8 *)(lVar1 + 0x18) = 0x4059000000000000;
  if (*(char *)(local_28 + 0x5dc) == '\x02') {
    FUN_01af29b0(lVar1,2);
  }
  else {
    FUN_01af29b0(lVar1,3);
  }
  if (param_5 == '\x04') {
    FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),4);
  }
  if (*(char *)(local_28 + 0x325) == '\0') {
    uVar7 = FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01322cea,2);
  }
  else {
    uVar7 = FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),1,&DAT_01322ce8,0);
  }
  if (param_1 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_1 & 0x1f) & 5U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (((bVar10) && (param_5 != '\x04')) && (*PTR_DAT_020023b0 == '\0')) {
    FUN_01af2ae0(*(undefined8 *)(local_28 + 0xf10));
  }
  FUN_01af2990(*(undefined8 *)(local_28 + 0xf10),0);
  uVar7 = FUN_00b921a0(*(undefined8 *)(local_28 + 0xf30));
  *(undefined8 *)(local_28 + 0xf40) = uVar7;
  FUN_01320560(local_28,param_5);
  FUN_01af2990(*(undefined8 *)(local_28 + 0xf10),0x4059000000000000);
  dVar11 = (double)FUN_00b921a0(*(undefined8 *)(local_28 + 0xf30));
  *(double *)(local_28 + 0xf20) = dVar11 - *(double *)(local_28 + 0xf40);
  if (local_c9 != 0) {
    FUN_012bab50(local_28,param_12,param_13);
  }
  if (*(char *)(local_28 + 0x49c) != '\x01') {
    if (param_5 == '\x04') {
      if (param_4 == '\0') {
        if (param_6 == 0) {
          if (param_7 == (longlong *)0x0) {
            if (param_8 == (undefined1 *)0x0) {
              if ((param_13 == (undefined1 *)0x0) ||
                 (cVar2 = FUN_005b8460(L"Answer",param_13), cVar2 != '\0')) {
                FUN_0131f840(*(undefined8 *)(local_28 + 0xa8),local_28);
              }
              else {
                local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
                FUN_016f68a0(local_28,1,1,1);
                FUN_012bc9f0(local_28,1,param_12,param_13);
              }
            }
            else {
              FUN_0131f840(*(undefined8 *)(local_28 + 0xa8),local_28);
              FUN_019af4e0(*(undefined8 *)(local_28 + 0xa0));
              local_298 = (wchar_t *)CONCAT71(local_298._1_7_,param_11);
              local_290 = param_15;
              local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffffffffff00);
              local_280 = (undefined1 *)0x0;
              local_278 = (longlong *)0x0;
              FUN_01299dd0(param_8,*(undefined8 *)(local_28 + 0xa8),
                           *(undefined8 *)(local_28 + 0x1310),param_10);
              if (local_c9 != 0) {
                FUN_00441640(&local_208,param_12[1]);
                local_298 = L".txt";
                FUN_00416cd0(&local_c0,3,local_208,param_13);
                local_298 = *(wchar_t **)(local_28 + 0x1430);
                FUN_0135a210(local_28,1,1,local_c0);
              }
            }
          }
          else {
            iVar5 = *(int *)(param_2 + 0x10);
            local_d4 = 0;
            if (-1 < iVar5 + -1) {
              do {
                local_e0 = (longlong *)FUN_00b94e60(param_2,local_d4);
                cVar2 = FUN_0198a580(local_e0);
                plVar9 = local_e0;
                if (cVar2 == '\x04') {
                  uVar4 = (**(code **)(*local_e0 + 0xf8))(local_e0);
                  local_d0 = (uint)uVar4;
                  (**(code **)(*plVar9 + 0x288))(plVar9,&local_c8);
                  if (local_c8 == 0) {
                    FUN_0043f750(&local_1d0,local_d4);
                    FUN_00416ba0(&local_c8,L"no_label_",local_1d0);
                  }
                  if ((byte)local_d0 < 0x78) {
                    uVar8 = ((ulonglong)(byte)local_d0 & 0x7f) + 0x20;
                    bVar10 = (*(byte *)((longlong)L"no_label_" + ((longlong)uVar8 >> 3) + 0x10) >>
                              (uVar8 & 7) & 1) != 0;
                  }
                  else {
                    bVar10 = false;
                  }
                  if (bVar10) {
                    plVar9 = (longlong *)FUN_0131e140(local_e0,local_28);
                    (**(code **)(*plVar9 + 0x18))(plVar9,&local_b8,0);
                    (**(code **)(*param_7 + 0x100))(param_7,&local_1e0);
                    (**(code **)(*local_1e0 + 0xd8))(local_1e0,&local_1d8,&DAT_01322e48);
                    FUN_0041b890(&local_70,local_1d8,&DAT_01322d3c);
                    FUN_01320a30(auStack_2b8,local_70,local_c8,local_b8);
                  }
                  else if ((byte)local_d0 < 0x40 &&
                           (1L << ((byte)local_d0 & 0x3f) & 0x400000040U) != 0) {
                    plVar9 = (longlong *)FUN_0131e140(local_e0,local_28);
                    (**(code **)(*plVar9 + 0x18))(plVar9,&local_b8,0);
                    (**(code **)(*param_7 + 0x100))(param_7,&local_1f0);
                    (**(code **)(*local_1f0 + 0xd8))(local_1f0,&local_1e8,&DAT_01322e64);
                    FUN_0041b890(&local_70,local_1e8,&DAT_01322d3c);
                    FUN_01320a30(auStack_2b8,local_70,local_c8,local_b8);
                  }
                  else {
                    bVar3 = (byte)local_d0 - 8;
                    if (bVar3 < 0x60) {
                      bVar10 = ((byte)(&DAT_01322e6c)[(longlong)(int)(bVar3 & 0x7f) >> 3] >>
                                (bVar3 & 7) & 1) != 0;
                    }
                    else {
                      bVar10 = false;
                    }
                    if (bVar10) {
                      plVar9 = (longlong *)FUN_0131e140(local_e0,local_28);
                      (**(code **)(*plVar9 + 0x18))(plVar9,&local_b8,0);
                      (**(code **)(*param_7 + 0x100))(param_7,&local_200);
                      (**(code **)(*local_200 + 0xd8))(local_200,&local_1f8,&DAT_01322e84);
                      FUN_0041b890(&local_70,local_1f8,&DAT_01322d3c);
                      FUN_01320a30(auStack_2b8,local_70,local_c8,local_b8);
                    }
                  }
                }
                local_d4 = local_d4 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
          }
        }
        else {
          FUN_0131f840(*(undefined8 *)(local_28 + 0xa8),local_28);
          FUN_019af4e0(*(undefined8 *)(local_28 + 0xa0));
          if ((local_c9 & param_11 == '\x01') != 0) {
            FUN_00441640(&local_138,param_12[1]);
            local_298 = L".txt";
            FUN_00416cd0(&local_c0,3,local_138,param_13);
            local_298 = *(wchar_t **)(local_28 + 0x1430);
            FUN_0135a210(local_28,1,1,local_c0);
          }
          if ((param_7 != (longlong *)0x0) &&
             ((**(code **)(*param_7 + 0x100))(param_7,&local_140), local_140 != 0)) {
            (**(code **)(*param_7 + 0x100))(param_7,&local_148);
            (**(code **)(*local_148 + 0xe8))(local_148,&local_78,L"circuit/component");
            (**(code **)(*local_78 + 0x68))(local_78);
            (**(code **)(*local_78 + 0x70))(local_78,&local_150);
            FUN_0041b890(&local_58,local_150,&DAT_01322d3c);
            while (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x100))(local_58,&local_b0,&PTR_DAT_01322d58);
              local_90 = (longlong *)FUN_019ac500(*(undefined8 *)(local_28 + 0xa8),local_b0);
              if (local_90 != (longlong *)0x0) {
                if (param_14 < 1) {
                  local_98 = (longlong *)0x0;
                }
                else {
                  local_a8 = FUN_012bedf0(*(undefined8 *)(param_2 + 0xd8),(undefined2)param_14);
                  if (local_a8 == 0) {
                    local_98 = (longlong *)0x0;
                  }
                  else {
                    local_98 = (longlong *)FUN_012be9c0(local_a8,local_90);
                  }
                }
                if (local_98 != (longlong *)0x0) {
                  local_90 = local_98;
                }
                cVar2 = FUN_0199c7c0(local_90);
                if (cVar2 == '\0') {
                  local_298 = (wchar_t *)local_cc;
                  FUN_00f4fb30(&local_b8,local_28,local_90,0);
                }
                else {
                  local_298 = (wchar_t *)local_cc;
                  FUN_00f4daf0(&local_b8,local_28,local_90);
                }
                if (local_b8 != 0) {
                  local_298._0_1_ = 1;
                  FUN_00450070(&local_158,local_b8,&DAT_01322d6c);
                  FUN_00414b50(&local_b8,local_158);
                  local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
                  FUN_00450070(&local_160,local_b8,&DAT_01322d90);
                  FUN_00414b50(&local_b8,local_160);
                  (**(code **)(*local_58 + 0x108))(local_58,L"value",local_b8);
                }
                (**(code **)(*local_78 + 0x70))(local_78,&local_168);
                FUN_0041b890(&local_58,local_168,&DAT_01322d3c);
              }
            }
            (**(code **)(*param_7 + 0x100))(param_7,&local_170);
            (**(code **)(*local_170 + 0xe8))(local_170,&local_80,L"circuit/node");
            (**(code **)(*local_80 + 0x68))(local_80);
            (**(code **)(*local_80 + 0x70))(local_80,&local_178);
            FUN_0041b890(&local_60,local_178,&DAT_01322d3c);
            while (local_60 != (longlong *)0x0) {
              (**(code **)(*local_60 + 0x100))(local_60,&local_b0,&PTR_DAT_01322d58);
              iVar5 = FUN_004170c0(&DAT_01322de0,local_b0,1);
              FUN_00416dc0(&local_180,local_b0,1,iVar5 + -1);
              local_90 = (longlong *)FUN_019ac500(*(undefined8 *)(local_28 + 0xa8),local_180);
              if (local_90 != (longlong *)0x0) {
                local_ec = FUN_004170c0(&DAT_01322de0,local_b0,1);
                local_ec = local_ec + 1;
                local_e8 = 0;
                if (local_b0 != 0) {
                  local_e8 = *(undefined4 *)(local_b0 + -4);
                }
                FUN_00416dc0(&local_188,local_b0,local_ec,local_e8);
                uVar6 = FUN_0043fc00(local_188);
                uVar6 = (**(code **)(*local_90 + 0x210))(local_90,uVar6);
                local_298 = (wchar_t *)local_cc;
                local_290 = '\0';
                FUN_00f4d0d0(&local_b8,local_28,uVar6,0);
              }
              if (local_b8 != 0) {
                local_298._0_1_ = 1;
                FUN_00450070(&local_190,local_b8,&DAT_01322d6c,&DAT_01322d7c);
                FUN_00414b50(&local_b8,local_190);
                local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
                FUN_00450070(&local_198,local_b8,&DAT_01322d90,0);
                FUN_00414b50(&local_b8,local_198);
                (**(code **)(*local_60 + 0x108))(local_60,L"value",local_b8);
              }
              (**(code **)(*local_80 + 0x70))(local_80,&local_1a0);
              FUN_0041b890(&local_60,local_1a0,&DAT_01322d3c);
            }
            (**(code **)(*param_7 + 0x100))(param_7,&local_1a8);
            (**(code **)(*local_1a8 + 0xe8))(local_1a8,&local_88,L"circuit/wire");
            (**(code **)(*local_88 + 0x68))(local_88);
            (**(code **)(*local_88 + 0x70))(local_88,&local_1b0);
            FUN_0041b890(&local_68,local_1b0,&DAT_01322d3c);
            while (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x100))(local_68,&local_b0,&PTR_DAT_01322d58);
              local_a0 = (longlong *)FUN_019ac500(*(undefined8 *)(local_28 + 0xa8),local_b0);
              if (local_a0 != (longlong *)0x0) {
                uVar6 = (**(code **)(*local_a0 + 0x210))(local_a0,0);
                local_298 = (wchar_t *)local_cc;
                local_290 = '\0';
                FUN_00f4d0d0(&local_b8,local_28,uVar6,0);
                if (local_b8 != 0) {
                  local_298._0_1_ = 1;
                  FUN_00450070(&local_1b8,local_b8,&DAT_01322d6c);
                  FUN_00414b50(&local_b8,local_1b8);
                  local_298 = (wchar_t *)CONCAT71(local_298._1_7_,1);
                  FUN_00450070(&local_1c0,local_b8,&DAT_01322d90);
                  FUN_00414b50(&local_b8,local_1c0);
                  (**(code **)(*local_68 + 0x108))(local_68,L"value",local_b8);
                }
                (**(code **)(*local_88 + 0x70))(local_88,&local_1c8);
                FUN_0041b890(&local_68,local_1c8,&DAT_01322d3c);
              }
            }
          }
          if (param_8 == (undefined1 *)0x0) {
            local_298 = (wchar_t *)((ulonglong)local_298 & 0xffffffffffffff00);
            local_290 = param_11;
            local_288 = param_12;
            local_280 = (undefined1 *)CONCAT71(local_280._1_7_,1);
            local_278 = param_7;
            local_270 = 0x14;
            FUN_019904f0(param_2,param_6,param_9,param_10);
          }
          else {
            local_298 = (wchar_t *)param_8;
            local_290 = '\x01';
            local_288 = (undefined8 *)CONCAT71(local_288._1_7_,1);
            FUN_0198f380(param_2,param_2,*(undefined8 *)(param_2 + 0x210),param_7);
          }
        }
      }
      else {
        if (0 < param_16) {
          *(undefined1 *)(local_28 + 0x12f1) = (undefined1)param_16;
        }
        FUN_012b9760(1,local_28,param_12,param_13);
      }
      FUN_01b07d50(local_28);
      FUN_00f51380(local_28,1);
      local_28 = 0;
    }
    else if (*(char *)(local_28 + 0x5db) == '\x05') {
      FUN_01b07d50(local_28);
      FUN_00f51380(local_28,1);
      local_28 = 0;
    }
    else {
      FUN_0131f8d0(local_28,param_4);
    }
  }
  local_19 = '\0';
  if (local_28 != 0) {
    if ((local_29 == '\0') && (*(char *)(local_28 + 0x49c) != '\x01')) {
      local_29 = '\0';
    }
    else {
      local_29 = '\x01';
    }
    FUN_01af2b10(*(undefined8 *)(local_28 + 0xf10));
    if ((*(char *)(local_28 + 0x49c) == '\x01') && (local_19 == '\0')) {
      FUN_01b07d50(local_28);
      FUN_00f51380(local_28,1);
      local_28 = 0;
    }
  }
  FUN_0041b800(&local_258);
  FUN_00414480(&local_250);
  FUN_00414520(&local_248);
  FUN_00414590(&local_240,2);
  FUN_00414480(&local_230);
  FUN_00414520(&local_228);
  FUN_00414590(&local_220,2);
  FUN_00414560(&local_210,2);
  FUN_0041b800(&local_200);
  FUN_0041b800(&local_1f8);
  FUN_0041b800(&local_1f0);
  FUN_0041b800(&local_1e8);
  FUN_0041b800(&local_1e0);
  FUN_0041b800(&local_1d8);
  FUN_00414480(&local_1d0);
  FUN_0041b800(&local_1c8);
  FUN_00414560(&local_1c0,2);
  FUN_0041b800(&local_1b0);
  FUN_0041b800(&local_1a8);
  FUN_0041b800(&local_1a0);
  FUN_00414560(&local_198,4);
  FUN_0041b800(&local_178);
  FUN_0041b800(&local_170);
  FUN_0041b800(&local_168);
  FUN_00414560(&local_160,2);
  FUN_0041b800(&local_150);
  FUN_00417840(&local_148,&LAB_00b9fca0,2);
  FUN_00414560(&local_138,3);
  FUN_00414520(&local_120);
  FUN_00414560(&local_118,3);
  FUN_00414560(&local_c8,4);
  FUN_00417840(&local_88,&DAT_00b9f960,3);
  FUN_00417840(&local_70,&LAB_00b9fca0,4);
  FUN_00414480(local_50);
  FUN_0041b800(local_40);
  FUN_00417840(&param_7,&DAT_00b9fc60,2);
  FUN_00414480(&param_13);
  return local_29;
}

