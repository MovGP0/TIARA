/* Ghidra address: 013911a0 */
/* Ghidra symbol: FUN_013911a0 */


/* WARNING: Removing unreachable block (ram,0x013925da) */

char FUN_013911a0(char param_1,longlong param_2,char param_3,char param_4,longlong param_5,
                 longlong *param_6,undefined1 *param_7,undefined4 param_8,undefined1 param_9,
                 char param_10,ulonglong param_11,undefined8 param_12,int param_13,char param_14)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_298 [32];
  wchar_t *local_278;
  char local_270;
  ulonglong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  longlong local_128;
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
  char local_c9;
  longlong local_c8;
  ulonglong local_c0;
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
  ulonglong local_50 [3];
  undefined8 local_38 [2];
  undefined8 *local_28;
  char local_1a;
  char local_19;
  
  local_100 = auStack_298;
  local_230 = 0;
  local_210 = 0;
  local_228 = 0;
  local_218 = 0;
  local_220 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1d8 = (longlong *)0x0;
  local_1c0 = 0;
  local_1c8 = (longlong *)0x0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = (longlong *)0x0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = (longlong *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = (longlong *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_50[0] = 0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_70 = (undefined8 *)0x0;
  local_38[0] = 0;
  local_78 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  FUN_0041b910(param_6);
  FUN_0041b910(param_7);
  FUN_00414610(param_12);
  local_1a = '\0';
  local_19 = 1;
  local_28 = (undefined8 *)0x0;
  if (param_11 == 0) {
    FUN_00414480(local_50);
  }
  else {
    FUN_00441640(&local_110,*(undefined8 *)(param_11 + 8));
    FUN_0044f8b0(&local_108,local_110);
    FUN_00441920(local_50,local_108);
  }
  *(int *)(param_2 + 0xde0) = param_13;
  if ((param_11 == 0) ||
     (((param_5 == 0 && (param_7 == (undefined1 *)0x0)) || (param_6 != (longlong *)0x0)))) {
    local_c9 = '\0';
  }
  else {
    local_c9 = '\x01';
  }
  local_278 = (wchar_t *)0x0;
  FUN_015fc970(&local_118,param_11,0,0);
  local_278 = (wchar_t *)CONCAT71(local_278._1_7_,param_1);
  local_268 = local_50[0];
  local_260 = param_12;
  local_258 = (longlong *)CONCAT71(local_258._1_7_,param_10);
  local_250 = CONCAT31(local_250._1_3_,1);
  local_248 = local_118;
  local_270 = param_4;
  local_28 = (undefined8 *)FUN_0138de60(&PTR_FUN_0138d958,1,param_2,8);
  local_28[0x264] = param_11;
  *(char *)((longlong)local_28 + 0x335) = local_c9;
  *(undefined1 *)((longlong)local_28 + 0x12f2) = param_9;
  FUN_013908e0(0,param_4,local_28);
  FUN_017d18e0(local_28,8);
  if (local_1a == '\0') {
    FUN_01af2a70(local_28[0x1e2],FUN_01390b40);
    lVar1 = local_28[0x1e2];
    *(undefined8 *)(lVar1 + 0x18) = 0x4059000000000000;
    if (*(char *)((longlong)local_28 + 0x5dc) == '\x02') {
      FUN_01af29b0(lVar1,2);
    }
    else {
      FUN_01af29b0(lVar1,3);
    }
    if (param_4 == '\x04') {
      FUN_01af29d0(local_28[0x1e2],4);
    }
    if (((param_1 == '\0') && (param_4 != '\x04')) && (*PTR_DAT_020023b0 == '\0')) {
      FUN_01af2ae0(local_28[0x1e2]);
    }
    FUN_01af2990(local_28[0x1e2],0);
    FUN_01390d00(local_28,param_4);
    if (*PTR_DAT_02002b78 != '\0') {
      FUN_016f6430(local_28,8,0);
      FUN_017dcfd0(local_28[0x1b],1,1);
      iVar8 = *(int *)(local_28[0x98] + 0x10);
      local_d4 = 0;
      if (-1 < iVar8 + -1) {
        do {
          uVar5 = FUN_01d347d0(local_28[0x98],local_d4);
          FUN_01390c30(local_28,uVar5);
          local_d4 = local_d4 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    FUN_01af2990(local_28[0x1e2],0x4059000000000000);
    if (*(char *)((longlong)local_28 + 0x49c) != '\x01') {
      if (param_4 == '\x04') {
        if (param_3 == '\0') {
          if (param_5 == 0) {
            if (param_6 == (longlong *)0x0) {
              if (param_7 == (undefined1 *)0x0) {
                FUN_0138fd60(local_28[0x15],local_28);
              }
              else {
                FUN_0138fd60(local_28[0x15],local_28);
                FUN_019af4e0(local_28[0x14]);
                local_278 = (wchar_t *)CONCAT71(local_278._1_7_,param_10);
                local_270 = param_14;
                local_268 = local_268 & 0xffffffffffffff00;
                local_260 = 0;
                local_258 = (longlong *)0x0;
                FUN_01299dd0(param_7,local_28[0x15],local_28[0x262],param_9);
                if (local_c9 != '\0') {
                  FUN_00441640(&local_1e0,*(undefined8 *)(param_11 + 8));
                  local_278 = L".txt";
                  FUN_00416cd0(&local_c0,3,local_1e0,param_12);
                  local_278 = (wchar_t *)local_28[0x27f];
                  FUN_0135a210(local_28,8,1,local_c0);
                }
              }
            }
            else {
              iVar8 = *(int *)(param_2 + 0x10);
              local_d4 = 0;
              if (-1 < iVar8 + -1) {
                do {
                  local_e0 = (longlong *)FUN_00b94e60(param_2,local_d4);
                  cVar2 = FUN_0198a580(local_e0);
                  plVar7 = local_e0;
                  if (cVar2 == '\x04') {
                    uVar3 = (**(code **)(*local_e0 + 0xf8))(local_e0);
                    local_d0 = (uint)uVar3;
                    (**(code **)(*plVar7 + 0x288))(plVar7,&local_c8);
                    if (local_c8 == 0) {
                      FUN_0043f750(&local_1b8,local_d4);
                      FUN_00416ba0(&local_c8,L"no_label_",local_1b8);
                    }
                    if ((byte)local_d0 < 0x78) {
                      uVar6 = ((ulonglong)(byte)local_d0 & 0x7f) + 0x20;
                      bVar9 = (*(byte *)((longlong)L"no_label_" + ((longlong)uVar6 >> 3) + 0x10) >>
                               (uVar6 & 7) & 1) != 0;
                    }
                    else {
                      bVar9 = false;
                    }
                    if (bVar9) {
                      plVar7 = (longlong *)FUN_0138ea30(local_e0,local_28);
                      (**(code **)(*plVar7 + 0x18))(plVar7,&local_b8,0);
                      (**(code **)(*param_6 + 0x100))(param_6,&local_1c8);
                      (**(code **)(*local_1c8 + 0xd8))(local_1c8,&local_1c0,&DAT_013930a8);
                      FUN_0041b890(&local_70,local_1c0,&DAT_01392f9c);
                      FUN_01391020(auStack_298,local_70,local_c8,local_b8);
                    }
                    else if ((byte)local_d0 < 0x40 &&
                             (1L << ((byte)local_d0 & 0x3f) & 0x400000040U) != 0) {
                      plVar7 = (longlong *)FUN_0138ea30(local_e0,local_28);
                      (**(code **)(*plVar7 + 0x18))(plVar7,&local_b8,0);
                      (**(code **)(*param_6 + 0x100))(param_6,&local_1d8);
                      (**(code **)(*local_1d8 + 0xd8))(local_1d8,&local_1d0,&DAT_013930c4);
                      FUN_0041b890(&local_70,local_1d0,&DAT_01392f9c);
                      FUN_01391020(auStack_298,local_70,local_c8,local_b8);
                    }
                  }
                  local_d4 = local_d4 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
            }
          }
          else {
            FUN_0138fd60(local_28[0x15],local_28);
            FUN_019af4e0(local_28[0x14]);
            if (local_c9 != '\0') {
              FUN_00441640(&local_120,*(undefined8 *)(param_11 + 8));
              local_278 = L".txt";
              FUN_00416cd0(&local_c0,3,local_120,param_12);
              local_278 = (wchar_t *)local_28[0x27f];
              FUN_0135a210(local_28,8,1,local_c0);
            }
            if ((param_6 != (longlong *)0x0) &&
               ((**(code **)(*param_6 + 0x100))(param_6,&local_128), local_128 != 0)) {
              (**(code **)(*param_6 + 0x100))(param_6,&local_130);
              (**(code **)(*local_130 + 0xe8))(local_130,&local_78,L"circuit/component");
              (**(code **)(*local_78 + 0x68))(local_78);
              (**(code **)(*local_78 + 0x70))(local_78,&local_138);
              FUN_0041b890(&local_58,local_138,&DAT_01392f9c);
              while (local_58 != (longlong *)0x0) {
                (**(code **)(*local_58 + 0x100))(local_58,&local_b0,&PTR_DAT_01392fb8);
                local_90 = (longlong *)FUN_019ac500(local_28[0x15],local_b0);
                if (local_90 != (longlong *)0x0) {
                  if (param_13 < 1) {
                    local_98 = (longlong *)0x0;
                  }
                  else {
                    local_a8 = FUN_012bedf0(*(undefined8 *)(param_2 + 0xd8),(undefined2)param_13);
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
                    local_278 = (wchar_t *)local_cc;
                    FUN_00f4fb30(&local_b8,local_28,local_90,1);
                  }
                  else {
                    local_278 = (wchar_t *)local_cc;
                    FUN_00f4daf0(&local_b8,local_28,local_90,1);
                  }
                  if (local_b8 != 0) {
                    local_278._0_1_ = 1;
                    FUN_00450070(&local_140,local_b8,&DAT_01392fcc,&DAT_01392fdc);
                    FUN_00414b50(&local_b8,local_140);
                    local_278 = (wchar_t *)CONCAT71(local_278._1_7_,1);
                    FUN_00450070(&local_148,local_b8,&DAT_01392ff0,0);
                    FUN_00414b50(&local_b8,local_148);
                    (**(code **)(*local_58 + 0x108))(local_58,L"value",local_b8);
                  }
                  (**(code **)(*local_78 + 0x70))(local_78,&local_150);
                  FUN_0041b890(&local_58,local_150,&DAT_01392f9c);
                }
              }
              (**(code **)(*param_6 + 0x100))(param_6,&local_158);
              (**(code **)(*local_158 + 0xe8))(local_158,&local_80,L"circuit/node");
              (**(code **)(*local_80 + 0x68))(local_80);
              (**(code **)(*local_80 + 0x70))(local_80,&local_160);
              FUN_0041b890(&local_60,local_160,&DAT_01392f9c);
              while (local_60 != (longlong *)0x0) {
                (**(code **)(*local_60 + 0x100))(local_60,&local_b0,&PTR_DAT_01392fb8);
                iVar8 = FUN_004170c0(&DAT_01393040,local_b0,1);
                FUN_00416dc0(&local_168,local_b0,1,iVar8 + -1);
                local_90 = (longlong *)FUN_019ac500(local_28[0x15],local_168);
                if (local_90 != (longlong *)0x0) {
                  local_ec = FUN_004170c0(&DAT_01393040,local_b0,1);
                  local_ec = local_ec + 1;
                  local_e8 = 0;
                  if (local_b0 != 0) {
                    local_e8 = *(undefined4 *)(local_b0 + -4);
                  }
                  FUN_00416dc0(&local_170,local_b0,local_ec,local_e8);
                  uVar4 = FUN_0043fc00(local_170);
                  uVar4 = (**(code **)(*local_90 + 0x210))(local_90,uVar4);
                  local_278 = (wchar_t *)local_cc;
                  local_270 = '\0';
                  FUN_00f4d0d0(&local_b8,local_28,uVar4,1);
                }
                if (local_b8 != 0) {
                  local_278._0_1_ = 1;
                  FUN_00450070(&local_178,local_b8,&DAT_01392fcc,&DAT_01392fdc);
                  FUN_00414b50(&local_b8,local_178);
                  local_278 = (wchar_t *)CONCAT71(local_278._1_7_,1);
                  FUN_00450070(&local_180,local_b8,&DAT_01392ff0,0);
                  FUN_00414b50(&local_b8,local_180);
                  (**(code **)(*local_60 + 0x108))(local_60,L"value",local_b8);
                }
                (**(code **)(*local_80 + 0x70))(local_80,&local_188);
                FUN_0041b890(&local_60,local_188,&DAT_01392f9c);
              }
              (**(code **)(*param_6 + 0x100))(param_6,&local_190);
              (**(code **)(*local_190 + 0xe8))(local_190,&local_88,L"circuit/wire");
              (**(code **)(*local_88 + 0x68))(local_88);
              (**(code **)(*local_88 + 0x70))(local_88,&local_198);
              FUN_0041b890(&local_68,local_198,&DAT_01392f9c);
              while (local_68 != (longlong *)0x0) {
                (**(code **)(*local_68 + 0x100))(local_68,&local_b0,&PTR_DAT_01392fb8);
                local_a0 = (longlong *)FUN_019ac500(local_28[0x15],local_b0);
                if (local_a0 != (longlong *)0x0) {
                  uVar4 = (**(code **)(*local_a0 + 0x210))(local_a0,0);
                  local_278 = (wchar_t *)local_cc;
                  local_270 = '\0';
                  FUN_00f4d0d0(&local_b8,local_28,uVar4,1);
                  if (local_b8 != 0) {
                    local_278._0_1_ = 1;
                    FUN_00450070(&local_1a0,local_b8,&DAT_01392fcc,&DAT_01392fdc);
                    FUN_00414b50(&local_b8,local_1a0);
                    local_278 = (wchar_t *)CONCAT71(local_278._1_7_,1);
                    FUN_00450070(&local_1a8,local_b8,&DAT_01392ff0,0);
                    FUN_00414b50(&local_b8,local_1a8);
                    (**(code **)(*local_68 + 0x108))(local_68,L"value",local_b8);
                  }
                  (**(code **)(*local_88 + 0x70))(local_88,&local_1b0);
                  FUN_0041b890(&local_68,local_1b0,&DAT_01392f9c);
                }
              }
            }
            if (param_7 == (undefined1 *)0x0) {
              local_278 = (wchar_t *)((ulonglong)local_278 & 0xffffffffffffff00);
              local_270 = param_10;
              local_268 = param_11;
              local_260 = CONCAT71(local_260._1_7_,8);
              local_258 = param_6;
              local_250 = 0x14;
              FUN_019904f0(param_2,param_5,param_8,param_9);
            }
            else {
              local_278 = (wchar_t *)param_7;
              local_270 = '\x01';
              local_268 = CONCAT71(local_268._1_7_,8);
              FUN_0198f380(param_2,param_2,*(undefined8 *)(param_2 + 0x210),param_6);
            }
          }
        }
        else {
          FUN_012b9760(0,local_28,param_11,param_12);
        }
        FUN_01b07d50(local_28);
        FUN_00f513f0(local_28,1);
        local_28 = (undefined8 *)0x0;
      }
      else if (*(char *)((longlong)local_28 + 0x5db) == '\x05') {
        FUN_01b07d50(local_28);
        FUN_00f513f0(local_28,1);
        local_28 = (undefined8 *)0x0;
      }
      else {
        FUN_0138fde0(&local_28,param_3);
      }
    }
  }
  local_19 = '\0';
  if (local_28 != (undefined8 *)0x0) {
    if ((local_1a == '\0') && (*(char *)((longlong)local_28 + 0x49c) != '\x01')) {
      local_1a = '\0';
    }
    else {
      local_1a = '\x01';
    }
    FUN_01af2b10(local_28[0x1e2]);
    if (*PTR_DAT_020052b8 != '\0') {
      FUN_017d2010(local_28,0);
    }
    if ((*(char *)((longlong)local_28 + 0x49c) == '\x01') && (local_19 == '\0')) {
      FUN_01b07d50(local_28);
      FUN_00f513f0(local_28,1);
      local_28 = (undefined8 *)0x0;
    }
  }
  if (*PTR_DAT_020028a0 != '\0') {
    *PTR_DAT_020028a0 = 0;
  }
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_013a48d0(*(undefined8 *)PTR_DAT_020032b8);
  }
  FUN_0041b800(&local_230);
  FUN_00414480(&local_228);
  FUN_00414520(&local_220);
  FUN_00414590(&local_218,2);
  FUN_00414480(&local_208);
  FUN_00414520(&local_200);
  FUN_00414590(&local_1f8,2);
  FUN_00414560(&local_1e8,2);
  FUN_0041b800(&local_1d8);
  FUN_0041b800(&local_1d0);
  FUN_0041b800(&local_1c8);
  FUN_0041b800(&local_1c0);
  FUN_00414480(&local_1b8);
  FUN_0041b800(&local_1b0);
  FUN_00414560(&local_1a8,2);
  FUN_0041b800(&local_198);
  FUN_0041b800(&local_190);
  FUN_0041b800(&local_188);
  FUN_00414560(&local_180,4);
  FUN_0041b800(&local_160);
  FUN_0041b800(&local_158);
  FUN_0041b800(&local_150);
  FUN_00414560(&local_148,2);
  FUN_0041b800(&local_138);
  FUN_00417840(&local_130,&LAB_00b9fca0,2);
  FUN_00414560(&local_120,4);
  FUN_00414560(&local_c8,4);
  FUN_00417840(&local_88,&DAT_00b9f960,3);
  FUN_00417840(&local_70,&LAB_00b9fca0,4);
  FUN_00414480(local_50);
  FUN_0041b800(local_38);
  FUN_00417840(&param_6,&DAT_00b9fc60,2);
  FUN_00414480(&param_12);
  return local_1a;
}

