/* Ghidra address: 0154de90 */
/* Ghidra symbol: FUN_0154de90 */


undefined8
FUN_0154de90(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_res20;
  undefined1 auStack_158 [32];
  undefined *local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  int local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_158;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  local_20 = (longlong *)FUN_01b21480(local_res20);
  FUN_00414480(&local_50);
  local_58 = (**(code **)(*local_20 + 0x28))(local_20);
  local_58 = local_58 + -1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x6f8) = uVar1;
  FUN_00414480(param_1 + 0x90);
  if (param_3 == 1) {
    FUN_0043f750(&local_78,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x10));
    FUN_00416ba0(&local_30,L"bus_Nline_to_vec",local_78);
    FUN_00414b50(&local_40,&DAT_0154e698);
    FUN_00414b50(&local_48,&DAT_0154e6ac);
  }
  else {
    FUN_0043f750(&local_80,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x10));
    FUN_00416ba0(&local_30,L"bus_vec_to_Nline",local_80);
    FUN_00414b50(&local_40,&DAT_0154e6ac);
    FUN_00414b50(&local_48,&DAT_0154e698);
  }
  FUN_0156a520(param_1,L"LIBRARY ieee;");
  FUN_0156a720(param_1,L"use ieee.std_logic_1164.all;");
  local_98 = local_30;
  local_90 = 0x11;
  FUN_00442f70(&local_88,L"ENTITY %s IS PORT(",&local_98,0);
  FUN_0156a5c0(param_1,local_88);
  local_54 = 0;
  iVar2 = local_58;
  if (-1 < local_58 + -1) {
    do {
      FUN_0043f750(&local_a0,local_54);
      FUN_00416ba0(&local_38,L"line",local_a0);
      local_138 = &DAT_0154e7ac;
      FUN_00416cd0(&local_50,3,local_50,local_38);
      local_c0 = local_38;
      local_b8 = 0x11;
      local_b0 = local_40;
      local_a8 = 0x11;
      FUN_00442f70(&local_28,L"%s: %s std_logic;",&local_c0,1);
      FUN_0156a520(param_1,local_28);
      local_54 = local_54 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00416ad0(&local_50,&DAT_0154e7ec);
  local_f8 = CONCAT62(local_f8._2_6_,0x61);
  local_f0 = 9;
  local_e8 = local_48;
  local_e0 = 0x11;
  iVar2 = local_58 + -1;
  local_d0 = 0;
  local_d8 = iVar2;
  FUN_00442f70(&local_c8,L"%s: %s std_logic_vector(%d downto 0)",&local_f8,2);
  FUN_0156a520(param_1,local_c8);
  FUN_0156a670(param_1,&DAT_0154e854);
  local_98 = local_30;
  local_90 = 0x11;
  FUN_00442f70(&local_100,L"END %s;",&local_98,0);
  FUN_0156a720(param_1,local_100);
  local_98 = local_30;
  local_90 = 0x11;
  FUN_00442f70(&local_108,L"ARCHITECTURE arch of %s IS",&local_98,0);
  FUN_0156a520(param_1,local_108);
  FUN_0156a520(param_1,L"BEGIN");
  FUN_00414480(&local_28);
  FUN_0156a840(param_1,2);
  local_54 = iVar2;
  if (param_3 == 1) {
    if (-1 < iVar2) {
      do {
        FUN_0043f750(&local_110,local_54);
        FUN_00416ba0(&local_38,L"line",local_110);
        FUN_00416ad0(&local_28,local_38);
        if (0 < local_54) {
          FUN_00416ad0(&local_28,&DAT_0154e8e0);
        }
        local_54 = local_54 + -1;
      } while (local_54 != -1);
    }
    local_c0 = CONCAT62(local_c0._2_6_,0x61);
    local_b8 = 9;
    local_b0 = local_28;
    local_a8 = 0x11;
    FUN_00442f70(&local_118,L"%s <= %s;",&local_c0,1);
    FUN_0156a520(param_1,local_118);
  }
  else if (-1 < iVar2) {
    do {
      FUN_0043f750(&local_120,local_54);
      FUN_00416ba0(&local_38,L"line",local_120);
      local_f8 = local_38;
      local_f0 = 0x11;
      local_e8 = CONCAT62(local_e8._2_6_,0x61);
      local_e0 = 9;
      local_d8 = local_54;
      local_d0 = 0;
      FUN_00442f70(&local_128,L"%s <= %s(%d);",&local_f8,2);
      FUN_0156a520(param_1,local_128);
      local_54 = local_54 + -1;
    } while (local_54 != -1);
  }
  FUN_0156a860(param_1,2);
  FUN_0156a520(param_1,L"END arch;");
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x100))(*(longlong **)(param_1 + 0x6f8),param_5);
  FUN_00414ad0(param_2,local_50);
  FUN_00410f20(local_20);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x6f8));
  FUN_00414560(&local_128,6);
  FUN_00414480(&local_c8);
  FUN_00414480(&local_a0);
  FUN_00414560(&local_88,3);
  FUN_00414560(&local_50,6);
  FUN_00414560(&local_res20,2);
  return param_2;
}

