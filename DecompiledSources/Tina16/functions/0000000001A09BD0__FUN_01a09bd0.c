/* Ghidra address: 01a09bd0 */
/* Ghidra symbol: FUN_01a09bd0 */


void FUN_01a09bd0(longlong param_1,short param_2)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auStack_2c8 [32];
  wchar_t *local_2a8;
  undefined8 local_2a0;
  wchar_t *local_298;
  undefined8 local_290;
  wchar_t *local_288;
  undefined8 local_280;
  wchar_t *local_278;
  undefined8 local_270;
  wchar_t *local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined8 local_250;
  wchar_t *local_248;
  undefined8 local_240;
  wchar_t *local_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
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
  undefined8 local_1b0;
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
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  double local_68;
  double local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [4];
  
  local_80 = auStack_2c8;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_178 = 0;
  local_180 = 0;
  local_160 = 0;
  local_170 = 0;
  local_168 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_120 = 0;
  local_128 = 0;
  local_138 = 0;
  local_140 = 0;
  local_130 = 0;
  local_100 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_58[0] = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_48 = 0;
  local_40 = 0;
  uVar6 = 0;
  local_60 = (double)FUN_019ed630(param_1,1,0);
  if (local_60 == 0.0) {
    *(undefined1 *)(param_1 + 0xc2) = 1;
    FUN_016fd940(L"Frequency is 0.");
  }
  else {
    local_60 = 1.0 / local_60;
    bVar1 = *(byte *)(param_1 + 0xc0);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << (bVar1 & 0x1f) & 3U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (param_2 == 0x3fe) {
        local_30[0] = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                  (*(longlong **)(param_1 + 0x58),&local_90);
        local_2a8 = (wchar_t *)CONCAT44(local_2a8._4_4_,0xb);
        FUN_019ee820(param_1,&local_88,0x13,local_90);
        FUN_00416ba0(local_30,local_88,L" STIM(1,1) ");
        FUN_00414480(&local_38);
        local_6d = *(char *)(param_1 + 0xc0) == '\x04';
        if ((bool)local_6d) {
          FUN_00414b50(&local_38,&DAT_01a0adf0);
        }
        else {
          FUN_00414b50(&local_38,L"$G_DPWR");
        }
        FUN_019f0400(param_1,&local_a0,0,0);
        FUN_019f0400(param_1,&local_a8,1,0);
        local_2a8 = L" ";
        local_2a0 = local_a0;
        local_298 = L" ";
        local_290 = local_a8;
        local_288 = L" IO_STM";
        FUN_00416cd0(&local_98,7,local_30[0],local_38);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_98);
        FUN_00414480(local_30);
        FUN_00414480(&local_38);
      }
      else {
        local_40 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                  (*(longlong **)(param_1 + 0x58),&local_b8);
        local_2a8 = (wchar_t *)CONCAT44(local_2a8._4_4_,0xb);
        FUN_019ee820(param_1,&local_b0,0x13,local_b8);
        FUN_00416ba0(&local_40,local_b0,L" STIM(1,1) ");
        FUN_00414480(&local_48);
        local_6e = *(char *)(param_1 + 0xc0) == '\x04';
        if ((bool)local_6e) {
          FUN_00414b50(&local_48,&DAT_01a0adf0);
        }
        else {
          FUN_00414b50(&local_48,L"$G_DPWR");
        }
        local_2a8 = (wchar_t *)((ulonglong)local_2a8 & 0xffffffffffffff00);
        FUN_01a04e90(param_1,&local_c8,0xb,0);
        FUN_019f0400(param_1,&local_d0,0,0);
        local_2a8 = L" ";
        local_2a0 = local_c8;
        local_298 = L" ";
        local_290 = local_d0;
        local_288 = L" IO_STM";
        FUN_00416cd0(&local_c0,7,local_40,local_48);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_c0);
        FUN_00414480(&local_40);
        FUN_00414480(&local_48);
      }
      *(undefined1 *)(param_1 + 0x89) = 1;
      dVar4 = (double)FUN_019ed630(param_1,5,0);
      if (dVar4 != 0.0) {
        uVar2 = FUN_019edff0(param_1,7,0);
        FUN_016d7040(&local_e0,uVar2);
        FUN_00416ba0(&local_d8,L"+      0 ",local_e0);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_d8);
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                (*(longlong **)(param_1 + 0x20),L"+      LABEL = STARTLOOP");
      FUN_019ed1f0(param_1,&local_f0,5,0);
      uVar2 = FUN_019edff0(param_1,3,0);
      FUN_016d7040(&local_f8,uVar2);
      local_2a8 = L" ";
      local_2a0 = local_f8;
      FUN_00416cd0(&local_e8,4,L"+      ",local_f0);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_e8);
      dVar4 = (double)FUN_019ed630(param_1,5,0);
      dVar5 = (double)FUN_019ed630(param_1,2,0);
      FUN_016b9450(&local_108,dVar4 + local_60 * dVar5);
      local_2a8 = L" ";
      FUN_00415980(&local_100,3,"+      ",local_108);
      FUN_00416880(&local_110,local_100);
      uVar2 = FUN_019edff0(param_1,4,0);
      FUN_016d7040(&local_118,uVar2);
      FUN_00416ad0(&local_110,local_118);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_110)
      ;
      dVar4 = (double)FUN_019ed630(param_1,6,0);
      dVar5 = (double)FUN_019ed630(param_1,5,0);
      local_68 = (dVar4 - dVar5) / local_60;
      if (1000.0 <= local_68) {
        dVar4 = (double)FUN_019ed630(param_1,5,0);
        FUN_016b9450(&local_168,dVar4 + local_60);
        local_2a8 = L" GOTO STARTLOOP -1 TIMES";
        FUN_00415980(&local_160,3,"+      ",local_168);
        FUN_00416880(&local_170,local_160);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_170);
      }
      else {
        local_6c = FUN_0040c840(local_68);
        dVar4 = (double)FUN_019ed630(param_1,5,0);
        FUN_016b9450(&local_130,dVar4 + local_60);
        local_2a8 = L" GOTO STARTLOOP ";
        FUN_00415980(&local_128,3,"+      ",local_130);
        FUN_00416880(&local_138,local_128);
        FUN_0043f750(&local_140,local_6c);
        local_2a8 = L" TIMES";
        FUN_00416cd0(&local_120,3,local_138,local_140);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_120);
        FUN_019ed1f0(param_1,&local_150,6,0);
        uVar2 = FUN_019edff0(param_1,8,0);
        FUN_016d7040(&local_158,uVar2);
        local_2a8 = L" ";
        local_2a0 = local_158;
        FUN_00416cd0(&local_148,4,L"+      ",local_150);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_148);
      }
    }
    else {
      if (bVar1 == 4) {
        FUN_00414b50(local_58,L" VARS: ");
      }
      else {
        FUN_00414b50(local_58,L" PARAMS: ");
      }
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x288))
                (*(longlong **)(param_1 + 0x58),&local_180);
      local_2a8 = (wchar_t *)CONCAT44(local_2a8._4_4_,0xb);
      FUN_019ee820(param_1,&local_178,0x15,local_180);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_178);
      if (param_2 == 0x3fe) {
        FUN_019f0400(param_1,&local_190,0,0);
        FUN_019f0400(param_1,&local_198,1,0);
        local_2a8 = (wchar_t *)local_198;
        FUN_00416cd0(&local_188,3,local_190,&DAT_01a0ae20);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_188);
      }
      else {
        FUN_019f0400(param_1,&local_1a8,0,0);
        local_2a8 = (wchar_t *)((ulonglong)local_2a8 & 0xffffffffffffff00);
        FUN_01a04e90(param_1,&local_1b0,0xb,0);
        local_2a8 = (wchar_t *)local_1b0;
        FUN_00416cd0(&local_1a0,3,local_1a8,&DAT_01a0ae20);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_1a0);
      }
      uVar6 = FUN_019ed630(param_1,1,0);
      FUN_016b9450(&local_1c0,uVar6);
      FUN_00416880(&local_1c8,local_1c0);
      uVar6 = FUN_019ed630(param_1,2,0);
      FUN_016b9450(&local_1d0,uVar6);
      FUN_00416880(&local_1d8,local_1d0);
      uVar2 = FUN_019edff0(param_1,3,0);
      FUN_016d7040(&local_1e0,uVar2);
      uVar2 = FUN_019edff0(param_1,4,0);
      FUN_016d7040(&local_1e8,uVar2);
      uVar6 = FUN_019ed630(param_1,5,0);
      FUN_016b9450(&local_1f0,uVar6);
      FUN_00416880(&local_1f8,local_1f0);
      uVar6 = FUN_019ed630(param_1,9,0);
      FUN_016b9450(&local_200,uVar6);
      FUN_00416880(&local_208,local_200);
      uVar6 = FUN_019ed630(param_1,10,0);
      FUN_016b9450(&local_210,uVar6);
      FUN_00416880(&local_218,local_210);
      uVar2 = FUN_019edff0(param_1,7,0);
      FUN_016d7040(&local_220,uVar2);
      local_2a8 = L"FREQ=";
      local_2a0 = local_1c8;
      local_298 = L" DUTY=";
      local_290 = local_1d8;
      local_288 = L" OS=";
      local_280 = local_1e0;
      local_278 = L" ES=";
      local_270 = local_1e8;
      local_268 = L" ST=";
      local_260 = local_1f8;
      local_258 = L" RT=";
      local_250 = local_208;
      local_248 = L" OutV=";
      local_240 = local_218;
      local_238 = L" STSTATE=";
      local_230 = local_220;
      FUN_00416cd0(&local_1b8,0x12,L" CLOCK",local_58[0]);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_1b8)
      ;
    }
  }
  FUN_00414560(&local_220,2);
  FUN_004144d0(&local_210);
  FUN_00414480(&local_208);
  FUN_004144d0(&local_200);
  FUN_00414480(&local_1f8);
  FUN_004144d0(&local_1f0);
  FUN_00414560(&local_1e8,3);
  FUN_004144d0(&local_1d0);
  FUN_00414480(&local_1c8);
  FUN_004144d0(&local_1c0);
  FUN_00414560(&local_1b8,10);
  FUN_00414590(&local_168,2);
  FUN_00414560(&local_158,5);
  FUN_00414590(&local_130,2);
  FUN_00414560(&local_120,3);
  FUN_00414590(&local_108,2);
  FUN_00414560(&local_f8,0xf);
  FUN_00414480(local_58);
  FUN_00414480(&local_48);
  FUN_00414480(&local_38);
  return;
}

