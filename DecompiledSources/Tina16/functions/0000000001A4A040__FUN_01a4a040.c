/* Ghidra address: 01a4a040 */
/* Ghidra symbol: FUN_01a4a040 */


undefined8
FUN_01a4a040(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,int param_5,
            char param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_res18;
  undefined1 *local_res20;
  undefined1 auStack_2b8 [32];
  undefined *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  longlong *local_270;
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
  undefined1 local_208;
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
  undefined1 *local_100;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong *local_60;
  uint local_54;
  int local_4c;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_100 = auStack_2b8;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_138 = 0;
  local_130 = 0;
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_54 = 0;
  *local_res20 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_30 + 0x60))(local_30,local_res18);
  FUN_00414480(&local_70);
  local_48 = (longlong *)FUN_01b21190(L"RUNFILTERW,RUNDESIGN,RUNANALYSIS,RUNCHAT",0x2c,0);
  iVar2 = (**(code **)(*local_30 + 0x28))();
  local_4c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_108,local_4c);
      local_298 = &DAT_01a4b21c;
      FUN_00416cd0(&local_70,3,local_70,local_108);
      local_4c = local_4c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_298 = (undefined *)CONCAT71(local_298._1_7_,1);
  FUN_00450070(&local_110,local_70,&DAT_01a4b230,&DAT_01a4b240);
  FUN_00414b50(&local_70,local_110);
  local_258 = FUN_019a4600();
  local_250 = FUN_004144d0(&local_b8);
  local_248 = FUN_004144d0(&local_c0);
  uVar4 = FUN_004144d0(&local_c8);
  local_260 = FUN_004144d0(&local_d0);
  uVar5 = FUN_004144d0(&local_d8);
  uVar6 = FUN_004144d0(&local_e0);
  uVar7 = FUN_004144d0(&local_e8);
  local_278 = FUN_004144d0(&local_f0);
  local_298 = (undefined *)local_260;
  local_270 = local_40;
  local_290 = uVar5;
  local_288 = uVar6;
  local_280 = uVar7;
  FUN_0129ace0(local_258,local_250,local_248,uVar4);
  FUN_00416ba0(&local_118,*(undefined8 *)(param_1 + 0x2ba0),L"\\aihelper.txt");
  (**(code **)(*local_40 + 0x100))(local_40,local_118);
  if ((*(uint *)(param_1 + 0x2954) & 1) == 0) {
    FUN_004144d0(&local_b8);
    FUN_004144d0(&local_c0);
    FUN_004144d0(&local_c8);
    FUN_004144d0(&local_d0);
    FUN_004144d0(&local_d8);
  }
  if ((*(uint *)(param_1 + 0x2954) & 2) == 0) {
    FUN_004144d0(&local_e0);
    FUN_004144d0(&local_e8);
  }
  FUN_00416880(&local_128,local_c0);
  FUN_0043e1a0(&local_120,local_128);
  iVar2 = FUN_004170c0(L"need support",local_120,1);
  if (0 < iVar2) {
    FUN_00414c70(&local_c0,"noname");
  }
  if (param_6 != '\0') {
    FUN_0043e1a0(&local_130,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x30));
    iVar2 = FUN_004170c0(L"re-design ",local_130,1);
    if (iVar2 < 1) {
      FUN_0043e1a0(&local_138,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x30));
      iVar2 = FUN_004170c0(L"redesign ",local_138,1);
      if (iVar2 < 1) goto LAB_01a4a6c7;
    }
  }
  FUN_004144d0(&local_c8);
  FUN_004144d0(&local_d8);
  FUN_004144d0(&local_e0);
LAB_01a4a6c7:
  FUN_00416880(&local_148,local_b8);
  local_298._0_1_ = 1;
  FUN_00450070(&local_140,local_70,L"%CIRCUIT_NAME%",local_148);
  FUN_00414b50(&local_70,local_140);
  FUN_00416880(&local_158,local_c0);
  local_298._0_1_ = 1;
  FUN_00450070(&local_150,local_70,L"%CIRCUIT_TITLE%",local_158);
  FUN_00414b50(&local_70,local_150);
  FUN_00416880(&local_168,local_c8);
  local_298._0_1_ = 1;
  FUN_00450070(&local_160,local_70,L"%COMPONENT_NAMES%",local_168);
  FUN_00414b50(&local_70,local_160);
  FUN_00416880(&local_178,local_d8);
  local_298._0_1_ = 1;
  FUN_00450070(&local_170,local_70,L"%COMPONENT_VALUES%",local_178);
  FUN_00414b50(&local_70,local_170);
  FUN_00416880(&local_188,local_e0);
  local_298._0_1_ = 1;
  FUN_00450070(&local_180,local_70,L"%CIRCUIT_TEXTS%",local_188);
  FUN_00414b50(&local_70,local_180);
  FUN_00416880(&local_198,local_d0);
  local_298._0_1_ = 1;
  FUN_00450070(&local_190,local_70,L"%SWITCH_NAMES%",local_198);
  FUN_00414b50(&local_70,local_190);
  local_298._0_1_ = 1;
  FUN_00450070(&local_1a0,local_70,L"%ACDCCALCULATION%",0);
  FUN_00414b50(&local_70,local_1a0);
  FUN_0043f750(&local_1b0,5);
  local_298._0_1_ = 1;
  FUN_00450070(&local_1a8,local_70,L"%Q_NUM%",local_1b0);
  FUN_00414b50(&local_70,local_1a8);
  (**(code **)(*local_40 + 0x60))(local_40,local_70);
  FUN_00416ba0(&local_1b8,*(undefined8 *)(param_1 + 0x2ba0),L"\\aihelper2.txt");
  (**(code **)(*local_40 + 0x100))(local_40,local_1b8);
  FUN_00414b50(&local_98,*(undefined8 *)(param_1 + 0x830));
  FUN_00414480(&local_88);
  if (*(int *)(*(longlong *)(param_1 + 0x2960) + 100) == 1) {
    FUN_01a49f80(param_1,&local_a0,*(longlong *)(param_1 + 0x2960));
    FUN_00416ba0(&local_1c0,local_98,local_a0);
    (**(code **)(*local_38 + 0xd8))(local_38,local_1c0);
    (**(code **)(*local_38 + 0x38))(local_38,&local_88);
    local_60 = (longlong *)FUN_01a49c00(param_1);
    local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = (**(code **)(*local_60 + 0x28))(local_60);
    if (iVar2 < 1) {
      local_298._0_1_ = 1;
      FUN_00450070(&local_1e0,local_88,L"%SPICENETLIST%",0);
      FUN_00414b50(&local_88,local_1e0);
    }
    else {
      (**(code **)(*local_68 + 0x78))(local_68,&DAT_01a4b488);
      (**(code **)(*local_68 + 0x78))
                (local_68,
                 L"Here is the SPICE netlist it can help fill in missing component data or clarify connections"
                );
      (**(code **)(*local_68 + 0x78))(local_68,0);
      (**(code **)(*local_68 + 0x88))(local_68,local_60);
      (**(code **)(*local_68 + 0x78))(local_68,0);
      (**(code **)(*local_68 + 0x78))(local_68,&DAT_01a4b488);
      (**(code **)(*local_68 + 0x38))(local_68,&local_1c8);
      FUN_00415dd0(&local_b0,local_1c8,0);
      FUN_00416880(&local_1d8,local_b0);
      local_298._0_1_ = 1;
      FUN_00450070(&local_1d0,local_88,L"%SPICENETLIST%",local_1d8);
      FUN_00414b50(&local_88,local_1d0);
    }
    FUN_00410f20(local_60);
    FUN_00410f20(local_68);
  }
  else {
    cVar1 = FUN_01a431f0(param_1);
    if (cVar1 == '\0') {
      FUN_00416ba0(&local_1f0,local_98,L"detect_act_new1.txt");
      (**(code **)(*local_38 + 0xd8))(local_38,local_1f0);
      FUN_01a49980(param_1,local_38);
      if (param_5 == 2) {
        (**(code **)(*local_38 + 0x38))(local_38,&local_88);
      }
    }
    else {
      FUN_00416ba0(&local_1e8,local_98,L"detect_act_single.txt");
      (**(code **)(*local_38 + 0xd8))(local_38,local_1e8);
      if (param_5 == 2) {
        (**(code **)(*local_38 + 0x38))(local_38,&local_88);
      }
    }
  }
  (**(code **)(*local_38 + 0x38))(local_38,&local_80);
  iVar2 = (**(code **)(*local_48 + 0x28))();
  local_4c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_48 + 0x18))(local_48,&local_a8,local_4c);
      local_298._0_1_ = 0xf8;
      local_298._1_7_ = 0x1a4b5;
      FUN_00416cd0(&local_90,3,&DAT_01a4b5f8,local_a8);
      iVar3 = FUN_004170c0(local_90,local_70,1);
      if (0 < iVar3) {
        if (param_6 == '\0') {
          local_298._0_1_ = 1;
          FUN_00450070(&local_200,local_70,local_90,0);
          FUN_00414b50(&local_70,local_200);
          local_210 = local_a8;
          local_208 = 0x11;
          FUN_00442f70(&local_a0,L"detect_act_%s.txt",&local_210,0);
          FUN_00416ba0(&local_218,local_98,local_a0);
          (**(code **)(*local_38 + 0xd8))(local_38,local_218);
          (**(code **)(*local_38 + 0x38))(local_38,&local_220);
          FUN_00416ad0(&local_88,local_220);
        }
        else {
          local_298._0_1_ = 1;
          FUN_00450070(&local_1f8,local_70,local_90,0);
          FUN_00414b50(&local_70,local_1f8);
        }
        iVar3 = FUN_00416db0(local_a8,L"RUNCHAT");
        if (iVar3 != 0) {
          local_54 = local_54 | 1;
        }
        *local_res20 = 1;
      }
      local_4c = local_4c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((param_6 == '\0') && ((local_54 & 1) != 0)) {
    FUN_00416ad0(&local_70,local_80);
  }
  FUN_00416ad0(&local_70,local_88);
  (**(code **)(*local_38 + 0x60))(local_38,local_70);
  (**(code **)(*local_38 + 0x38))(local_38,&local_70);
  if (param_6 != '\0') {
    FUN_00416ba0(&local_230,*(undefined8 *)(param_1 + 0x2ba0),L"\\prompt-intent.txt");
    cVar1 = FUN_00440a20(local_230,1);
    if (cVar1 != '\0') {
      FUN_00416ba0(&local_238,*(undefined8 *)(param_1 + 0x2ba0),L"\\prompt-intent.txt");
      FUN_004412f0(local_238);
    }
    FUN_00416ba0(&local_240,*(undefined8 *)(param_1 + 0x2ba0),L"\\prompt-question.txt");
    (**(code **)(*local_38 + 0x100))(local_38,local_240);
  }
  else {
    FUN_00416ba0(&local_228,*(undefined8 *)(param_1 + 0x2ba0),L"\\prompt-intent.txt");
    (**(code **)(*local_38 + 0x100))(local_38,local_228);
  }
  FUN_00414ad0(param_2,local_70);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00414560(&local_240,6);
  FUN_00414560(&local_200,0x20);
  FUN_00414590(&local_f0,9);
  FUN_00414560(&local_a8,8);
  FUN_00414480(&local_res18);
  return param_2;
}

