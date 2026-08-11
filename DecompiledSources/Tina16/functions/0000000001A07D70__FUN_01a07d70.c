/* Ghidra address: 01a07d70 */
/* Ghidra symbol: FUN_01a07d70 */


void FUN_01a07d70(longlong param_1,short param_2)

{
  undefined2 uVar1;
  double *pdVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_368 [32];
  wchar_t *local_348;
  undefined1 *local_340;
  undefined **local_338;
  undefined8 local_330;
  wchar_t *local_328;
  int local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
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
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
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
  undefined1 *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_d6;
  undefined1 local_d5;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  char *local_c0;
  char *local_b0;
  double local_a8;
  char local_99;
  int local_98;
  int local_94;
  longlong local_90;
  undefined1 local_83;
  undefined2 local_82;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_e0 = auStack_368;
  local_2f8 = 0;
  local_300 = 0;
  local_310 = 0;
  local_308 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2a0 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_290 = 0;
  local_298 = 0;
  local_268 = 0;
  local_270 = 0;
  local_280 = 0;
  local_288 = 0;
  local_278 = 0;
  local_248 = 0;
  local_250 = 0;
  local_260 = 0;
  local_258 = 0;
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_210 = 0;
  local_218 = 0;
  local_228 = 0;
  local_220 = 0;
  local_200 = 0;
  local_208 = (undefined1 *)0x0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = (undefined1 *)0x0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_168 = 0;
  local_170 = 0;
  local_148 = 0;
  local_158 = 0;
  local_160 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_110 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  if (*(byte *)(param_1 + 0xc0) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0xc0) & 0x1f)
            & 3U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    if (param_2 == 0x3ec) {
      local_30 = 0;
      local_e0 = auStack_368;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_f0);
      local_348 = (wchar_t *)CONCAT44(local_348._4_4_,0xb);
      FUN_019ee820(param_1,&local_e8,0x13,local_f0);
      FUN_00416ba0(&local_30,local_e8,L" STIM(1,1) ");
      FUN_00414480(&local_38);
      local_d5 = *(char *)(param_1 + 0xc0) == '\x04';
      if ((bool)local_d5) {
        FUN_00414b50(&local_38,&DAT_01a098e8);
      }
      else {
        FUN_00414b50(&local_38,L"$G_DPWR");
      }
      FUN_019f0400(param_1,&local_100,0,0);
      FUN_019f0400(param_1,&local_108,1,0);
      local_348 = L" ";
      local_340 = (undefined1 *)local_100;
      local_338 = (undefined **)&DAT_01a09918;
      local_330 = local_108;
      local_328 = L" IO_STM";
      FUN_00416cd0(&local_f8,7,local_30,local_38);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_f8);
      FUN_00414480(&local_30);
      FUN_00414480(&local_38);
    }
    else {
      local_40 = 0;
      local_e0 = auStack_368;
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_118);
      local_348 = (wchar_t *)CONCAT44(local_348._4_4_,0xb);
      FUN_019ee820(param_1,&local_110,0x13,local_118);
      FUN_00416ba0(&local_40,local_110,L" STIM(1,1) ");
      FUN_00414480(&local_48);
      local_d6 = *(char *)(param_1 + 0xc0) == '\x04';
      if ((bool)local_d6) {
        FUN_00414b50(&local_48,&DAT_01a098e8);
      }
      else {
        FUN_00414b50(&local_48,L"$G_DPWR");
      }
      local_348 = (wchar_t *)((ulonglong)local_348 & 0xffffffffffffff00);
      FUN_01a04e90(param_1,&local_128,4,0);
      FUN_019f0400(param_1,&local_130,0,0);
      local_348 = L" ";
      local_340 = (undefined1 *)local_128;
      local_338 = (undefined **)&DAT_01a09918;
      local_330 = local_130;
      local_328 = L" IO_STM";
      FUN_00416cd0(&local_120,7,local_40,local_48);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_120)
      ;
      FUN_00414480(&local_40);
      FUN_00414480(&local_48);
    }
    *(undefined1 *)(param_1 + 0x89) = 1;
    local_99 = '\0';
    local_348 = &local_82;
    local_340 = &local_83;
    local_b0 = (char *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),2,0,(longlong)&local_82 + 1);
    if (*local_b0 == '\x01') {
      local_90 = *(longlong *)(local_b0 + 8);
      local_98 = *(int *)(local_90 + 0x10);
      if ((local_98 == 1) ||
         ((1 < local_98 && (pdVar2 = (double *)FUN_01d3aab0(local_90,1), *pdVar2 != 0.0)))) {
        lVar3 = FUN_01d3aab0(local_90,0);
        FUN_016d7040(&local_140,*(undefined1 *)(lVar3 + 8));
        FUN_00416ba0(&local_138,L"+      0 ",local_140);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_138);
        if ((1 < local_98) && (0 < *(int *)(local_b0 + 0x18))) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),L"+  REPEAT FOREVER");
          local_99 = '\x01';
        }
      }
      iVar5 = local_98 + -1;
      local_94 = 1;
      if (0 < iVar5) {
        do {
          uVar1 = (undefined2)local_94;
          puVar4 = (undefined8 *)FUN_01d3aab0(local_90,(undefined2)local_94);
          FUN_016b9450(&local_150,*puVar4);
          local_348 = L" ";
          FUN_00415980(&local_148,3,"+      ",local_150);
          FUN_00416880(&local_158,local_148);
          lVar3 = FUN_01d3aab0(local_90,uVar1);
          FUN_016d7040(&local_160,*(undefined1 *)(lVar3 + 8));
          FUN_00416ad0(&local_158,local_160);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_158);
          if (((local_99 == '\0') && (local_94 == 1)) && (0 < *(int *)(local_b0 + 0x18))) {
            (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                      (*(longlong **)(param_1 + 0x20),L"+  REPEAT FOREVER");
            local_99 = '\x01';
          }
          local_94 = local_94 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_99 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),L"+  ENDREPEAT");
      }
    }
    else if (*local_b0 != '\x02') {
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                (*(longlong **)(param_1 + 0x20),L"+      0 0 ; No input specified");
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
              (*(longlong **)(param_1 + 0x58),&local_170);
    local_348 = (wchar_t *)CONCAT44(local_348._4_4_,0xb);
    FUN_019ee820(param_1,&local_168,0x14,local_170);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_168);
    if (param_2 == 0x3ec) {
      FUN_019f0400(param_1,&local_180,0,0);
      FUN_019f0400(param_1,&local_188,1,0);
      local_348 = (wchar_t *)local_188;
      FUN_00416cd0(&local_178,3,local_180,&DAT_01a09918);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_178);
    }
    else {
      FUN_019f0400(param_1,&local_198,0,0);
      local_348 = (wchar_t *)((ulonglong)local_348 & 0xffffffffffffff00);
      FUN_01a04e90(param_1,&local_1a0,4,0);
      local_348 = (wchar_t *)local_1a0;
      FUN_00416cd0(&local_190,3,local_198,&DAT_01a09918);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_190);
    }
    local_348 = &local_82;
    local_340 = &local_83;
    local_c0 = (char *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),2,0,(longlong)&local_82 + 1);
    if (*local_c0 == '\x01') {
      local_90 = *(longlong *)(local_c0 + 8);
      local_98 = *(int *)(local_90 + 0x10);
      local_20 = FUN_019ed630(param_1,3,0);
      local_a8 = (double)FUN_019ed630(param_1,1,0);
      if (local_98 < 2) {
        if (*(char *)(param_1 + 0xc0) == '\x04') {
          lVar3 = FUN_01d3aab0(local_90,0);
          FUN_01a07cb0(auStack_368,&local_298,*(undefined1 *)(lVar3 + 8),local_20);
          FUN_00416ba0(&local_290,L" PWL NSEG=1 X0=0 Y0=",local_298);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_290);
          FUN_016b9450(&local_2a8,*(undefined8 *)(param_1 + 0x37b));
          local_348 = L"夠㴱";
          FUN_00415980(&local_2a0,3,&DAT_01a09b84,local_2a8);
          FUN_00416880(&local_2b0,local_2a0);
          FUN_00416ad0(&local_2b0,local_28);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_2b0);
        }
        else if (*(char *)(param_1 + 0xc0) == '\x05') {
          lVar3 = FUN_01d3aab0(local_90,0);
          FUN_01a07cb0(auStack_368,&local_2c0,*(undefined1 *)(lVar3 + 8),local_20);
          local_348 = L" ";
          FUN_00416cd0(&local_2b8,3,L" PWL 0, ",local_2c0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_2b8);
          FUN_016b9450(&local_2d8,*(undefined8 *)(param_1 + 0x37b));
          local_348 = L" ";
          FUN_00415980(&local_2d0,3,&DAT_01a099a8,local_2d8);
          FUN_00416880(&local_2e0,local_2d0);
          local_348 = L" ";
          FUN_00416cd0(&local_2c8,3,local_2e0,local_28);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_2c8);
        }
        else {
          lVar3 = FUN_01d3aab0(local_90,0);
          FUN_01a07cb0(auStack_368,&local_2f0,*(undefined1 *)(lVar3 + 8),local_20);
          local_348 = L")";
          FUN_00416cd0(&local_2e8,3,L" PWL (0, ",local_2f0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_2e8);
          FUN_016b9450(&local_308,*(undefined8 *)(param_1 + 0x37b));
          local_348 = L" ";
          FUN_00415980(&local_300,3,&DAT_01a09bcc,local_308);
          FUN_00416880(&local_310,local_300);
          local_348 = L") ";
          FUN_00416cd0(&local_2f8,3,local_310,local_28);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_2f8);
        }
      }
      else {
        if (*(char *)(param_1 + 0xc0) == '\x04') {
          FUN_00414480(&local_50);
          local_c4 = (local_98 + -1) * 2;
          FUN_0043f750(&local_50,local_c4);
          lVar3 = FUN_01d3aab0(local_90,0);
          FUN_01a07cb0(auStack_368,&local_1b0,*(undefined1 *)(lVar3 + 8),local_20);
          local_348 = L" X0=0 Y0=";
          local_340 = local_1b0;
          FUN_00416cd0(&local_1a8,4,L" PWL NSEG=",local_50);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_1a8);
          FUN_00414480(&local_50);
        }
        else if (*(char *)(param_1 + 0xc0) == '\x05') {
          lVar3 = FUN_01d3aab0(local_90,0);
          FUN_01a07cb0(auStack_368,&local_1c0,*(undefined1 *)(lVar3 + 8),local_20);
          local_348 = L" ";
          FUN_00416cd0(&local_1b8,3,L" PWL 0 ",local_1c0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_1b8);
        }
        else {
          lVar3 = FUN_01d3aab0(local_90,0);
          FUN_01a07cb0(auStack_368,&local_1d0,*(undefined1 *)(lVar3 + 8),local_20);
          local_348 = L")";
          FUN_00416cd0(&local_1c8,3,L" PWL (0, ",local_1d0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_1c8);
        }
        local_314 = local_98 + -1;
        local_94 = 1;
        if (0 < local_314) {
          do {
            if (*(char *)(param_1 + 0xc0) == '\x04') {
              FUN_00414480(&local_68);
              iVar5 = local_94 * 2 + -1;
              local_c8 = iVar5;
              FUN_0043f750(&local_68,iVar5);
              local_58 = 0;
              puVar4 = (undefined8 *)FUN_01d3aab0(local_90,(undefined2)local_94);
              FUN_016b9450(&local_1d8,*puVar4);
              FUN_00416880(&local_1e0,local_1d8);
              local_348 = L"=";
              local_340 = (undefined1 *)local_1e0;
              local_338 = &PTR_DAT_01a09ae0;
              FUN_00416cd0(&local_58,5,&DAT_01a09abc,local_68);
              FUN_00414480(&local_60);
              local_cc = iVar5;
              FUN_0043f750(&local_60,iVar5);
              local_348 = L"=";
              local_340 = (undefined1 *)local_28;
              FUN_00416cd0(&local_1e8,4,local_58,local_60);
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                        (*(longlong **)(param_1 + 0x20),local_1e8);
              FUN_00414480(&local_58);
              FUN_00414480(&local_60);
              FUN_00414480(&local_68);
              FUN_00414480(&local_80);
              iVar5 = local_94 * 2;
              local_d0 = iVar5;
              FUN_0043f750(&local_80,iVar5);
              local_70 = 0;
              uVar1 = (undefined2)local_94;
              pdVar2 = (double *)FUN_01d3aab0(local_90,(undefined2)local_94);
              FUN_016b9450(&local_1f0,*pdVar2 + local_a8);
              FUN_00416880(&local_1f8,local_1f0);
              local_348 = L"=";
              local_340 = (undefined1 *)local_1f8;
              local_338 = &PTR_DAT_01a09ae0;
              FUN_00416cd0(&local_70,5,&PTR_PTR_01a09af4,local_80);
              FUN_00414480(&local_78);
              local_d4 = iVar5;
              FUN_0043f750(&local_78,iVar5);
              lVar3 = FUN_01d3aab0(local_90,uVar1);
              FUN_01a07cb0(auStack_368,&local_208,*(undefined1 *)(lVar3 + 8),local_20);
              local_348 = L"=";
              local_340 = local_208;
              FUN_00416cd0(&local_200,4,local_70,local_78);
              (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                        (*(longlong **)(param_1 + 0x20),local_200);
              FUN_00414480(&local_70);
              FUN_00414480(&local_78);
              FUN_00414480(&local_80);
            }
            else {
              uVar1 = (undefined2)local_94;
              if (*(char *)(param_1 + 0xc0) == '\x05') {
                puVar4 = (undefined8 *)FUN_01d3aab0(local_90,(undefined2)local_94);
                FUN_016b9450(&local_220,*puVar4);
                local_348 = L" ";
                FUN_00415980(&local_218,3,&DAT_01a09b08,local_220);
                FUN_00416880(&local_228,local_218);
                local_348 = L" ";
                FUN_00416cd0(&local_210,3,local_228,local_28);
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                          (*(longlong **)(param_1 + 0x20),local_210);
                pdVar2 = (double *)FUN_01d3aab0(local_90,uVar1);
                FUN_016b9450(&local_230,*pdVar2 + local_a8);
                FUN_004155b0(&local_230,&DAT_01a099a8);
                FUN_00416880(&local_238,local_230);
                lVar3 = FUN_01d3aab0(local_90,uVar1);
                FUN_01a07cb0(auStack_368,&local_240,*(undefined1 *)(lVar3 + 8),local_20);
                FUN_00416ad0(&local_238,local_240);
                (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                          (*(longlong **)(param_1 + 0x20),local_238);
              }
              else {
                puVar4 = (undefined8 *)FUN_01d3aab0(local_90,(undefined2)local_94);
                FUN_016b9450(&local_258,*puVar4);
                local_348 = L" ";
                FUN_00415980(&local_250,3,&DAT_01a09b18,local_258);
                FUN_00416880(&local_260,local_250);
                local_348 = L") ";
                FUN_00416cd0(&local_248,3,local_260,local_28);
                (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                          (*(longlong **)(param_1 + 0x20),local_248);
                pdVar2 = (double *)FUN_01d3aab0(local_90,uVar1);
                FUN_016b9450(&local_278,*pdVar2 + local_a8);
                local_348 = L" ";
                FUN_00415980(&local_270,3,&DAT_01a09b3c,local_278);
                FUN_00416880(&local_280,local_270);
                lVar3 = FUN_01d3aab0(local_90,uVar1);
                FUN_01a07cb0(auStack_368,&local_288,*(undefined1 *)(lVar3 + 8),local_20);
                local_348 = L")";
                FUN_00416cd0(&local_268,3,local_280,local_288);
                (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                          (*(longlong **)(param_1 + 0x20),local_268);
              }
            }
            local_94 = local_94 + 1;
            local_314 = local_314 + -1;
          } while (local_314 != 0);
        }
      }
    }
  }
  FUN_00414480(&local_310);
  FUN_00414590(&local_308,2);
  FUN_00414560(&local_2f8,4);
  FUN_00414590(&local_2d8,2);
  FUN_00414560(&local_2c8,4);
  FUN_00414590(&local_2a8,2);
  FUN_00414560(&local_298,4);
  FUN_00414590(&local_278,2);
  FUN_00414560(&local_268,2);
  FUN_00414590(&local_258,2);
  FUN_00414560(&local_248,3);
  FUN_004144d0(&local_230);
  FUN_00414480(&local_228);
  FUN_00414590(&local_220,2);
  FUN_00414560(&local_210,4);
  FUN_004144d0(&local_1f0);
  FUN_00414560(&local_1e8,2);
  FUN_004144d0(&local_1d8);
  FUN_00414560(&local_1d0,0x10);
  FUN_00414590(&local_150,2);
  FUN_00414560(&local_140,0xc);
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_38);
  FUN_00414480(&local_28);
  return;
}

