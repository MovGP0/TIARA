/* Ghidra address: 01558b00 */
/* Ghidra symbol: FUN_01558b00 */


void FUN_01558b00(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  wchar_t *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  int local_1cc;
  wchar_t *local_1c8;
  undefined8 local_1c0;
  wchar_t *local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  wchar_t *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  wchar_t *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120 [2];
  undefined1 local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_94;
  double local_90;
  double local_88;
  double local_80;
  undefined *local_78;
  undefined *local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_31;
  double *local_30;
  
  local_1c8 = (wchar_t *)0x0;
  local_1c0 = 0;
  local_1b8 = (wchar_t *)0x0;
  local_1b0 = 0;
  local_1a8 = (wchar_t *)0x0;
  local_1a0 = (wchar_t *)0x0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = (wchar_t *)0x0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_158 = 0;
  local_160 = (undefined *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_138 = 0;
  local_140 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120[0] = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = (undefined *)0x0;
  local_d8 = 0;
  local_70 = (undefined *)0x0;
  local_78 = (undefined *)0x0;
  local_e0 = 0;
  local_e8 = (undefined *)0x0;
  local_f0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_f8 = (undefined *)0x0;
  local_b0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_b8 = (undefined *)0x0;
  FUN_00414b50(&local_b8,L"top_");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"------------------------------------");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"-- testbench section");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"------------------------------------");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"library ieee;");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"use std.textio.all;");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"use ieee.std_logic_1164.all;");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"use ieee.std_logic_arith.all;");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  local_208 = L" is";
  FUN_00416cd0(local_120,3,L"entity ",*(undefined8 *)(param_1 + 0x780));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),local_120[0]);
  local_208 = L";";
  FUN_00416cd0(&local_128,3,L"end ",*(undefined8 *)(param_1 + 0x780));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_128);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  local_208 = L" IS";
  FUN_00416cd0(&local_130,3,L"ARCHITECTURE behavior of ",*(undefined8 *)(param_1 + 0x780));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_130);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  local_1cc = 0;
  if (-1 < iVar10 + -1) {
    do {
      lVar8 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),local_1cc);
      FUN_00414ad0(param_1 + 0xa10,*(undefined8 *)PTR_PTR_02001278);
      if ((*(longlong *)(param_1 + 0x938) == 0) ||
         (cVar2 = FUN_00e0f210(*(longlong *)(param_1 + 0x938),*(undefined4 *)(lVar8 + 0x30),
                               param_1 + 0xa10), cVar2 == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0xa08) = uVar3;
      FUN_01550c40(param_1,&local_140,lVar8);
      FUN_00416ba0(&local_138,local_b8,local_140);
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x78))
                (*(longlong **)(param_1 + 0x60),local_138);
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                (*(longlong **)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa10));
      local_1cc = local_1cc + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  local_1cc = 0;
  if (-1 < iVar10 + -1) {
    do {
      lVar8 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),local_1cc);
      FUN_00414ad0(param_1 + 0xa10,*(undefined8 *)PTR_PTR_02001278);
      if ((*(longlong *)(param_1 + 0x938) == 0) ||
         (cVar2 = FUN_00e0f210(*(longlong *)(param_1 + 0x938),*(undefined4 *)(lVar8 + 0x30),
                               param_1 + 0xa10), cVar2 == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(param_1 + 0xa08) = uVar3;
      FUN_0043e1a0(&local_148,*(undefined8 *)(param_1 + 0xa10));
      iVar5 = FUN_00416db0(local_148,L"real");
      if (iVar5 != 0) {
        FUN_0043e1a0(&local_150,*(undefined8 *)(param_1 + 0xa10));
        iVar5 = FUN_00416db0(local_150,L"std_logic");
        if (iVar5 != 0) {
          FUN_01550c40(param_1,&local_160,lVar8);
          local_208 = (wchar_t *)local_160;
          local_200 = L" : ";
          local_1f8 = &DAT_0155a8ec;
          local_1f0 = *(undefined **)(param_1 + 0xa10);
          local_1e8 = &DAT_0155a81c;
          FUN_00416cd0(&local_158,7,L" signal ",local_b8);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_158);
        }
      }
      local_1cc = local_1cc + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_01557ef0(param_1,L"std_logic",2);
  FUN_01557ef0(param_1,L"real",2);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),L"BEGIN");
  local_208 = L" port map( ";
  FUN_00416cd0(&local_168,3,L" UUT: ",*(undefined8 *)(param_1 + 0x760));
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),local_168);
  lVar8 = *(longlong *)(param_1 + 0x750);
  iVar10 = *(int *)(lVar8 + 0x10);
  local_1cc = 0;
  if (-1 < iVar10 + -1) {
    do {
      FUN_00414b50(&local_b0,&DAT_0155a954);
      uVar9 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),local_1cc);
      *(undefined8 *)(param_1 + 0x28) = uVar9;
      FUN_01550c40(param_1,&local_d0,uVar9);
      local_208 = L" => ";
      local_200 = (wchar_t *)local_b8;
      local_1f8 = local_d0;
      FUN_00416cd0(&local_b0,5,local_b0,local_d0);
      FUN_00416ba0(&local_170,local_b8,local_d0);
      FUN_01575810(*(undefined8 *)(param_1 + 0x8d0),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30),local_170);
      if (local_1cc < *(int *)(lVar8 + 0x10) + -1) {
        FUN_00416ad0(&local_b0,&DAT_0155a980);
      }
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                (*(longlong **)(param_1 + 0x8f8),local_b0);
      local_1cc = local_1cc + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),&DAT_0155a994);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  local_1cc = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar9 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),local_1cc);
      *(undefined8 *)(param_1 + 0x28) = uVar9;
      cVar2 = FUN_0154d500(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40));
      if ((((cVar2 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) != 0)) &&
          (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) + 0x3d2) == '\0')) &&
         (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) + 0x560) == '\0')) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,0,&local_30);
        local_50 = *local_30;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,4,&local_30);
        local_68 = *local_30;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,5,&local_30);
        local_60 = *local_30;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,6,&local_30);
        local_40 = *(undefined1 *)local_30;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,7,&local_30);
        local_3f = *(undefined1 *)local_30;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,1,&local_30);
        local_58 = *local_30;
        if (local_50 == 0.0) {
          FUN_015fcf20(L"Clock frequency is 0!",0,0,0);
        }
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,2,&local_30);
        local_3e = *(undefined1 *)local_30;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x40);
        local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,3,&local_30);
        local_3d = *(undefined1 *)local_30;
        FUN_015f56d0(&local_e8,local_3d);
        FUN_015f56d0(&local_f0,local_3e);
        FUN_015f56d0(&local_70,local_40);
        FUN_015f56d0(&local_78,local_3f);
        local_80 = local_58 / local_50;
        local_88 = (1.0 - local_58) / local_50;
        uVar9 = FUN_00e06db0(&DAT_00e06cd8,1,&local_68);
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90) = uVar9;
        if (local_60 < *(double *)(param_1 + 0xa48) || local_60 == *(double *)(param_1 + 0xa48)) {
          local_90 = local_60;
        }
        else {
          local_90 = *(double *)(param_1 + 0xa48);
        }
        local_94 = FUN_0040c770((local_90 - local_68) / (local_80 + local_88));
        FUN_015f0a10(&local_a0,local_80,2);
        FUN_015f0a10(&local_a8,local_88,2);
        FUN_01550c40(param_1,&local_178,*(undefined8 *)(param_1 + 0x28));
        local_208 = (wchar_t *)local_178;
        local_200 = L": process";
        FUN_00416cd0(&local_b0,4,L"CLOCK_",DAT_01f62918);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),local_b0);
        if (((*(char *)(param_1 + 0x950) != '\0') ||
            (*(double *)(param_1 + 0xa48) <= local_60 && local_60 != *(double *)(param_1 + 0xa48)))
           && (0.0 < local_68)) {
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),L"  variable init: boolean := true;");
        }
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),L"begin");
        if (((*(char *)(param_1 + 0x950) != '\0') ||
            (*(double *)(param_1 + 0xa48) <= local_60 && local_60 != *(double *)(param_1 + 0xa48)))
           && (0.0 < local_68)) {
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),L"   if init then ");
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),L"    init := false; ");
        }
        FUN_01550c40(param_1,&local_180,*(undefined8 *)(param_1 + 0x28));
        local_208 = local_180;
        local_200 = L" <= ";
        local_1f8 = local_70;
        local_1f0 = &DAT_0155a81c;
        FUN_00416cd0(&local_b0,6,&DAT_0155a954,local_b8);
        if (0.0 < local_68) {
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
        }
        if (0.0 < local_68) {
          FUN_015f0a10(&local_108,local_68,2);
          local_208 = L";";
          FUN_00416cd0(&local_b0,3,L"   wait for ",local_108);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          FUN_00414480(&local_b0);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
        }
        if (((*(char *)(param_1 + 0x950) != '\0') ||
            (*(double *)(param_1 + 0xa48) <= local_60 && local_60 != *(double *)(param_1 + 0xa48)))
           && (0.0 < local_68)) {
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),L"   end if; ");
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
        }
        if ((*(char *)(param_1 + 0x950) != '\0') ||
           (*(double *)(param_1 + 0xa48) <= local_60 && local_60 != *(double *)(param_1 + 0xa48))) {
LAB_01559bc4:
          FUN_01550c40(param_1,&local_190,*(undefined8 *)(param_1 + 0x28));
          local_208 = (wchar_t *)local_190;
          local_200 = L" <= ";
          local_1f8 = (undefined *)local_f0;
          local_1f0 = &DAT_0155a81c;
          FUN_00416cd0(&local_b0,6,&DAT_0155a954,local_b8);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          local_208 = L";";
          FUN_00416cd0(&local_b0,3,L"   wait for ",local_a0);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          FUN_01550c40(param_1,&local_198,*(undefined8 *)(param_1 + 0x28));
          local_208 = (wchar_t *)local_198;
          local_200 = L" <= ";
          local_1f8 = local_e8;
          local_1f0 = &DAT_0155a81c;
          FUN_00416cd0(&local_b0,6,&DAT_0155a954,local_b8);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          local_208 = L";";
          FUN_00416cd0(&local_b0,3,L"   wait for ",local_a8);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          if ((*(char *)(param_1 + 0x950) == '\0') &&
             (local_60 < *(double *)(param_1 + 0xa48) || local_60 == *(double *)(param_1 + 0xa48)))
          {
            FUN_00414b50(&local_b0,L"  end loop;");
            (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                      (*(longlong **)(param_1 + 0x8f8),local_b0);
          }
        }
        else if (0 < local_94) {
          FUN_01d43440(&local_188,local_94);
          local_208 = L" loop";
          FUN_00416cd0(&local_b0,3,L"  for i in 1 to ",local_188);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          goto LAB_01559bc4;
        }
        FUN_00414480(&local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),local_b0);
        if ((*(char *)(param_1 + 0x950) == '\0') &&
           (local_60 < *(double *)(param_1 + 0xa48) || local_60 == *(double *)(param_1 + 0xa48))) {
          FUN_01550c40(param_1,&local_1a0,*(undefined8 *)(param_1 + 0x28));
          local_208 = local_1a0;
          local_200 = L" <= ";
          local_1f8 = local_78;
          local_1f0 = &DAT_0155a81c;
          FUN_00416cd0(&local_b0,6,&DAT_0155abb8,local_b8);
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
          FUN_00414b50(&local_b0,L"  wait;");
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),local_b0);
        }
        FUN_01550c40(param_1,&local_1a8,*(undefined8 *)(param_1 + 0x28));
        local_208 = local_1a8;
        local_200 = L";";
        FUN_00416cd0(&local_b0,4,L"end process CLOCK_");
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
      }
      local_1cc = local_1cc + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_015581d0(auStack_228);
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x750) + 0x10);
  local_1cc = 0;
  if (-1 < iVar10 + -1) {
    do {
      uVar9 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x750),local_1cc);
      *(undefined8 *)(param_1 + 0x28) = uVar9;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40);
      if (((((lVar8 != 0) && (*(char *)(lVar8 + 0x560) == '\0')) &&
           (cVar2 = FUN_0154d500(param_1,lVar8), cVar2 == '\0')) &&
          (((cVar2 = FUN_0154d550(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40)),
            cVar2 == '\0' && (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) != 0)) &&
           (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x40) + 0x3d2) == '\0')))) ||
         (*(int *)(*(longlong *)(param_1 + 0x28) + 0x38) != -1)) {
        FUN_01550c40(param_1,&local_1b0,*(undefined8 *)(param_1 + 0x28));
        FUN_00416ba0(param_1 + 0x738,local_b8,local_1b0);
        FUN_01550c40(param_1,&local_1b8,*(undefined8 *)(param_1 + 0x28));
        local_208 = local_1b8;
        local_200 = L": process";
        FUN_00416cd0(&local_b0,4,L"STIMULUS_",DAT_01f62918);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),L"   begin");
        iVar5 = 0;
        iVar7 = 0;
        lVar8 = *(longlong *)(param_1 + 0x28);
        plVar1 = *(longlong **)(lVar8 + 0x40);
        if (plVar1 == (longlong *)0x0) {
          if (*(int *)(lVar8 + 0x38) != -1) {
            lVar8 = *(longlong *)(lVar8 + 0x48);
            if (*(longlong *)(lVar8 + 0x528) == 0) {
              sVar4 = FUN_01d03160(lVar8);
            }
            else {
              sVar4 = FUN_01d03160(*(longlong *)(lVar8 + 0x528));
            }
            if (*(char *)(param_1 + 0x958) == '\0') {
              if (sVar4 == 0x2900) {
                FUN_015f4fe0(&local_f8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38));
              }
              else if (sVar4 == 0x45f) {
                FUN_00414b50(&local_f8,&DAT_0155ac5c);
              }
              else if ((sVar4 == 3000) || (sVar4 == 0x88)) {
                iVar5 = FUN_015f55b0(lVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30));
                if ((iVar5 == 0) && (sVar4 == 3000)) {
                  FUN_00414b50(&local_f8,&DAT_0155ac6c);
                }
                else {
                  FUN_015f5040(&local_f8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38),iVar5
                               ,sVar4);
                }
              }
              else if (sVar4 == 0x89) {
                uVar6 = FUN_015f55b0(lVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30));
                FUN_015f5100(&local_f8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38),uVar6);
              }
              else if (sVar4 == 0x8c) {
                FUN_0043f750(&local_f8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38));
              }
              else if (sVar4 == 0xa2) {
                uVar6 = FUN_015f55b0(lVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30));
                FUN_015f53f0(&local_f8,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38),uVar6);
              }
              iVar5 = iVar7;
              if ((sVar4 == 0x45f) || (cVar2 = _IsASMMode(), cVar2 == '\0')) {
                local_208 = L" <= ";
                local_200 = L"\'";
                local_1f8 = local_f8;
                local_1f0 = &DAT_0155ac7c;
                local_1e8 = &DAT_0155a81c;
                FUN_00416cd0(&local_1c0,7,&DAT_0155a954,*(undefined8 *)(param_1 + 0x738));
                (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                          (*(longlong **)(param_1 + 0x8f8),local_1c0);
              }
              else {
                iVar7 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x6e0),lVar8);
                if ((iVar7 == -1) && (sVar4 != 0x45f)) {
                  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x6e0),lVar8);
                }
              }
            }
          }
        }
        else {
          sVar4 = FUN_01d03160(plVar1);
          if ((sVar4 == 0x3ec) || (sVar4 == 0x4b0)) {
            local_31 = (**(code **)(*plVar1 + 0x2d0))(plVar1,1,&local_30);
            iVar5 = *(int *)((longlong)local_30[1] + 0x20);
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            if ((iVar5 == 0) && (0 < *(int *)(local_30 + 3))) {
              iVar5 = 1;
            }
          }
          FUN_0155ad00(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x40),0,iVar5);
        }
        if (iVar5 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),L"   wait;");
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                    (*(longlong **)(param_1 + 0x8f8),L"  end loop;");
        }
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
        FUN_01550c40(param_1,&local_1c8,*(undefined8 *)(param_1 + 0x28));
        local_208 = local_1c8;
        local_200 = L";";
        FUN_00416cd0(&local_b0,4,L"end process STIMULUS_",DAT_01f62918);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
                  (*(longlong **)(param_1 + 0x8f8),local_b0);
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
      }
      local_1cc = local_1cc + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  uVar3 = FUN_00e0f3b0(*(undefined8 *)(param_1 + 0x938),*(undefined8 *)PTR_PTR_020038b0,local_110);
  *(undefined1 *)(param_1 + 0xa08) = uVar3;
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))
            (*(longlong **)(param_1 + 0x8f8),L"END behavior;");
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x78))(*(longlong **)(param_1 + 0x8f8),0);
  FUN_00414560(&local_1c8,0x16);
  FUN_00414560(&local_108,0xe);
  FUN_00414560(&local_78,2);
  return;
}

