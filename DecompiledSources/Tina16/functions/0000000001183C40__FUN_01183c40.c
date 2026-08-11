/* Ghidra address: 01183c40 */
/* Ghidra symbol: FUN_01183c40 */


undefined4 FUN_01183c40(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res10;
  longlong local_res18 [2];
  undefined1 auStack_748 [32];
  undefined4 local_728;
  undefined *local_720;
  int local_714;
  undefined1 *local_710;
  int local_704;
  uint local_6fc;
  undefined8 local_6f8;
  double local_6f0;
  double local_6e8;
  int local_6dc;
  undefined1 local_6d8 [760];
  undefined1 local_3e0 [760];
  undefined8 local_e8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_710 = auStack_748;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_6f8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  if (local_res18[0] == 0) {
    local_64 = 0;
    goto LAB_01185ac2;
  }
  local_6dc = FUN_004170c0(&DAT_01185c5c,local_res18[0],1);
  if (local_6dc != 0) {
    FUN_00416dc0(local_res18,local_res18[0],1,local_6dc + -1);
  }
  FUN_00416ba0(&local_80,local_res18[0],L".DTX");
  FUN_0040cf10(local_3e0,local_80,0);
  FUN_00409900();
  FUN_0040ca00(local_3e0);
  FUN_00409900();
  FUN_00416ba0(&local_88,local_res18[0],L".DTB");
  FUN_0040cf10(local_6d8,local_88,0);
  FUN_00409900();
  FUN_0040ca00(local_6d8);
  FUN_00409900();
  FUN_00414b50(&local_90,L"12345678");
  puVar4 = (undefined2 *)FUN_00414de0(&local_90);
  *puVar4 = 0x41;
  lVar5 = FUN_00414de0(&local_90);
  *(undefined2 *)(lVar5 + 2) = 0x44;
  lVar5 = FUN_00414de0(&local_90);
  *(undefined2 *)(lVar5 + 4) = 0x46;
  lVar5 = FUN_00414de0(&local_90);
  *(undefined2 *)(lVar5 + 6) = 0x44;
  lVar5 = FUN_00414de0(&local_90);
  *(undefined2 *)(lVar5 + 8) = 99;
  lVar5 = FUN_00414de0(&local_90);
  *(undefined2 *)(lVar5 + 10) = 0x41;
  local_704 = 0;
  if (local_res10 != 0) {
    local_704 = *(int *)(local_res10 + -4);
  }
  local_74 = local_704;
  FUN_0040f590();
  FUN_00409900();
  iVar7 = (0x28 - local_74) / 2;
  local_68 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar6 = FUN_0040f3d0(local_3e0,0x20);
      FUN_0040d060(uVar6);
      FUN_00409900();
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  uVar6 = FUN_0040f200(local_3e0,local_res10);
  FUN_0040f590(uVar6);
  FUN_00409900();
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8));
  if (cVar3 == '\x01') {
    uVar6 = FUN_0040f200(local_3e0,L"Filter type:  PASSIVE  ");
    FUN_0040d060(uVar6);
    FUN_00409900();
  }
  else {
    uVar6 = FUN_0040f200(local_3e0,L"Filter type:  ACTIVE  ");
    FUN_0040d060(uVar6);
    FUN_00409900();
  }
  uVar6 = FUN_0040f200(local_3e0,L"Filter approximation:    ");
  FUN_0040d060(uVar6);
  FUN_00409900();
  uVar1 = *(ushort *)((longlong)param_1 + 0x1fa6);
  if (uVar1 < 0x36) {
    if (uVar1 == 0x35) {
      uVar6 = FUN_0040f200(local_3e0,L"Kaiser");
      FUN_0040f590(uVar6);
      FUN_00409900();
      lVar5 = FUN_00414de0(&local_90);
      *(undefined2 *)(lVar5 + 0xc) = 0x35;
    }
    else if (uVar1 < 0x33) {
      if (uVar1 == 0x32) {
        uVar6 = FUN_0040f200(local_3e0,L"Blackman");
        FUN_0040f590(uVar6);
        FUN_00409900();
        lVar5 = FUN_00414de0(&local_90);
        *(undefined2 *)(lVar5 + 0xc) = 0x32;
      }
      else if (uVar1 == 0x30) {
        uVar6 = FUN_0040f200(local_3e0,L"Rectangular");
        FUN_0040f590(uVar6);
        FUN_00409900();
        lVar5 = FUN_00414de0(&local_90);
        *(undefined2 *)(lVar5 + 0xc) = 0x30;
      }
      else {
        if (uVar1 != 0x31) goto LAB_0118428c;
        uVar6 = FUN_0040f200(local_3e0,L"Bartlett");
        FUN_0040f590(uVar6);
        FUN_00409900();
        lVar5 = FUN_00414de0(&local_90);
        *(undefined2 *)(lVar5 + 0xc) = 0x31;
      }
    }
    else if (uVar1 == 0x33) {
      uVar6 = FUN_0040f200(local_3e0,L"Hamming");
      FUN_0040f590(uVar6);
      FUN_00409900();
      lVar5 = FUN_00414de0(&local_90);
      *(undefined2 *)(lVar5 + 0xc) = 0x33;
    }
    else {
      if (uVar1 != 0x34) goto LAB_0118428c;
      uVar6 = FUN_0040f200(local_3e0,L"Hanning");
      FUN_0040f590(uVar6);
      FUN_00409900();
      lVar5 = FUN_00414de0(&local_90);
      *(undefined2 *)(lVar5 + 0xc) = 0x34;
    }
  }
  else if (uVar1 < 0x44) {
    if (uVar1 == 0x43) {
      uVar6 = FUN_0040f200(local_3e0,L"Chebyshev");
      FUN_0040f590(uVar6);
      FUN_00409900();
      lVar5 = FUN_00414de0(&local_90);
      *(undefined2 *)(lVar5 + 0xc) = 0x43;
    }
    else if (uVar1 == 0x36) {
      uVar6 = FUN_0040f200(local_3e0,L"Parks-McCl");
      FUN_0040f590(uVar6);
      FUN_00409900();
      lVar5 = FUN_00414de0(&local_90);
      *(undefined2 *)(lVar5 + 0xc) = 0x36;
    }
    else {
      if (uVar1 != 0x42) goto LAB_0118428c;
      uVar6 = FUN_0040f200(local_3e0,L"Butterworth");
      FUN_0040f590(uVar6);
      FUN_00409900();
      lVar5 = FUN_00414de0(&local_90);
      *(undefined2 *)(lVar5 + 0xc) = 0x42;
    }
  }
  else if (uVar1 == 0x45) {
    uVar6 = FUN_0040f200(local_3e0,L"Elliptic");
    FUN_0040f590(uVar6);
    FUN_00409900();
    lVar5 = FUN_00414de0(&local_90);
    *(undefined2 *)(lVar5 + 0xc) = 0x45;
  }
  else {
    if (uVar1 != 0x49) {
LAB_0118428c:
      local_64 = 3;
      goto LAB_01185ac2;
    }
    uVar6 = FUN_0040f200(local_3e0,L"Inverse Chebyshev");
    FUN_0040f590(uVar6);
    FUN_00409900();
    lVar5 = FUN_00414de0(&local_90);
    *(undefined2 *)(lVar5 + 0xc) = 0x49;
  }
  uVar6 = FUN_0040f200(local_3e0,L"Filter selectivity:      ");
  FUN_0040d060(uVar6);
  FUN_00409900();
  sVar2 = *(short *)((longlong)param_1 + 0x1fa4);
  if (sVar2 == 0x48) {
    uVar6 = FUN_0040f200(local_3e0,L"Highpass");
    FUN_0040f590(uVar6);
    FUN_00409900();
    lVar5 = FUN_00414de0(&local_90);
    *(undefined2 *)(lVar5 + 0xe) = 0x48;
  }
  else if (sVar2 == 0x4c) {
    uVar6 = FUN_0040f200(local_3e0,L"Lowpass");
    FUN_0040f590(uVar6);
    FUN_00409900();
    lVar5 = FUN_00414de0(&local_90);
    *(undefined2 *)(lVar5 + 0xe) = 0x4c;
  }
  else if (sVar2 == 0x50) {
    uVar6 = FUN_0040f200(local_3e0,L"Bandpass");
    FUN_0040f590(uVar6);
    FUN_00409900();
    lVar5 = FUN_00414de0(&local_90);
    *(undefined2 *)(lVar5 + 0xe) = 0x50;
  }
  else {
    if (sVar2 != 0x53) {
      local_64 = 3;
      goto LAB_01185ac2;
    }
    uVar6 = FUN_0040f200(local_3e0,L"Bandstop");
    FUN_0040f590(uVar6);
    FUN_00409900();
    lVar5 = FUN_00414de0(&local_90);
    *(undefined2 *)(lVar5 + 0xe) = 0x53;
  }
  uVar6 = FUN_0040f200(local_6d8,local_90);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f200(local_6d8,local_res10);
  FUN_0040f590(uVar6);
  FUN_00409900();
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8) + 0x260))
                    (*(longlong **)(*(longlong *)PTR_DAT_02001890 + 0x9c8));
  local_6fc = (uint)(cVar3 != '\x01');
  uVar6 = FUN_0040ef30(local_6d8,local_6fc);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040ef30(local_6d8,*(undefined4 *)(param_1 + 0x3f4));
  FUN_0040f590(uVar6);
  FUN_00409900();
  local_6e8 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x750));
  *(double *)(PTR_DAT_02001d30 + 0xa8) = local_6e8;
  local_6e8 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x748));
  *(double *)(PTR_DAT_02001d30 + 0xb0) = local_6e8;
  local_6e8 = (double)FUN_00b90090(*(undefined8 *)(*(longlong *)PTR_DAT_020044a8 + 0x758));
  *(double *)(PTR_DAT_02001d30 + 0xb8) = local_6e8;
  uVar6 = FUN_0040f570(local_6d8,*(undefined8 *)(PTR_DAT_020040b8 + 0xb0));
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,*(undefined8 *)(PTR_DAT_020040b8 + 0xb8));
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,*(undefined8 *)(PTR_DAT_020040b8 + 0xc0));
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,*(undefined8 *)(PTR_DAT_02001d30 + 0xa8));
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,*(undefined8 *)(PTR_DAT_02001d30 + 0xb0));
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,*(undefined8 *)(PTR_DAT_02001d30 + 0xb8));
  FUN_0040f590(uVar6);
  FUN_00409900();
  sVar2 = *(short *)((longlong)param_1 + 0x1fa4);
  if ((sVar2 == 0x48) || (sVar2 == 0x4c)) {
    uVar6 = FUN_0040f200(local_3e0,L"Passband gain       (dB): ");
    uVar6 = FUN_0040f530(uVar6,*param_1,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband gain       (dB): ");
    uVar6 = FUN_0040f530(uVar6,param_1[2],10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Passband frequency  (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[4] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband frequency  (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[6] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
  }
  else if (sVar2 == 0x50) {
    uVar6 = FUN_0040f200(local_3e0,L"Passband gain         (dB): ");
    uVar6 = FUN_0040f530(uVar6,*param_1,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband gain - lower (dB): ");
    uVar6 = FUN_0040f530(uVar6,param_1[2],10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband gain - upper (dB): ");
    uVar6 = FUN_0040f530(uVar6,param_1[3],10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Passband freq - lower (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[4] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Passband freq - upper (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[5] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband freq - lower (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[6] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband freq - upper (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[7] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
  }
  else {
    if (sVar2 != 0x53) {
      local_64 = 3;
      goto LAB_01185ac2;
    }
    uVar6 = FUN_0040f200(local_3e0,L"Passband gain - lower (dB):");
    uVar6 = FUN_0040f530(uVar6,*param_1,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Passband gain - upper (dB): ");
    uVar6 = FUN_0040f530(uVar6,param_1[1],10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband gain         (dB): ");
    uVar6 = FUN_0040f530(uVar6,param_1[2],10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Passband freq - lower (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[4] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Passband freq - upper (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[5] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband freq - lower (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[6] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Stopband freq - upper (Hz): ");
    uVar6 = FUN_0040f530(uVar6,(double)param_1[7] / 6.2831853071796,10,2);
    FUN_0040f590(uVar6);
    FUN_00409900();
  }
  sVar2 = *(short *)(param_1 + 0x3f5);
  if (sVar2 == 0x41) {
    local_e8 = 0;
  }
  else {
    if ((sVar2 != 0x46) && (sVar2 != 0x49)) {
      local_64 = 3;
      goto LAB_01185ac2;
    }
    uVar6 = FUN_0040f200(local_3e0,L"Sampling Frequency (Hz):");
    uVar6 = FUN_0040f570(uVar6,param_1[8]);
    FUN_0040f590(uVar6);
    FUN_00409900();
    local_e8 = param_1[8];
  }
  uVar6 = FUN_0040f570(local_6d8,local_e8);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,*param_1);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,param_1[1]);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,param_1[2]);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,param_1[3]);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,(double)param_1[4] / 6.2831853071796);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,(double)param_1[5] / 6.2831853071796);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,(double)param_1[6] / 6.2831853071796);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,(double)param_1[7] / 6.2831853071796);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f570(local_6d8,param_1[9]);
  FUN_0040f590(uVar6);
  FUN_00409900();
  uVar6 = FUN_0040f200(local_3e0,L"Filter Length or Order = ");
  uVar6 = FUN_0040ef30(uVar6,*(undefined4 *)(param_1 + 0x3f4));
  FUN_0040f590(uVar6);
  FUN_00409900();
  local_6e8 = (double)param_1[9];
  FUN_00414480(&local_30);
  local_728 = 4;
  local_720 = PTR_DAT_02004830;
  FUN_00448510(&local_30,local_6e8,0,5);
  FUN_00414b50(&local_6f8,local_30);
  FUN_00414480(&local_30);
  FUN_01180450(&local_6f8,9);
  uVar6 = FUN_0040f200(local_3e0,L"Overall Gain           = ");
  uVar6 = FUN_0040f200(uVar6,local_6f8);
  FUN_0040f590(uVar6);
  FUN_00409900();
  sVar2 = *(short *)(param_1 + 0x3f5);
  if (sVar2 == 0x41) {
    uVar6 = FUN_0040f200(local_3e0,L"    Numerator Coefficients                 ");
    FUN_0040d060(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Denominator Coefficients");
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"    [S^2 +       S^1      +      s^0    ]");
    FUN_0040d060(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"  [S^2 +       S^1      +      s^0    ]");
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"=== =====================================");
    FUN_0040d060(uVar6);
    FUN_00409900();
    FUN_0040f200(local_3e0,L"  =====================================");
    FUN_0040f590();
    FUN_00409900();
    local_6f0 = 1.0;
    iVar7 = (*(int *)(param_1 + 0x3f4) + 1) / 2;
    local_714 = iVar7 + -1;
    local_68 = 0;
    if (-1 < local_714) {
      do {
        local_714 = iVar7;
        local_6c = local_68 * 3;
        uVar6 = FUN_0040eee0(local_3e0,local_68 + 1,2);
        uVar6 = FUN_0040f200(uVar6,&DAT_01186658);
        FUN_0040d060(uVar6);
        FUN_00409900();
        local_6e8 = (double)param_1[(longlong)local_6c + 10] / local_6f0;
        FUN_00414480(&local_38);
        local_728 = 4;
        local_720 = PTR_DAT_02004830;
        FUN_00448510(&local_38,local_6e8,0,5);
        FUN_00414b50(&local_6f8,local_38);
        FUN_00414480(&local_38);
        FUN_01180450(&local_6f8,9);
        uVar6 = FUN_0040f200(local_3e0,local_6f8);
        uVar6 = FUN_0040f200(uVar6,&DAT_0118666c);
        FUN_0040d060(uVar6);
        FUN_00409900();
        local_6e8 = (double)param_1[(longlong)(local_6c + 1) + 10] / local_6f0;
        FUN_00414480(&local_40);
        local_728 = 4;
        local_720 = PTR_DAT_02004830;
        FUN_00448510(&local_40,local_6e8,0,5);
        FUN_00414b50(&local_6f8,local_40);
        FUN_00414480(&local_40);
        FUN_01180450(&local_6f8,9);
        uVar6 = FUN_0040f200(local_3e0,local_6f8);
        uVar6 = FUN_0040f200(uVar6,&DAT_0118666c);
        FUN_0040d060(uVar6);
        FUN_00409900();
        local_6e8 = (double)param_1[(longlong)(local_6c + 2) + 10] / local_6f0;
        FUN_00414480(&local_48);
        local_728 = 4;
        local_720 = PTR_DAT_02004830;
        FUN_00448510(&local_48,local_6e8,0,5);
        FUN_00414b50(&local_6f8,local_48);
        FUN_00414480(&local_48);
        FUN_01180450(&local_6f8,9);
        uVar6 = FUN_0040f200(local_3e0,local_6f8);
        uVar6 = FUN_0040f200(uVar6,&DAT_0118666c);
        FUN_0040d060(uVar6);
        FUN_00409900();
        local_6e8 = (double)param_1[(longlong)local_6c + 0x1ff] / local_6f0;
        FUN_00414480(&local_50);
        local_728 = 4;
        local_720 = PTR_DAT_02004830;
        FUN_00448510(&local_50,local_6e8,0,5);
        FUN_00414b50(&local_6f8,local_50);
        FUN_00414480(&local_50);
        FUN_01180450(&local_6f8,9);
        uVar6 = FUN_0040f200(local_3e0,local_6f8);
        uVar6 = FUN_0040f200(uVar6,&DAT_0118666c);
        FUN_0040d060(uVar6);
        FUN_00409900();
        local_6e8 = (double)param_1[(longlong)(local_6c + 1) + 0x1ff] / local_6f0;
        FUN_00414480(&local_58);
        local_728 = 4;
        local_720 = PTR_DAT_02004830;
        FUN_00448510(&local_58,local_6e8,0,5);
        FUN_00414b50(&local_6f8,local_58);
        FUN_00414480(&local_58);
        FUN_01180450(&local_6f8,9);
        uVar6 = FUN_0040f200(local_3e0,local_6f8);
        uVar6 = FUN_0040f200(uVar6,&DAT_0118666c);
        FUN_0040d060(uVar6);
        FUN_00409900();
        local_6e8 = (double)param_1[(longlong)(local_6c + 2) + 0x1ff] / local_6f0;
        FUN_00414480(&local_60);
        local_728 = 4;
        local_720 = PTR_DAT_02004830;
        FUN_00448510(&local_60,local_6e8,0,5);
        FUN_00414b50(&local_6f8,local_60);
        FUN_00414480(&local_60);
        FUN_01180450(&local_6f8,9);
        uVar6 = FUN_0040f200(local_3e0,local_6f8);
        FUN_0040f590(uVar6);
        FUN_00409900();
        lVar5 = (longlong)local_6c;
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar5 + 10]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        iVar7 = local_6c + 1;
        uVar6 = FUN_0040f570(local_6d8,param_1[(longlong)iVar7 + 10]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        iVar8 = local_6c + 2;
        uVar6 = FUN_0040f570(local_6d8,param_1[(longlong)iVar8 + 10]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar5 + 0x1ff]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[(longlong)iVar7 + 0x1ff]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[(longlong)iVar8 + 0x1ff]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        local_68 = local_68 + 1;
        local_714 = local_714 + -1;
        iVar7 = local_714;
      } while (local_714 != 0);
    }
  }
  else if (sVar2 == 0x46) {
    uVar6 = FUN_0040f200(local_3e0,L"     Coefficients");
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"    N    [     N + 0            N + 1");
    FUN_0040d060(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"            N + 2            N + 3    ]");
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"   ===   ============================");
    FUN_0040d060(uVar6);
    FUN_00409900();
    FUN_0040f200(local_3e0,L"=======================================");
    FUN_0040f590();
    FUN_00409900();
    iVar7 = *(int *)(param_1 + 0x3f4) / 4;
    local_68 = 0;
    if (-1 < iVar7 + -1) {
      do {
        local_6c = local_68 * 4;
        uVar6 = FUN_0040ef30(local_3e0,local_6c);
        FUN_0040f590(uVar6);
        FUN_00409900();
        local_70 = 0;
        do {
          iVar8 = local_6c + local_70;
          uVar6 = FUN_0040f530(local_3e0,param_1[(longlong)iVar8 + 10],10,2);
          FUN_0040d060(uVar6);
          FUN_00409900();
          uVar6 = FUN_0040f570(local_6d8,param_1[(longlong)iVar8 + 10]);
          FUN_0040f590(uVar6);
          FUN_00409900();
          local_70 = local_70 + 1;
        } while (local_70 != 4);
        local_68 = local_68 + 1;
        iVar7 = iVar7 + -1;
        local_70 = 4;
      } while (iVar7 != 0);
    }
    local_70 = (*(int *)(param_1 + 0x3f4) / 4 + -1) * 4;
    if (*(int *)(param_1 + 0x3f4) % 4 != 0) {
      FUN_0040ef30(local_3e0,local_70);
      FUN_0040f590();
      FUN_00409900();
      iVar7 = *(int *)(param_1 + 0x3f4) % 4;
      local_6c = 0;
      if (-1 < iVar7 + -1) {
        do {
          iVar8 = local_70 + local_6c;
          uVar6 = FUN_0040f530(local_3e0,param_1[(longlong)iVar8 + 10],10,2);
          FUN_0040d060(uVar6);
          FUN_00409900();
          uVar6 = FUN_0040f570(local_6d8,param_1[(longlong)iVar8 + 10]);
          FUN_0040f590(uVar6);
          FUN_00409900();
          local_6c = local_6c + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  else {
    if (sVar2 != 0x49) {
      local_64 = 3;
      goto LAB_01185ac2;
    }
    uVar6 = FUN_0040f200(local_3e0,L"Numerator Coefficients                    ");
    FUN_0040d060(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"Denominator Coefficients");
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"  [() +     z^-1       +     z^-2     ]");
    FUN_0040d060(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"  [() +     z^-1       +     z^-2     ]");
    FUN_0040f590(uVar6);
    FUN_00409900();
    uVar6 = FUN_0040f200(local_3e0,L"   =====================================");
    FUN_0040d060(uVar6);
    FUN_00409900();
    FUN_0040f200(local_3e0,L"  =====================================");
    FUN_0040f590();
    FUN_00409900();
    iVar7 = (*(int *)(param_1 + 0x3f4) + 1) / 2;
    local_68 = 0;
    if (-1 < iVar7 + -1) {
      do {
        local_6c = local_68 * 3;
        uVar6 = FUN_0040ef30(local_3e0,local_68 + 1);
        lVar5 = (longlong)local_6c;
        uVar6 = FUN_0040f530(uVar6,param_1[lVar5 + 10],10,2);
        lVar9 = (longlong)(local_6c + 1);
        uVar6 = FUN_0040f530(uVar6,param_1[lVar9 + 10],10,2);
        FUN_0040d060(uVar6);
        FUN_00409900();
        lVar10 = (longlong)(local_6c + 2);
        uVar6 = FUN_0040f530(local_3e0,param_1[lVar10 + 10],10,2);
        uVar6 = FUN_0040f530(uVar6,param_1[lVar5 + 0x1ff],10,2);
        FUN_0040d060(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f530(local_3e0,param_1[lVar9 + 0x1ff],10,2);
        uVar6 = FUN_0040f530(uVar6,param_1[lVar10 + 0x1ff],10,2);
        FUN_0040f590(uVar6);
        FUN_00409900();
        lVar5 = (longlong)local_6c;
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar5 + 10]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar9 + 10]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar10 + 10]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar5 + 0x1ff]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar9 + 0x1ff]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        uVar6 = FUN_0040f570(local_6d8,param_1[lVar10 + 0x1ff]);
        FUN_0040f590(uVar6);
        FUN_00409900();
        local_68 = local_68 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  FUN_0040d150(local_3e0);
  FUN_00409900();
  FUN_0040d150(local_6d8);
  FUN_00409900();
  local_64 = 0;
LAB_01185ac2:
  FUN_00414480(&local_6f8);
  FUN_00414560(&local_90,3);
  FUN_00414560(&local_60,7);
  FUN_00414560(&local_res10,2);
  return local_64;
}

