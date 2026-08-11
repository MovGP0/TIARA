/* Ghidra address: 01b203b0 */
/* Ghidra symbol: FUN_01b203b0 */


void FUN_01b203b0(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  int local_res10;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  short local_48 [4];
  undefined1 *local_40;
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_198;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  local_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_0085e080(&LAB_0085df68,&local_30);
  FUN_0085e080(&LAB_0085df68,&local_28);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00468b40(&local_60,local_res8);
  uVar1 = (**(code **)(*local_30 + 0x1d0))(local_30,&local_60,local_48);
  FUN_0041d630(uVar1);
  if (local_48[0] != 0) {
    if (local_res10 == 0) {
      FUN_00416ba0(&local_68,*(undefined8 *)PTR_DAT_020049a0,L"\\htmlreport.xsl");
      FUN_00468b40(&local_80,local_68);
      uVar1 = (**(code **)(*local_28 + 0x1d0))(local_28,&local_80,local_48);
      FUN_0041d630(uVar1);
      uVar2 = FUN_00414520(&local_88);
      uVar1 = (**(code **)(*local_30 + 0x118))(local_30,local_28,uVar2);
      FUN_0041d630(uVar1);
      FUN_004168b0(&local_38,local_88);
      local_178 = 1;
      FUN_00450070(&local_90,local_38,L"%E2%81%84",&DAT_01b20ce8);
      FUN_00414b50(&local_38,local_90);
      (**(code **)(*local_20 + 0x60))(local_20,local_38);
      FUN_004414c0(&local_98,local_res8,L".html");
      uVar2 = FUN_0045ae90();
      (**(code **)(*local_20 + 0x108))(local_20,local_98,uVar2);
      FUN_00416ba0(&local_a0,*(undefined8 *)PTR_DAT_020049a0,L"\\textreport.xsl");
      FUN_00468b40(&local_b8,local_a0);
      uVar1 = (**(code **)(*local_28 + 0x1d0))(local_28,&local_b8,local_48);
      FUN_0041d630(uVar1);
      uVar2 = FUN_00414520(&local_c0);
      uVar1 = (**(code **)(*local_30 + 0x118))(local_30,local_28,uVar2);
      FUN_0041d630(uVar1);
      FUN_004168b0(&local_c8,local_c0);
      (**(code **)(*local_20 + 0x60))(local_20,local_c8);
      FUN_004414c0(&local_d0,local_res8,L".log");
      uVar2 = FUN_0045ae90();
      (**(code **)(*local_20 + 0x108))(local_20,local_d0,uVar2);
    }
    else if ((0 < local_res10) && (local_res10 < 6)) {
      if (local_res10 == 1) {
        FUN_00416ba0(&local_d8,*(undefined8 *)PTR_DAT_020049a0,L"\\htmlReportModelTest_Standard.xsl"
                    );
        FUN_00468b40(&local_f0,local_d8);
        uVar1 = (**(code **)(*local_28 + 0x1d0))(local_28,&local_f0,local_48);
        FUN_0041d630(uVar1);
      }
      else if (local_res10 == 2) {
        FUN_00416ba0(&local_f8,*(undefined8 *)PTR_DAT_020049a0,L"\\htmlReportModelTest_Infineon.xsl"
                    );
        FUN_00468b40(&local_110,local_f8);
        uVar1 = (**(code **)(*local_28 + 0x1d0))(local_28,&local_110,local_48);
        FUN_0041d630(uVar1);
      }
      else if (local_res10 == 3) {
        FUN_00416ba0(&local_118,*(undefined8 *)PTR_DAT_020049a0,
                     L"\\htmlReportModelTest_Nisshinbo.xsl.");
        FUN_00468b40(&local_130,local_118);
        uVar1 = (**(code **)(*local_28 + 0x1d0))(local_28,&local_130,local_48);
        FUN_0041d630(uVar1);
      }
      else if (local_res10 == 4) {
        FUN_00416ba0(&local_138,*(undefined8 *)PTR_DAT_020049a0,L"\\htmlReportModelTest_TI.xsl.");
        FUN_00468b40(&local_150,local_138);
        uVar1 = (**(code **)(*local_28 + 0x1d0))(local_28,&local_150,local_48);
        FUN_0041d630(uVar1);
      }
      uVar2 = FUN_00414520(&local_158);
      uVar1 = (**(code **)(*local_30 + 0x118))(local_30,local_28,uVar2);
      FUN_0041d630(uVar1);
      FUN_004168b0(&local_38,local_158);
      local_178 = 1;
      FUN_00450070(&local_160,local_38,L"%E2%81%84",&DAT_01b20ce8);
      FUN_00414b50(&local_38,local_160);
      (**(code **)(*local_20 + 0x60))(local_20,local_38);
      FUN_004414c0(&local_168,local_res8,L".html");
      uVar2 = FUN_0045ae90();
      (**(code **)(*local_20 + 0x108))(local_20,local_168,uVar2);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_168,2);
  FUN_00414520(&local_158);
  FUN_00460ba0(&local_150);
  FUN_00414480(&local_138);
  FUN_00460ba0(&local_130);
  FUN_00414480(&local_118);
  FUN_00460ba0(&local_110);
  FUN_00414480(&local_f8);
  FUN_00460ba0(&local_f0);
  FUN_00414560(&local_d8,3);
  FUN_00414520(&local_c0);
  FUN_00460ba0(&local_b8);
  FUN_00414560(&local_a0,3);
  FUN_00414520(&local_88);
  FUN_00460ba0(&local_80);
  FUN_00414480(&local_68);
  FUN_00460ba0(&local_60);
  FUN_00414480(&local_38);
  FUN_00417840(&local_30,&DAT_0069aaf0,2);
  FUN_00414480(&local_res8);
  return;
}

