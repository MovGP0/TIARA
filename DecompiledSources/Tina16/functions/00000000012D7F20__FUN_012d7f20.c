/* Ghidra address: 012d7f20 */
/* Ghidra symbol: FUN_012d7f20 */


longlong FUN_012d7f20(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
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
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
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
  undefined4 local_a0 [2];
  ulonglong local_98;
  char local_61;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_d0 = auStack_1d8;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_170 = 0;
  local_178 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_148 = 0;
  local_150 = 0;
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
  local_48 = (longlong *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
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
  *(undefined1 *)(local_res8 + 0x62) = 0;
  *(undefined1 *)(local_res8 + 99) = 1;
  *(undefined4 *)(local_res8 + 0x74) = 0xffffffff;
  FUN_00414ad0(local_res8 + 0x38,local_res20);
  FUN_00414ad0(local_res8 + 0x40,local_res18);
  FUN_00bac3d0(&local_40);
  cVar1 = (**(code **)(*local_40 + 0x170))(local_40,*(undefined8 *)(local_res8 + 0x38));
  if ((cVar1 != '\0') && ((**(code **)(*local_40 + 0x100))(local_40,&local_d8), local_d8 != 0)) {
    (**(code **)(*local_40 + 0x100))(local_40,&local_e0);
    FUN_0041b840(local_res8 + 0x18,local_e0);
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_f0,L"rootfolder");
    FUN_0044f8b0(&local_e8,local_f0);
    FUN_00414ad0(local_res8 + 0x48,local_e8);
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_f8,L"resultfolder");
    FUN_0044f8b0(&local_60,local_f8);
    if (local_60 == 0) {
      FUN_00414ad0(local_res8 + 0x50,*(undefined8 *)(local_res8 + 0x48));
    }
    else {
      FUN_00414ad0(local_res8 + 0x50,local_60);
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_100,L"showreport");
    uVar2 = FUN_0043fed0(local_100,1);
    *(undefined1 *)(local_res8 + 0x60) = uVar2;
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_108,L"filtergood");
    uVar2 = FUN_0043fed0(local_108,1);
    *(undefined1 *)(local_res8 + 0x61) = uVar2;
    if (param_5 == 0) {
      FUN_00414ad0(local_res8 + 0x58,*(undefined8 *)(local_res8 + 0x50));
    }
    else {
      FUN_0044f8b0(&local_110,param_5);
      FUN_00414ad0(local_res8 + 0x58,local_110);
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_118,L"testmode");
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
      *(undefined1 *)(local_res8 + 0x65) = 0;
    }
    else {
      *(undefined1 *)(local_res8 + 0x65) = 1;
    }
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_120,L"multithread");
    cVar1 = FUN_0043fed0(local_120,0);
    if ((cVar1 == '\0') || (*(char *)(local_res8 + 0x65) == '\x01')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *(undefined1 *)(local_res8 + 100) = uVar2;
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_128,L"maxthread");
    uVar3 = FUN_0043fc50(local_128,1);
    *(undefined4 *)(local_res8 + 0x78) = uVar3;
  }
  FUN_004414c0(&local_138,*(undefined8 *)(local_res8 + 0x38),L".xml");
  FUN_00441920(&local_130,local_138);
  local_1b8 = local_130;
  FUN_00416cd0(local_res8 + 0x30,3,*(undefined8 *)(local_res8 + 0x50),&DAT_012d8fa8);
  FUN_00bac3d0(&local_140);
  FUN_0041b840(local_res8 + 8,local_140);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x158))
            (*(longlong **)(local_res8 + 8),&local_150,&DAT_012d8fd0,
             L"version=\"1.0\" encoding=\"UTF-8\"");
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x98))
            (*(longlong **)(local_res8 + 8),&local_148,local_150);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x148))
            (*(longlong **)(local_res8 + 8),&local_158,L"report");
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x108))(*(longlong **)(local_res8 + 8),local_158);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x100))(*(longlong **)(local_res8 + 8),&local_160);
  FUN_0041b840(local_res8 + 0x10,local_160);
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x148))
            (*(longlong **)(local_res8 + 8),&local_48,L"header");
  (**(code **)(**(longlong **)(local_res8 + 0x10) + 0x98))
            (*(longlong **)(local_res8 + 0x10),&local_168,local_48);
  iVar4 = FUN_004170c0(&DAT_012d9068,*(undefined8 *)PTR_DAT_02004728,1);
  if (iVar4 < 1) {
    (**(code **)(*local_48 + 0x108))(local_48,L"version",*(undefined8 *)PTR_DAT_02004728);
  }
  else {
    iVar4 = FUN_004170c0(&DAT_012d9068,*(undefined8 *)PTR_DAT_02004728,1);
    FUN_00416dc0(&local_178,*(undefined8 *)PTR_DAT_02004728,1,iVar4 + -1);
    FUN_0043ea00(&local_170,local_178);
    (**(code **)(*local_48 + 0x108))(local_48,L"version",local_170);
  }
  FUN_00414480(local_20);
  local_c8 = FUN_00448e70();
  FUN_0044a2b0(local_20,local_c8,PTR_DAT_02004830);
  (**(code **)(*local_48 + 0x108))(local_48,L"date",local_20[0]);
  FUN_00414480(local_20);
  local_b0 = FUN_00448ea0();
  FUN_00414480(&local_28);
  FUN_0044a300(&local_28,local_b0,PTR_DAT_02004830);
  (**(code **)(*local_48 + 0x108))(local_48,L"starttime",local_28);
  FUN_00414480(&local_28);
  FUN_00414480(&local_30);
  FUN_00448450(&local_30,local_b0,PTR_DAT_02004830);
  (**(code **)(*local_48 + 0x108))(local_48,L"delphistarttime",local_30);
  FUN_00414480(&local_30);
  (**(code **)(*local_48 + 0x108))(local_48,L"rootfolder",*(undefined8 *)(local_res8 + 0x48));
  (**(code **)(*local_48 + 0x108))(local_48,L"resultfolder",*(undefined8 *)(local_res8 + 0x50));
  if (*(char *)(local_res8 + 0x65) == '\0') {
    FUN_0040d200(local_a0,0x38,0);
    local_a0[0] = 0x38;
    thunk_FUN_03bff373(local_a0);
    local_1b8 = L"TINA.INI";
    FUN_00416cd0(&local_180,3,*(undefined8 *)PTR_DAT_02005010,&DAT_012d8fa8);
    local_38 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_180);
    local_a4 = (**(code **)(*local_38 + 0x20))(local_38,L"Analysis Setup",L"MaxNumberOfThreads",0);
    local_61 = (**(code **)(*local_38 + 0x30))
                         (local_38,L"Analysis Setup",L"MatrixCompilationEnabled",1);
    if (local_a4 == 0) {
      FUN_00414b50(&local_50,&DAT_012d91b8);
    }
    else {
      uVar5 = FUN_01b11110();
      if ((int)(uVar5 & 0xff) < local_a4) {
        FUN_00414b50(&local_50,L"Dynamic");
      }
      else {
        FUN_0043f750(&local_50,local_a4);
      }
    }
    if (local_61 == '\0') {
      FUN_00414b50(&local_58,&DAT_012d91fc);
    }
    else {
      FUN_00414b50(&local_58,&PTR_DAT_012d91e8);
    }
    FUN_00416800(&local_188,PTR_DAT_02004508 + 0x3e,0x30);
    (**(code **)(*local_48 + 0x108))(local_48,&DAT_012d9210,local_188);
    FUN_0043f780(&local_190,local_98 / 0x100000);
    (**(code **)(*local_48 + 0x108))(local_48,L"memory",local_190);
    (**(code **)(*local_48 + 0x108))(local_48,L"core",local_50);
    (**(code **)(*local_48 + 0x108))(local_48,L"matrix",local_58);
    (**(code **)(**(longlong **)(local_res8 + 0x18) + 0x100))
              (*(longlong **)(local_res8 + 0x18),&local_198,L"timeout");
    uVar3 = (**(code **)(*local_38 + 0x20))
                      (local_38,L"TestMode Settings",L"MaxAutoTestSimulationTime",0xe10);
    local_a8 = FUN_0043fc50(local_198,uVar3);
    if (local_a8 < 1) {
      (**(code **)(*local_48 + 0x108))(local_48,L"timeout",&DAT_012d9300);
    }
    else {
      FUN_0043f750(&local_1a0,local_a8);
      (**(code **)(*local_48 + 0x108))(local_48,L"timeout",local_1a0);
    }
    FUN_00410f20(local_38);
  }
  (**(code **)(**(longlong **)(local_res8 + 8) + 0x148))
            (*(longlong **)(local_res8 + 8),&local_1a8,L"testbench");
  FUN_0041b840(local_res8 + 0x18,local_1a8);
  FUN_0041b800(&local_1a8);
  FUN_00414560(&local_1a0,7);
  FUN_0041b800(&local_168);
  FUN_00417840(&local_160,&LAB_00b9fca0,2);
  FUN_0041b800(&local_150);
  FUN_0041b800(&local_148);
  FUN_0041b800(&local_140);
  FUN_00414560(&local_138,0xb);
  FUN_00417840(&local_e0,&LAB_00b9fca0,2);
  FUN_00414560(&local_60,3);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_40);
  FUN_00414560(&local_30,3);
  FUN_00414560(&local_res18,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

