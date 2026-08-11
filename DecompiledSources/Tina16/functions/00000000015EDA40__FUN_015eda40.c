/* Ghidra address: 015eda40 */
/* Ghidra symbol: FUN_015eda40 */


longlong * FUN_015eda40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_988 [32];
  undefined *local_968;
  int local_960;
  wchar_t *local_958;
  undefined1 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 local_8f0;
  undefined8 local_8e8;
  undefined1 *local_8e0;
  int local_8cc;
  undefined8 local_8c8;
  undefined8 local_8c0;
  char local_8b1;
  undefined8 local_8b0;
  longlong local_8a8;
  undefined8 local_8a0;
  undefined8 local_898;
  undefined8 local_890;
  undefined8 local_888 [2];
  undefined8 local_878;
  longlong *local_870;
  int local_864;
  int local_85c;
  int local_840;
  int local_83c;
  char local_82c;
  char local_829;
  longlong *local_828;
  undefined1 local_820 [2048];
  longlong local_20 [2];
  
  local_8e0 = auStack_988;
  local_940 = 0;
  local_948 = 0;
  local_938 = 0;
  local_930 = 0;
  local_928 = 0;
  local_920 = 0;
  local_910 = 0;
  local_918 = 0;
  local_908 = 0;
  local_900 = 0;
  local_8f8 = 0;
  local_8f0 = 0;
  local_8e8 = 0;
  local_888[0] = 0;
  local_890 = 0;
  local_898 = 0;
  local_8a0 = 0;
  local_8a8 = 0;
  local_8b0 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_8b1 = '\0';
  local_82c = '\x01';
  local_829 = '\0';
  local_870 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar1 = FUN_00442620(local_820,local_res18);
  FUN_015fcc20(uVar1,local_20,0,0);
  if (local_82c != '\0') {
    local_960 = FUN_016024b0(local_res10,0);
    local_968 = (undefined *)0x0;
    local_958 = L"GetVHDLCircuitFromMemory";
    local_950 = 1;
    local_85c = local_960;
    local_878 = FUN_015f27d0(local_res18,local_20[0],0,param_1);
    local_8c0 = FUN_015f9cf0(local_20[0],local_878);
    uVar1 = FUN_015f9d00(local_20[0]);
    FUN_004167a0(local_888,uVar1);
    FUN_00414b50(&local_890,L"ignored");
    local_8c8 = FUN_015f9ee0(local_20[0],local_8c0,PTR_DAT_020030c0[0x3c],&local_840);
    if (local_840 == 1) {
      uVar1 = FUN_00b89270();
      FUN_00b8e520(uVar1,&local_8e8,0x89d);
      FUN_015fcf20(local_8e8,0,0,0);
    }
    if (local_829 == '\0') {
      FUN_004167a0(&local_8a8,local_8c8);
    }
    local_864 = FUN_004170c0(&DAT_015ee4cc,local_8a8,1);
    if (0 < local_864) {
      FUN_00416dc0(&local_8a0,local_8a8,1,local_864 + -1);
      local_8cc = 0;
      if (local_8a8 != 0) {
        local_8cc = *(int *)(local_8a8 + -4);
      }
      FUN_00416dc0(&local_8b0,local_8a8,local_864 + 1,local_8cc - local_864);
      FUN_00414b50(&local_8a8,local_8a0);
      local_8b1 = '\x01';
    }
    local_83c = 0;
    if ((local_85c == 1) || (local_85c == 5)) {
      (**(code **)(*local_870 + 200))(local_870,0,L"------------------------------------");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,L"-- TINA HDL Macro Description Begin");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,&DAT_015ee588);
      local_83c = local_83c + 1;
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_8f0,3,L"-- entity_name:",local_888[0]);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_8f0);
      local_83c = local_83c + 1;
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_8f8,3,L"-- arch_name:",local_890);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_8f8);
      local_83c = local_83c + 1;
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_900,3,L"-- ports:",local_8a8);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_900);
      local_83c = local_83c + 1;
      if (local_8b1 != '\0') {
        local_968 = &DAT_015ee5c8;
        FUN_00416cd0(&local_908,3,L"-- _vec:",local_8b0);
        (**(code **)(*local_870 + 200))(local_870,local_83c,local_908);
        local_83c = local_83c + 1;
      }
      FUN_015fc2e0(&local_918,local_85c);
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_910,3,L"-- Mode:",local_918);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_910);
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,&DAT_015ee588);
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,L"-- TINA HDL Macro Description End");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,L"------------------------------------");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,0);
    }
    else {
      (**(code **)(*local_870 + 200))(local_870,0,L"////////////////////////////////////");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,L"// TINA HDL Macro Description Begin");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,&DAT_015ee75c);
      local_83c = local_83c + 1;
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_920,3,L"// entity_name:",local_888[0]);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_920);
      local_83c = local_83c + 1;
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_928,3,L"// arch_name:",local_890);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_928);
      local_83c = local_83c + 1;
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_930,3,L"// ports:",local_8a8);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_930);
      local_83c = local_83c + 1;
      if (local_8b1 != '\0') {
        local_968 = &DAT_015ee5c8;
        FUN_00416cd0(&local_938,3,L"// _vec:",local_8b0);
        (**(code **)(*local_870 + 200))(local_870,local_83c,local_938);
        local_83c = local_83c + 1;
      }
      FUN_015fc2e0(&local_948,local_85c);
      local_968 = &DAT_015ee5c8;
      FUN_00416cd0(&local_940,3,L"// Mode:",local_948);
      (**(code **)(*local_870 + 200))(local_870,local_83c,local_940);
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,&DAT_015ee75c);
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,L"// TINA HDL Macro Description End");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,L"////////////////////////////////////");
      local_83c = local_83c + 1;
      (**(code **)(*local_870 + 200))(local_870,local_83c,0);
    }
  }
  local_828 = local_870;
  if (local_20[0] != 0) {
    uVar1 = FUN_00442620(local_820,local_res18);
    FUN_015fcd60(local_20[0],uVar1,0);
    local_20[0] = 0;
  }
  FUN_00414560(&local_948,0xd);
  FUN_00414560(&local_8b0,6);
  FUN_00414560(&local_res10,2);
  return local_828;
}

