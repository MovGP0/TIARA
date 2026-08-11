/* Ghidra address: 01318b60 */
/* Ghidra symbol: FUN_01318b60 */


/* WARNING: Type propagation algorithm not settling */

longlong FUN_01318b60(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
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
  wchar_t *local_130;
  undefined8 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  bool local_b9;
  wchar_t *local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0 [15];
  char local_61;
  longlong local_60 [4];
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_d0 = auStack_218;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_140 = 0;
  local_130 = (wchar_t *)0x0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = (wchar_t *)0x0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_40 = (longlong *)0x0;
  local_60[3] = 0;
  local_60[2] = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar6;
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar6;
  *(undefined1 *)(local_res8 + 0x72) = 0;
  *(undefined1 *)(local_res8 + 0x73) = 1;
  *(undefined4 *)(local_res8 + 0x84) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0x98) = 0;
  FUN_00414ad0(local_res8 + 0x38,local_res20);
  FUN_00414ad0(local_res8 + 0x40,local_res18);
  FUN_00bac3d0(&local_40);
  cVar1 = (**(code **)(*local_40 + 0x170))(local_40,*(undefined8 *)(local_res8 + 0x38));
  if ((cVar1 != '\0') && ((**(code **)(*local_40 + 0x100))(local_40,&local_d8), local_d8 != 0)) {
    (**(code **)(*local_40 + 0x100))(local_40,&local_e0);
    FUN_0041b840(local_res8 + 0x18,local_e0);
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_f0,L"rootFolder");
    FUN_0044f8b0(&local_e8,local_f0);
    FUN_00414ad0(local_res8 + 0x48,local_e8);
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_f8,L"resultFolder");
    FUN_0044f8b0(local_60,local_f8);
    if (local_60[0] == 0) {
      FUN_00414ad0(local_res8 + 0x50,*(undefined8 *)(local_res8 + 0x48));
    }
    else {
      FUN_00414ad0(local_res8 + 0x50,local_60[0]);
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_100,L"showReport");
    uVar2 = FUN_0043fed0(local_100,1);
    *(undefined1 *)(local_res8 + 0x70) = uVar2;
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_108,L"filterGood");
    uVar2 = FUN_0043fed0(local_108,1);
    *(undefined1 *)(local_res8 + 0x71) = uVar2;
    if (param_5 == 0) {
      FUN_00414ad0(local_res8 + 0x58,*(undefined8 *)(local_res8 + 0x50));
    }
    else {
      FUN_0044f8b0(&local_110,param_5);
      FUN_00414ad0(local_res8 + 0x58,local_110);
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_118,L"testMode");
    local_b8 = local_118;
    if (local_118 == L"measurement") {
      local_b9 = true;
    }
    else if (local_118 == (wchar_t *)0x0) {
      local_b9 = false;
    }
    else {
      iVar4 = FUN_0043e420(local_118,L"measurement");
      local_b9 = iVar4 == 0;
    }
    if (local_b9 == false) {
      *(undefined1 *)(local_res8 + 0x76) = 0;
    }
    else {
      *(undefined1 *)(local_res8 + 0x76) = 1;
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_120,L"multiThread");
    cVar1 = FUN_0043fed0(local_120,0);
    if ((cVar1 == '\0') || (*(char *)(local_res8 + 0x76) == '\x01')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(local_res8 + 0x74) = uVar2;
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_128,L"maxThread");
    uVar3 = FUN_0043fc50(local_128,1);
    *(undefined4 *)(local_res8 + 0x88) = uVar3;
  }
  FUN_004414c0(&local_138,*(undefined8 *)(local_res8 + 0x38),L".xml");
  FUN_00441920(&local_130,local_138);
  local_1f8 = local_130;
  FUN_00416cd0(local_res8 + 0x30,3,*(undefined8 *)(local_res8 + 0x50),&DAT_01319c38);
  FUN_00414ad0(local_res8 + 0x60,*(undefined8 *)(local_res8 + 0x30));
  iVar4 = FUN_004170c0(L".xml",*(undefined8 *)(local_res8 + 0x30),1);
  FUN_00456760(local_res8 + 0x30,&local_140,iVar4 + 1,L"_test");
  FUN_00414ad0(local_res8 + 0x68,local_140);
  FUN_00bac3d0(&local_148);
  FUN_0041b840(local_res8 + 8,local_148);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x158))
            (*(longlong **)(local_res8 + 8),&local_158,&DAT_01319c78,
             L"version=\"1.0\" encoding=\"UTF-8\"");
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x98))
            (*(longlong **)(local_res8 + 8),&local_150,local_158);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x148))
            (*(longlong **)(local_res8 + 8),&local_160,L"report");
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x108))(*(longlong **)(local_res8 + 8),local_160);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x100))(*(longlong **)(local_res8 + 8),&local_168);
  FUN_0041b840(local_res8 + 0x10,local_168);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x148))
            (*(longlong **)(local_res8 + 8),local_60 + 3,L"header");
  (**(code **)(**(longlong **)(local_res8 + 0x10) + 0x98))
            (*(longlong **)(local_res8 + 0x10),&local_170,local_60[3]);
  iVar4 = FUN_004170c0(&DAT_01319d10,*(undefined8 *)PTR_DAT_02004728,1);
  if (iVar4 < 1) {
    FUN_00c7c750(&local_190,local_60[3],L"version",*(undefined8 *)PTR_DAT_02004728);
  }
  else {
    iVar4 = FUN_004170c0(&DAT_01319d10,*(undefined8 *)PTR_DAT_02004728,1);
    FUN_00416dc0(&local_188,*(undefined8 *)PTR_DAT_02004728,1,iVar4 + -1);
    FUN_0043ea00(&local_180,local_188);
    FUN_00c7c750(&local_178,local_60[3],L"version",local_180);
  }
  FUN_00414480(local_20);
  local_c8 = FUN_00448e70();
  FUN_0044a2b0(local_20,local_c8,PTR_DAT_02004830);
  FUN_00c7c750(&local_198,local_60[3],L"date",local_20[0]);
  FUN_00414480(local_20);
  local_b0 = FUN_00448ea0();
  FUN_00414480(&local_28);
  FUN_0044a300(&local_28,local_b0,PTR_DAT_02004830);
  FUN_00c7c750(&local_1a0,local_60[3],L"startTime",local_28);
  FUN_00414480(&local_28);
  FUN_00414480(&local_30);
  FUN_00448450(&local_30,local_b0,PTR_DAT_02004830);
  FUN_00c7c750(&local_1a8,local_60[3],L"delphiStartTime",local_30);
  FUN_00414480(&local_30);
  FUN_00c7c750(&local_1b0,local_60[3],L"rootFolder",*(undefined8 *)(local_res8 + 0x48));
  FUN_00c7c750(&local_1b8,local_60[3],L"resultFolder",*(undefined8 *)(local_res8 + 0x50));
  if (*(char *)(local_res8 + 0x76) == '\0') {
    FUN_0040d200(local_a0,0x38,0);
    local_a0[0] = 0x38;
    thunk_FUN_03bff373(local_a0);
    local_1f8 = L"TINA.INI";
    FUN_00416cd0(&local_1c0,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01319c38);
    local_38 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_1c0);
    local_a4 = (**(code **)(*local_38 + 0x20))(local_38,L"Analysis Setup",L"MaxNumberOfThreads",0);
    local_61 = (**(code **)(*local_38 + 0x30))
                         (local_38,L"Analysis Setup",L"MatrixCompilationEnabled",1);
    if (local_a4 == 0) {
      FUN_00414b50(local_60 + 2,&DAT_01319e60);
    }
    else {
      uVar5 = FUN_01b11110();
      if ((int)(uVar5 & 0xff) < local_a4) {
        FUN_00414b50(local_60 + 2,L"Dynamic");
      }
      else {
        FUN_0043f750(local_60 + 2,local_a4);
      }
    }
    if (local_61 == '\0') {
      FUN_00414b50(local_60 + 1,&DAT_01319ea4);
    }
    else {
      FUN_00414b50(local_60 + 1,&PTR_DAT_01319e90);
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_1c8,L"timeout");
    uVar3 = (**(code **)(*local_38 + 0x20))
                      (local_38,L"ModelTest Settings",L"MaxModelTestSimulationTime",0xe10);
    local_a8 = FUN_0043fc50(local_1c8,uVar3);
    if (local_a8 < 1) {
      FUN_00c7c750(&local_1e0,local_60[3],L"timeout",&LAB_01319f4c);
    }
    else {
      FUN_0043f750(&local_1d8,local_a8);
      FUN_00c7c750(&local_1d0,local_60[3],L"timeout",local_1d8);
    }
    FUN_00410f20(local_38);
  }
  FUN_0041b800(&local_1e0);
  FUN_00414480(&local_1d8);
  FUN_0041b800(&local_1d0);
  FUN_00414560(&local_1c8,2);
  FUN_00417840(&local_1b8,&DAT_00b9f8e0,6);
  FUN_00414560(&local_188,2);
  FUN_00417840(&local_178,&DAT_00b9f8e0,2);
  FUN_00417840(&local_168,&LAB_00b9fca0,2);
  FUN_0041b800(&local_158);
  FUN_0041b800(&local_150);
  FUN_0041b800(&local_148);
  FUN_00414560(&local_140,0xc);
  FUN_00417840(&local_e0,&LAB_00b9fca0,2);
  FUN_00414560(local_60,3);
  FUN_0041b800(local_60 + 3);
  FUN_0041b800(&local_40);
  FUN_00414560(&local_30,3);
  FUN_00414560(&local_res18,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

