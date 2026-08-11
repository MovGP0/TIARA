/* Ghidra address: 01192ee0 */
/* Ghidra symbol: FUN_01192ee0 */


void FUN_01192ee0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined1 auStack_328 [32];
  undefined **local_308;
  undefined *local_300;
  int local_2f4;
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
  undefined8 local_208;
  undefined1 local_200 [256];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e0;
  undefined8 local_d8 [10];
  undefined8 local_88;
  undefined *local_80;
  wchar_t *local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  int local_58;
  int local_54;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_f0 = auStack_328;
  local_2f0 = 0;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_70 = 0;
  local_78 = (wchar_t *)0x0;
  local_80 = (undefined *)0x0;
  local_88 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00417600(&local_e0,&DAT_00401390,0xb);
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (*(char *)(local_res10 + 0x3f9) == '\0') {
    FUN_00414b50(&local_70,L"PASSIVE");
  }
  else {
    FUN_00414b50(&local_70,L"ACTIVE");
  }
  (**(code **)(*local_50 + 0x78))(local_50,local_70);
  (**(code **)(*local_50 + 0x78))(local_50,L" Common Component Values  ");
  (**(code **)(*local_50 + 0x78))(local_50,L" =====================================");
  FUN_01192eb0(&local_78,local_res18[0x12f]);
  FUN_01192eb0(&local_80,local_res18[0x25c]);
  local_308 = (undefined **)0x119455c;
  local_300 = local_80;
  FUN_00416cd0(&local_f8,4,L" C   = ",local_78);
  (**(code **)(*local_50 + 0x78))(local_50,local_f8);
  FUN_01192eb0(&local_78,*local_res18);
  FUN_01192eb0(&local_80,local_res18[1]);
  local_308 = (undefined **)0x11945a0;
  local_300 = local_80;
  FUN_00416cd0(&local_100,4,L" R_x = ",local_78);
  (**(code **)(*local_50 + 0x78))(local_50,local_100);
  (**(code **)(*local_50 + 0x78))(local_50,0);
  (**(code **)(*local_50 + 0x78))(local_50,L" Stage  R Value     R_B Value    Special");
  (**(code **)(*local_50 + 0x78))(local_50,L" =====  =========   ==========   =================");
  iVar4 = *(int *)(local_res18 + 0x710);
  local_54 = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_00414480(&local_80);
      FUN_0040e780(local_200,local_54,2);
      FUN_004169a0(&local_78,local_200);
      local_308 = (undefined **)0x119469c;
      FUN_00416cd0(&local_80,3,local_80,local_78);
      lVar3 = (longlong)local_54;
      FUN_01192eb0(&local_78,local_res18[lVar3 + 2]);
      local_308 = (undefined **)&DAT_011946b4;
      FUN_00416cd0(&local_80,3,local_80,local_78);
      FUN_01192eb0(&local_78,local_res18[lVar3 + 0x389]);
      local_308 = (undefined **)&DAT_011946c8;
      FUN_00416cd0(&local_80,3,local_80,local_78);
      if ((double)local_res18[lVar3 + 0x4b6] != 0.0) {
        FUN_01192eb0(&local_78,local_res18[lVar3 + 0x4b6]);
        local_308 = (undefined **)local_78;
        local_300 = &DAT_011946fc;
        FUN_00416cd0(&local_80,4,local_80,L"     Ro = ");
      }
      if ((double)local_res18[lVar3 + 0x5e3] != 0.0) {
        FUN_01192eb0(&local_78,local_res18[lVar3 + 0x5e3]);
        local_308 = (undefined **)local_78;
        local_300 = &DAT_011946fc;
        FUN_00416cd0(&local_80,4,local_80,L"     Co = ");
      }
      if ((double)local_res18[lVar3 + 0x389] == 0.0) {
        FUN_00416ad0(&local_80,L"     1st Order section");
      }
      (**(code **)(*local_50 + 0x78))(local_50,local_80);
      local_54 = local_54 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  sVar1 = *(short *)((longlong)local_res10 + 0x1fa6);
  if (sVar1 == 0x42) {
    FUN_00414b50(&local_88,L"Butterworth");
  }
  else if (sVar1 == 0x43) {
    FUN_00414b50(&local_88,L"Chebyshev");
  }
  else if (sVar1 == 0x45) {
    FUN_00414b50(&local_88,L"Elliptic");
  }
  else if (sVar1 == 0x49) {
    FUN_00414b50(&local_88,L"Inv. Cheby.");
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"filter kind");
    FUN_004134c0(uVar2);
  }
  FUN_00416ba0(&local_208,L"    Filter approximation :      ",local_88);
  (**(code **)(*local_50 + 0x78))(local_50,local_208);
  sVar1 = *(short *)((longlong)local_res10 + 0x1fa4);
  if (sVar1 == 0x48) {
    FUN_00414b50(&local_88,L"Highpass");
  }
  else if (sVar1 == 0x4c) {
    FUN_00414b50(&local_88,L"Lowpass");
  }
  else if (sVar1 == 0x50) {
    FUN_00414b50(&local_88,L"Bandpass");
  }
  else if (sVar1 == 0x53) {
    FUN_00414b50(&local_88,L"Bandstop");
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"filter select");
    FUN_004134c0(uVar2);
  }
  FUN_00416ba0(&local_210,L"    Filter selectivity:         ",local_88);
  (**(code **)(*local_50 + 0x78))(local_50,local_210);
  sVar1 = *(short *)((longlong)local_res10 + 0x1fa4);
  if ((sVar1 == 0x48) || (sVar1 == 0x4c)) {
    FUN_01192eb0(&local_218,*local_res10);
    FUN_00414b50(&local_e0,local_218);
    FUN_00416ba0(&local_220,L"    Passband gain         (dB): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_220);
    FUN_01192eb0(&local_228,local_res10[2]);
    FUN_00414b50(&local_e0,local_228);
    FUN_00416ba0(&local_230,L"    Stopband gain         (dB): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_230);
    FUN_01192eb0(&local_238,(double)local_res10[4] / 6.283185307179586);
    FUN_00414b50(&local_e0,local_238);
    FUN_00416ba0(&local_240,L"    Passband frequency    (Hz): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_240);
    FUN_01192eb0(&local_248,(double)local_res10[6] / 6.283185307179586);
    FUN_00414b50(&local_e0,local_248);
    FUN_00416ba0(&local_250,L"    Stopband frequency    (Hz): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_250);
  }
  else if ((sVar1 == 0x50) || (sVar1 == 0x53)) {
    FUN_01192eb0(&local_258,*local_res10);
    FUN_00414b50(&local_e0,local_258);
    FUN_00416ba0(&local_260,L"    Passband1 gain         (dB): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_260);
    FUN_01192eb0(&local_268,local_res10[2]);
    FUN_00414b50(&local_e0,local_268);
    FUN_00416ba0(&local_270,L"    Stopband1 gain         (dB): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_270);
    FUN_01192eb0(&local_278,local_res10[1]);
    FUN_00414b50(&local_e0,local_278);
    FUN_00416ba0(&local_280,L"    Passband2 gain         (dB): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_280);
    FUN_01192eb0(&local_288,local_res10[3]);
    FUN_00414b50(&local_e0,local_288);
    FUN_00416ba0(&local_290,L"    Stopband2 gain         (dB): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_290);
    FUN_01192eb0(&local_298,(double)local_res10[4] / 6.283185307179586);
    FUN_00414b50(&local_e0,local_298);
    FUN_00416ba0(&local_2a0,L"    Passband1 frequency    (Hz): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_2a0);
    FUN_01192eb0(&local_2a8,(double)local_res10[6] / 6.283185307179586);
    FUN_00414b50(&local_e0,local_2a8);
    FUN_00416ba0(&local_2b0,L"    Stopband1 frequency    (Hz): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_2b0);
    FUN_01192eb0(&local_2b8,(double)local_res10[5] / 6.283185307179586);
    FUN_00414b50(&local_e0,local_2b8);
    FUN_00416ba0(&local_2c0,L"    Passband2 frequency    (Hz): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_2c0);
    FUN_01192eb0(&local_2c8,(double)local_res10[7] / 6.283185307179586);
    FUN_00414b50(&local_e0,local_2c8);
    FUN_00416ba0(&local_2d0,L"    Stopband2 frequency    (Hz): ",local_e0);
    (**(code **)(*local_50 + 0x78))(local_50,local_2d0);
  }
  else {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"filter select");
    FUN_004134c0(uVar2);
  }
  FUN_0043f750(&local_2d8,*(undefined4 *)(local_res10 + 0x3f4));
  FUN_00414b50(&local_e0,local_2d8);
  FUN_00416ba0(&local_2e0,L"    Filter Length or Order        = ",local_e0);
  (**(code **)(*local_50 + 0x78))(local_50,local_2e0);
  FUN_01192eb0(&local_2e8,local_res10[9]);
  FUN_00414b50(&local_e0,local_2e8);
  FUN_00416ba0(&local_2f0,L"    Overall Gain                  = ",local_e0);
  (**(code **)(*local_50 + 0x78))(local_50,local_2f0);
  (**(code **)(*local_50 + 0x78))(local_50,&DAT_011946c8);
  if (*(short *)(local_res10 + 0x3f5) == 0x41) {
    (**(code **)(*local_50 + 0x78))
              (local_50,L"    Numerator Coefficients                Denominator Coefficients");
    (**(code **)(*local_50 + 0x78))
              (local_50,L" st.[    S^2   +     S^1  +     s^0  ] [    S^2   +     S^1  +    s^0   ]"
              );
    (**(code **)(*local_50 + 0x78))
              (local_50,L" ========================================================================"
              );
    iVar4 = (*(int *)(local_res10 + 0x3f4) + 1) / 2;
    local_2f4 = iVar4 + -1;
    local_54 = 0;
    if (-1 < local_2f4) {
      do {
        local_2f4 = iVar4;
        local_58 = local_54 * 3;
        local_60 = 1.0;
        FUN_00414b50(&local_e0,&DAT_011946c8);
        local_68 = (double)(local_54 + 1);
        FUN_0040fb60(local_200,local_68,2,0);
        FUN_004169a0(local_d8,local_200);
        local_308 = &PTR_DAT_01194fa4;
        FUN_00416cd0(&local_e0,3,local_e0,local_d8[0]);
        local_68 = (double)local_res10[(longlong)local_58 + 10] / local_60;
        FUN_00414480(&local_20);
        local_308 = (undefined **)CONCAT44(local_308._4_4_,4);
        local_300 = PTR_DAT_02004830;
        FUN_00448510(&local_20,local_68,0,5);
        FUN_00414b50(local_d8,local_20);
        FUN_00414480(&local_20);
        local_308 = (undefined **)&DAT_011946c8;
        FUN_00416cd0(&local_e0,3,local_e0,local_d8[0]);
        local_68 = (double)local_res10[(longlong)(local_58 + 1) + 10] / local_60;
        FUN_00414480(&local_28);
        local_308 = (undefined **)CONCAT44(local_308._4_4_,4);
        local_300 = PTR_DAT_02004830;
        FUN_00448510(&local_28,local_68,0,5);
        FUN_00414b50(local_d8,local_28);
        FUN_00414480(&local_28);
        local_308 = (undefined **)&DAT_011946c8;
        FUN_00416cd0(&local_e0,3,local_e0,local_d8[0]);
        local_68 = (double)local_res10[(longlong)(local_58 + 2) + 10] / local_60;
        FUN_00414480(&local_30);
        local_308 = (undefined **)CONCAT44(local_308._4_4_,4);
        local_300 = PTR_DAT_02004830;
        FUN_00448510(&local_30,local_68,0,5);
        FUN_00414b50(local_d8,local_30);
        FUN_00414480(&local_30);
        local_308 = (undefined **)&DAT_01194fb8;
        FUN_00416cd0(&local_e0,3,local_e0,local_d8[0]);
        local_68 = (double)local_res10[(longlong)local_58 + 0x1ff] / local_60;
        FUN_00414480(&local_38);
        local_308 = (undefined **)CONCAT44(local_308._4_4_,4);
        local_300 = PTR_DAT_02004830;
        FUN_00448510(&local_38,local_68,0,5);
        FUN_00414b50(local_d8,local_38);
        FUN_00414480(&local_38);
        local_308 = (undefined **)&DAT_011946c8;
        FUN_00416cd0(&local_e0,3,local_e0,local_d8[0]);
        local_68 = (double)local_res10[(longlong)(local_58 + 1) + 0x1ff] / local_60;
        FUN_00414480(&local_40);
        local_308 = (undefined **)CONCAT44(local_308._4_4_,4);
        local_300 = PTR_DAT_02004830;
        FUN_00448510(&local_40,local_68,0,5);
        FUN_00414b50(local_d8,local_40);
        FUN_00414480(&local_40);
        local_308 = (undefined **)&DAT_011946c8;
        FUN_00416cd0(&local_e0,3,local_e0,local_d8[0]);
        local_68 = (double)local_res10[(longlong)(local_58 + 2) + 0x1ff] / local_60;
        FUN_00414480(&local_48);
        local_308 = (undefined **)CONCAT44(local_308._4_4_,4);
        local_300 = PTR_DAT_02004830;
        FUN_00448510(&local_48,local_68,0,5);
        FUN_00414b50(local_d8,local_48);
        FUN_00414480(&local_48);
        local_308 = (undefined **)&DAT_01194fcc;
        FUN_00416cd0(&local_e0,3,local_e0);
        (**(code **)(*local_50 + 0x78))(local_50,local_e0);
        local_54 = local_54 + 1;
        local_2f4 = local_2f4 + -1;
        iVar4 = local_2f4;
      } while (local_2f4 != 0);
    }
  }
  (**(code **)(*local_50 + 0x100))(local_50,local_res8);
  FUN_00410f20(local_50);
  FUN_00414560(&local_2f0,0x1e);
  FUN_00414560(&local_100,2);
  FUN_00417840(&local_e0,&DAT_00401390,0xb);
  FUN_00414560(&local_88,4);
  FUN_00414560(&local_48,6);
  FUN_00414480(&local_res8);
  return;
}

