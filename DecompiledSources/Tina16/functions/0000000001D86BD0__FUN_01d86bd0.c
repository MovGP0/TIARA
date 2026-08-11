/* Ghidra address: 01d86bd0 */
/* Ghidra symbol: FUN_01d86bd0 */


void FUN_01d86bd0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  code *local_140;
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
  undefined1 *local_a0;
  undefined1 local_96 [82];
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  int local_20;
  char local_1a;
  
  local_a0 = auStack_178;
  local_128 = 0;
  local_130 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_28 = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_00451b10(FUN_017f3480);
  FUN_00409da0(&local_a8,0);
  FUN_00441b80(&local_28,local_a8);
  FUN_00441640(&local_b8,local_28);
  FUN_0044f8b0(&local_b0,local_b8);
  FUN_00414ad0(PTR_DAT_020049a0,local_b0);
  FUN_01d78bd0(&local_c8,*(undefined8 *)PTR_DAT_020049a0,PTR_DAT_02001340);
  FUN_0044f8b0(&local_c0,local_c8);
  FUN_00414ad0(PTR_DAT_02005360,local_c0);
  FUN_0044f8b0(&local_d0,*(undefined8 *)PTR_DAT_02001340);
  FUN_00414ad0(PTR_DAT_02001340,local_d0);
  FUN_01d7d5a0();
  FUN_01d790e0(&local_e0,L"SettingsDir",*(undefined8 *)PTR_DAT_02005360);
  FUN_0044f8b0(&local_d8,local_e0);
  FUN_00414ad0(PTR_DAT_02005010,local_d8);
  FUN_01d790e0(&local_f0,L"CatalogDir",*(undefined8 *)PTR_DAT_020049a0);
  FUN_0044f8b0(&local_e8,local_f0);
  FUN_00414ad0(PTR_DAT_02004438,local_e8);
  FUN_01d790e0(&local_100,L"TempDir",*(undefined8 *)PTR_DAT_02005360);
  FUN_0044f8b0(&local_f8,local_100);
  FUN_00414ad0(PTR_DAT_020030c8,local_f8);
  FUN_00409da0(&local_108,1);
  FUN_01b1de70(&local_38,local_108);
  local_2c = 2;
  while( true ) {
    iVar3 = FUN_00409d20();
    if (iVar3 < local_2c) break;
    FUN_00409da0(&local_118,local_2c);
    FUN_01b1de70(&local_110,local_118);
    local_158 = local_110;
    FUN_00416cd0(&local_38,3,local_38,&DAT_01d87510);
    local_2c = local_2c + 1;
  }
  cVar1 = FUN_01b1dd50(1,local_38);
  if (cVar1 == '\0') {
    uVar4 = FUN_01d774f0();
    *(undefined4 *)PTR_DAT_02003c30 = uVar4;
    uVar4 = FUN_01d771e0();
    *(undefined4 *)PTR_DAT_02002560 = uVar4;
    *PTR_DAT_020017e8 = 0 < *(int *)PTR_DAT_02002560;
    if (*(int *)PTR_DAT_02003c30 != 0) {
      FUN_00782c20(*PTR_DAT_02002b98 & 0xfd);
      FUN_00782890(0);
    }
    FUN_00414ad0(*(longlong *)PTR_DAT_02004030 + 0xc0,L"TINA.CHM");
    FUN_0080c630(*(undefined8 *)PTR_DAT_02004030,L"TINA");
    uVar2 = FUN_01b1ffa0();
    *PTR_DAT_02003068 = uVar2;
    FUN_00416ba0(&local_120,*(undefined8 *)PTR_DAT_020049a0,L"\\tina.exe");
    FUN_01b1ee80(local_120);
    FUN_00527460(2);
    FUN_01d7a6c0();
    uVar5 = FUN_007fc180(&PTR_FUN_016fcf78,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02002e78 = uVar5;
    FUN_008059a0(*(undefined8 *)PTR_DAT_02002e78);
    (**(code **)(**(longlong **)PTR_DAT_02002e78 + 0x198))(*(longlong **)PTR_DAT_02002e78);
    FUN_00c37230();
    FUN_01d79d90(&local_20);
    FUN_014adef0();
    FUN_011569a0();
    uVar5 = FUN_007fc180(&PTR_FUN_017fbcb0,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001d08 = uVar5;
    uVar5 = FUN_00f47380(&DAT_00f45788,1);
    *(undefined8 *)PTR_DAT_02004ec8 = uVar5;
    FUN_0080ce30(*(undefined8 *)PTR_DAT_02004030,&PTR_FUN_01c4d9f0,PTR_DAT_02004e40);
    FUN_0080ce30(*(undefined8 *)PTR_DAT_02004030,&PTR_FUN_01a69da8,PTR_DAT_02001e00);
    FUN_0080ce30(*(undefined8 *)PTR_DAT_02004030,&PTR_FUN_013c78d8,PTR_DAT_02003ba0);
    FUN_00eadc90(*(undefined8 *)PTR_DAT_02004008);
    uVar5 = FUN_00442620(local_96,L"icon_TINA");
    local_44 = thunk_FUN_03ccce41(PTR_IMAGE_DOS_HEADER_0200c280,uVar5);
    FUN_0060d3b0(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x140),(longlong)local_44);
    *PTR_DAT_020036c0 = 0;
    local_1a = '\x01';
    uVar5 = FUN_007fc180(&PTR_FUN_0139e778,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020032b8 = uVar5;
    if (local_1a == '\0') {
      FUN_00805990(*(undefined8 *)PTR_DAT_02002e78);
      FUN_01d44a00(&local_128,"_|px3vaa|a=3P|wv)3\"\"!$");
      FUN_00416880(&local_130,local_128);
      FUN_0072d440(local_130,1,4,0);
      FUN_0080d170(*(undefined8 *)PTR_DAT_02004030);
    }
    if (local_20 != 0) {
      FUN_00805990(*(undefined8 *)PTR_DAT_02002e78);
      thunk_FUN_041604c6(0,L"Terminating TINA.",L"Startup Error",0);
      FUN_0080d170(*(undefined8 *)PTR_DAT_02004030);
    }
    if (*PTR_DAT_020052b8 != '\0') {
      FUN_0080ce30(*(undefined8 *)PTR_DAT_02004030,&PTR_FUN_01329b10,PTR_DAT_02002da0);
    }
    if ((*PTR_DAT_02005b28 == '\0') && (*PTR_DAT_02002688 == '\0')) {
      FUN_010db7e0(*(undefined8 *)PTR_DAT_020049a0,*(undefined8 *)PTR_DAT_02005360,
                   *(undefined8 *)PTR_DAT_02005010);
    }
    FUN_00414ad0(*(longlong *)PTR_DAT_020032b8 + 0x6f8,local_38);
    local_138 = *(undefined8 *)PTR_DAT_020032b8;
    local_140 = FUN_013a4110;
    FUN_00f833f0(&local_140,200);
    FUN_01c8f340(*(undefined8 *)PTR_DAT_02004e40);
    FUN_0080d020(*(undefined8 *)PTR_DAT_02004030);
    FUN_00410f20(*(undefined8 *)PTR_DAT_02002e78);
    *(undefined8 *)PTR_DAT_02002e78 = 0;
    *PTR_DAT_02003b20 = 1;
    FUN_01d42ec0(L"Main.0");
    FUN_00410f20(*(undefined8 *)PTR_DAT_02001d08);
    FUN_00410f20(*(undefined8 *)PTR_DAT_020032b8);
    FUN_00410f20(*(undefined8 *)PTR_DAT_02004ec8);
    FUN_00410f20(*(undefined8 *)PTR_DAT_02002da0);
    *(undefined8 *)PTR_DAT_02002da0 = 0;
    FUN_01d42ec0(L"Main.1");
    FUN_01d7a5f0();
    FUN_010db950();
    FUN_01d42ec0(L"Main.2");
    FUN_00410f20(*(undefined8 *)PTR_DAT_02003c70);
  }
  FUN_00414480(&local_130);
  FUN_004144d0(&local_128);
  FUN_00414560(&local_120,0x10);
  FUN_00414560(&local_40,2);
  FUN_00414480(&local_28);
  return;
}

