/* Ghidra address: 01b844c0 */
/* Ghidra symbol: FUN_01b844c0 */


void FUN_01b844c0(longlong param_1,undefined **param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined **local_res10 [3];
  undefined **local_248;
  undefined1 local_240;
  undefined **local_238;
  undefined1 local_230;
  undefined **local_228;
  undefined1 local_220;
  undefined **local_218;
  undefined1 local_210;
  undefined **local_208;
  undefined1 local_200;
  undefined **local_1f8;
  undefined1 local_1f0;
  undefined **local_1e8;
  undefined1 local_1e0;
  undefined **local_1d8;
  undefined1 local_1d0;
  undefined **local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **local_198;
  undefined1 local_190;
  undefined **local_188;
  undefined1 local_180;
  undefined **local_178;
  undefined1 local_170;
  undefined **local_168;
  undefined1 local_160;
  undefined **local_158;
  undefined1 local_150;
  undefined **local_148;
  undefined1 local_140;
  undefined **local_138;
  undefined1 local_130;
  undefined **local_128;
  undefined1 local_120;
  undefined **local_118;
  undefined1 local_110;
  undefined **local_108;
  undefined1 local_100;
  undefined **local_f8;
  undefined1 local_f0;
  undefined **local_e8;
  undefined1 local_e0;
  undefined1 local_d4 [4];
  undefined **local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  undefined **local_90;
  undefined **local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  undefined **local_38;
  undefined **local_30 [2];
  
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_30[0] = (undefined **)0x0;
  local_38 = (undefined **)0x0;
  local_40 = (undefined **)0x0;
  local_48 = (undefined **)0x0;
  local_50 = (undefined **)0x0;
  local_58 = (undefined **)0x0;
  local_60 = (undefined **)0x0;
  local_68 = (undefined **)0x0;
  local_70 = 0;
  local_78 = 0;
  local_80 = (undefined **)0x0;
  local_88 = (undefined **)0x0;
  local_90 = (undefined **)0x0;
  local_98 = (undefined **)0x0;
  local_a0 = (undefined **)0x0;
  local_a8 = (undefined **)0x0;
  local_b0 = (undefined **)0x0;
  local_b8 = (undefined **)0x0;
  local_c0 = (undefined **)0x0;
  local_c8 = 0;
  local_d0 = (undefined **)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(&local_80,&DAT_01b860a0);
  bVar8 = false;
  iVar5 = FUN_00416db0(local_res10[0],L"voltage");
  if ((iVar5 == 0) || (iVar5 = FUN_00416db0(local_res10[0],L"current"), iVar5 == 0)) {
    FUN_00414b50(&local_40,&DAT_01b860ec);
    FUN_00414b50(&local_48,&DAT_01b860fc);
    iVar5 = FUN_00416db0(local_res10[0],L"voltage");
    if (iVar5 == 0) {
      FUN_00414b50(&local_c0,&DAT_01b8610c);
    }
    else {
      FUN_00414b50(&local_c0,&DAT_01b86120);
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    uVar1 = *(uint *)(lVar2 + 8);
    if (uVar1 == 2) {
      FUN_00414b50(&local_68,L"AC {Ampl} {Phase}");
      FUN_00414b50(&local_60,L"Ampl=1 Phase=0");
      FUN_00414b50(&local_80,&PTR_DAT_01b86190);
      bVar8 = true;
    }
    else if (uVar1 == 1) {
      FUN_00414b50(&local_68,L"{Value}");
      FUN_00414b50(&local_60,L"Value=1");
      FUN_00414b50(&local_80,&PTR_DAT_01b861dc);
      bVar8 = true;
    }
    if (bVar8) {
      local_138 = local_res10[0];
      local_130 = 0x11;
      local_128 = local_80;
      local_120 = 0x11;
      local_118 = (undefined **)CONCAT44(local_118._4_4_,*(undefined4 *)(param_1 + 0x358));
      local_110 = 0;
      local_108 = local_40;
      local_100 = 0x11;
      local_f8 = local_48;
      local_f0 = 0x11;
      local_e8 = local_60;
      local_e0 = 0x11;
      FUN_00442f70(&local_38,L".SUBCKT LT%s_%s_%d %s %s PARAMS: %s",&local_138,5);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_178 = local_c0;
      local_170 = 0x11;
      local_168 = local_40;
      local_160 = 0x11;
      local_158 = local_48;
      local_150 = 0x11;
      local_148 = local_68;
      local_140 = 0x11;
      FUN_00442f70(&local_38,L"%s %s %s %s",&local_178,3);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_198 = local_res10[0];
      local_190 = 0x11;
      local_188 = local_80;
      local_180 = 0x11;
      FUN_00442f70(&local_38,L".ENDS LT%s_%s",&local_198,1);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
    }
    else {
      FUN_00414480(&local_68);
      if ((uVar1 & 1) != 0) {
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + 0x18);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_1a0,0);
        FUN_00416cd0(&local_68,3,local_68,local_1a0,&DAT_01b86290);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      if ((*(uint *)(lVar2 + 8) & 4) != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x20);
        FUN_01a24c60(lVar2,&local_1a8);
        FUN_00416cd0(&local_68,5,local_68,*(undefined8 *)(lVar2 + 0x10),&DAT_01b862a0,local_1a8,
                     &DAT_01b862b0);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      if ((*(uint *)(lVar2 + 8) & 2) != 0) {
        FUN_00416ad0(&local_68,&DAT_01b862c4);
        plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x18) + 0x18);
        iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (0 < iVar5) {
          plVar3 = *(longlong **)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x18) + 0x18);
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_1b0,0);
          FUN_00416cd0(&local_68,3,local_68,local_1b0,&DAT_01b86290);
        }
        plVar3 = *(longlong **)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x18) + 0x18);
        iVar5 = (**(code **)(*plVar3 + 0x28))(plVar3);
        if (1 < iVar5) {
          plVar3 = *(longlong **)
                    (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + 0x18) + 0x18);
          (**(code **)(*plVar3 + 0x18))(plVar3,&local_1b8,1);
          FUN_00416cd0(&local_68,3,local_68,local_1b8,&DAT_01b86290);
        }
      }
      local_178 = local_res10[0];
      local_170 = 0x11;
      local_168 = (undefined **)CONCAT44(local_168._4_4_,*(undefined4 *)(param_1 + 0x358));
      local_160 = 0;
      local_158 = local_40;
      local_150 = 0x11;
      local_148 = local_48;
      local_140 = 0x11;
      FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s %s",&local_178,3);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_178 = local_c0;
      local_170 = 0x11;
      local_168 = local_40;
      local_160 = 0x11;
      local_158 = local_48;
      local_150 = 0x11;
      local_148 = local_68;
      local_140 = 0x11;
      FUN_00442f70(&local_38,L"%s %s %s %s",&local_178,3);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_1e8 = local_res10[0];
      local_1e0 = 0x11;
      local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x358));
      local_1d0 = 0;
      local_1c8 = local_80;
      local_1c0 = 0x11;
      FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_1e8,2);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
    }
  }
  else {
    cVar4 = FUN_01b80cf0(local_res10[0]);
    if (cVar4 == '\0') {
      iVar5 = FUN_00416db0(local_res10[0],&DAT_01b8635c);
      if (iVar5 == 0) {
        FUN_00414b50(&local_a0,&DAT_01b86370);
        FUN_00414b50(&local_a8,&DAT_01b86380);
        FUN_00414b50(&local_b0,&DAT_01b86390);
        FUN_01b811a0(&local_98,local_res10[0]);
        if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) != 0) {
          FUN_00414b50(&local_98,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
        }
        local_238 = local_res10[0];
        local_230 = 0x11;
        local_228 = (undefined **)CONCAT44(local_228._4_4_,*(undefined4 *)(param_1 + 0x358));
        local_220 = 0;
        local_218 = local_a0;
        local_210 = 0x11;
        local_208 = local_a8;
        local_200 = 0x11;
        local_1f8 = local_b0;
        local_1f0 = 0x11;
        FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s %s %s",&local_238,4);
        (**(code **)(*param_3 + 0x78))(param_3,local_38);
        local_178 = local_a0;
        local_170 = 0x11;
        local_168 = local_a8;
        local_160 = 0x11;
        local_158 = local_b0;
        local_150 = 0x11;
        local_148 = local_98;
        local_140 = 0x11;
        FUN_00442f70(&local_38,L"JT1 %s %s %s %s",&local_178,3);
        (**(code **)(*param_3 + 0x78))(param_3,local_38);
        local_198 = local_res10[0];
        local_190 = 0x11;
        local_188 = (undefined **)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
        local_180 = 0;
        FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
        (**(code **)(*param_3 + 0x78))(param_3,local_38);
        FUN_01b84090(param_1,local_res10[0],param_3,local_98);
      }
      else {
        cVar4 = FUN_01b80fa0(local_res10[0]);
        if (cVar4 == '\0') {
          cVar4 = FUN_01b80e10(local_res10[0],local_d4);
          if (cVar4 == '\0') {
            if (local_res10[0] == &PTR_s_leManager_TSourceInfo_01b8650c) {
              bVar8 = true;
            }
            else if (local_res10[0] == (undefined **)0x0) {
              bVar8 = false;
            }
            else {
              iVar5 = FUN_0043e420(local_res10[0],&PTR_s_leManager_TSourceInfo_01b8650c);
              bVar8 = iVar5 == 0;
            }
            if (bVar8) {
              FUN_00414b50(&local_a0,&DAT_01b86520);
              FUN_00414b50(&local_a8,&DAT_01b864c0);
              FUN_00414b50(&local_b0,&DAT_01b86530);
              FUN_00414b50(&local_b8,&DAT_01b86544);
              if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) == 0) {
                FUN_00414b50(&local_98,&DAT_01b86558);
              }
              else {
                FUN_00414b50(&local_98,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
              }
              local_138 = local_res10[0];
              local_130 = 0x11;
              local_128 = (undefined **)CONCAT44(local_128._4_4_,*(undefined4 *)(param_1 + 0x358));
              local_120 = 0;
              local_118 = local_a0;
              local_110 = 0x11;
              local_108 = local_a8;
              local_100 = 0x11;
              local_f8 = local_b0;
              local_f0 = 0x11;
              local_e8 = local_b8;
              local_e0 = 0x11;
              FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s %s %s %s",&local_138,5);
              (**(code **)(*param_3 + 0x78))(param_3,local_38);
              local_238 = local_a0;
              local_230 = 0x11;
              local_228 = local_a8;
              local_220 = 0x11;
              local_218 = local_b0;
              local_210 = 0x11;
              local_208 = local_b8;
              local_200 = 0x11;
              local_1f8 = local_98;
              local_1f0 = 0x11;
              FUN_00442f70(&local_38,L"S_SW1 %s %s %s %s %s",&local_238,4);
              (**(code **)(*param_3 + 0x78))(param_3,local_38);
              local_198 = local_res10[0];
              local_190 = 0x11;
              local_188 = (undefined **)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
              local_180 = 0;
              FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
              (**(code **)(*param_3 + 0x78))(param_3,local_38);
              cVar4 = FUN_01b87de0(param_1,local_98,&local_38);
              if (cVar4 == '\0') {
                uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,L"sw: model line not found");
                FUN_004134c0(uVar7);
              }
              else {
                (**(code **)(*param_3 + 0x78))(param_3,local_38);
              }
            }
            else {
              cVar4 = FUN_01b80350(local_res10[0]);
              if (cVar4 == '\0') {
                cVar4 = FUN_01b80620(local_res10[0]);
                if (cVar4 != '\0') {
                  FUN_00414b50(&local_98,L"FLIPFLOPMODEL");
                  FUN_0043e130(&local_c0,local_res10[0]);
                  iVar5 = FUN_00416db0(local_res10[0],L"dflop");
                  if (iVar5 == 0) {
                    FUN_00414b50(&local_58,L"pre clr clk d Q _Q");
                    FUN_00414b50(&local_d0,L"preB clrB clk d Q _Q");
                    FUN_00414b50(&local_88,L"pre preB");
                    FUN_00414b50(&local_90,L"clr clrB");
                    FUN_00414b50(&local_50,L"DFF(1)");
                  }
                  local_1e8 = local_res10[0];
                  local_1e0 = 0x11;
                  local_1d8 = (undefined **)
                              CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x358));
                  local_1d0 = 0;
                  local_1c8 = local_58;
                  local_1c0 = 0x11;
                  FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s",&local_1e8,2);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_1e8 = local_50;
                  local_1e0 = 0x11;
                  local_1d8 = local_d0;
                  local_1d0 = 0x11;
                  local_1c8 = local_98;
                  local_1c0 = 0x11;
                  FUN_00442f70(&local_38,L"U1 %s $G_DPWR $G_DGND %s %s IO_STD",&local_1e8,2);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_198 = local_88;
                  local_190 = 0x11;
                  local_188 = local_98;
                  local_180 = 0x11;
                  FUN_00442f70(&local_38,L"U2 inv $G_DPWR $G_DGND %s %s IO_STD",&local_198,1);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_198 = local_90;
                  local_190 = 0x11;
                  local_188 = local_98;
                  local_180 = 0x11;
                  FUN_00442f70(&local_38,L"U3 inv $G_DPWR $G_DGND %s %s IO_STD",&local_198,1);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_198 = local_res10[0];
                  local_190 = 0x11;
                  local_188 = (undefined **)
                              CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
                  local_180 = 0;
                  FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  FUN_01b84090(param_1,local_res10[0],param_3,local_98);
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x3c4) = 1;
                FUN_00414b50(&local_98,L"GATEMODEL");
                FUN_0043e130(&local_c0,local_res10[0]);
                if ((*(int *)(param_1 + 0x340) == 1) && (*(int *)(param_1 + 0x344) == 1)) {
                  uVar6 = FUN_01b8aea0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20),
                                       local_30);
                }
                else {
                  uVar6 = 2;
                }
                iVar5 = FUN_00416db0(local_res10[0],&DAT_01b86648);
                if (iVar5 == 0) {
                  FUN_00414b50(&local_58,L"in _Q");
                  local_248 = local_c0;
                  local_240 = 0x11;
                  FUN_00442f70(&local_50,&PTR_DAT_01b86674,&local_248,0);
                }
                else {
                  iVar5 = FUN_00416db0(local_res10[0],&DAT_01b86688);
                  if (iVar5 == 0) {
                    FUN_00414b50(&local_58,L"in Q");
                    local_248 = local_c0;
                    local_240 = 0x11;
                    FUN_00442f70(&local_50,&PTR_DAT_01b86674,&local_248,0);
                  }
                  else {
                    FUN_00414b50(&local_c8,L"a b c d e com ");
                    FUN_00416ba0(&local_d0,local_30[0],&DAT_01b866e0);
                    FUN_00416ba0(&local_58,local_c8,L"Q _Q");
                    FUN_00414b50(&local_88,L"Q _Q");
                    local_198 = local_c0;
                    local_190 = 0x11;
                    local_188 = (undefined **)CONCAT44(local_188._4_4_,uVar6);
                    local_180 = 0;
                    FUN_00442f70(&local_50,L"%s(%d)",&local_198,1);
                  }
                }
                cVar4 = FUN_01b80280(local_res10[0]);
                if (cVar4 == '\0') {
                  local_1e8 = local_res10[0];
                  local_1e0 = 0x11;
                  local_1d8 = (undefined **)
                              CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x358));
                  local_1d0 = 0;
                  local_1c8 = local_58;
                  local_1c0 = 0x11;
                  FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s",&local_1e8,2);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_1e8 = local_50;
                  local_1e0 = 0x11;
                  local_1d8 = local_58;
                  local_1d0 = 0x11;
                  local_1c8 = local_98;
                  local_1c0 = 0x11;
                  FUN_00442f70(&local_38,L"U1 %s $G_DPWR $G_DGND %s %s IO_STD",&local_1e8,2);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_198 = local_res10[0];
                  local_190 = 0x11;
                  local_188 = (undefined **)
                              CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
                  local_180 = 0;
                  FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                }
                else {
                  local_1e8 = local_res10[0];
                  local_1e0 = 0x11;
                  local_1d8 = (undefined **)
                              CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x358));
                  local_1d0 = 0;
                  local_1c8 = local_58;
                  local_1c0 = 0x11;
                  FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s",&local_1e8,2);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_1e8 = local_50;
                  local_1e0 = 0x11;
                  local_1d8 = local_d0;
                  local_1d0 = 0x11;
                  local_1c8 = local_98;
                  local_1c0 = 0x11;
                  FUN_00442f70(&local_38,L"U1 %s $G_DPWR $G_DGND %s %s IO_STD",&local_1e8,2);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_198 = local_88;
                  local_190 = 0x11;
                  local_188 = local_98;
                  local_180 = 0x11;
                  FUN_00442f70(&local_38,L"U2 inv $G_DPWR $G_DGND %s %s IO_STD",&local_198,1);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                  local_198 = local_res10[0];
                  local_190 = 0x11;
                  local_188 = (undefined **)
                              CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
                  local_180 = 0;
                  FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
                  (**(code **)(*param_3 + 0x78))(param_3,local_38);
                }
                FUN_01b84090(param_1,local_res10[0],param_3,local_98);
              }
            }
          }
          else {
            FUN_00414b50(&local_a0,&DAT_01b864b0);
            FUN_00414b50(&local_a8,&DAT_01b864c0);
            FUN_00414b50(&local_b0,&DAT_01b864d0);
            FUN_01b811a0(&local_98,local_res10[0]);
            if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) != 0) {
              FUN_00414b50(&local_98,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
            }
            local_238 = local_res10[0];
            local_230 = 0x11;
            local_228 = (undefined **)CONCAT44(local_228._4_4_,*(undefined4 *)(param_1 + 0x358));
            local_220 = 0;
            local_218 = local_a0;
            local_210 = 0x11;
            local_208 = local_a8;
            local_200 = 0x11;
            local_1f8 = local_b0;
            local_1f0 = 0x11;
            FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s %s %s",&local_238,4);
            (**(code **)(*param_3 + 0x78))(param_3,local_38);
            local_178 = local_a0;
            local_170 = 0x11;
            local_168 = local_a8;
            local_160 = 0x11;
            local_158 = local_b0;
            local_150 = 0x11;
            local_148 = local_98;
            local_140 = 0x11;
            FUN_00442f70(&local_38,L"Q1 %s %s %s %s",&local_178,3);
            (**(code **)(*param_3 + 0x78))(param_3,local_38);
            local_198 = local_res10[0];
            local_190 = 0x11;
            local_188 = (undefined **)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
            local_180 = 0;
            FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
            (**(code **)(*param_3 + 0x78))(param_3,local_38);
            FUN_01b84090(param_1,local_res10[0],param_3,local_98);
          }
        }
        else {
          FUN_00414b50(&local_a0,&DAT_01b86370);
          FUN_00414b50(&local_a8,&DAT_01b86380);
          FUN_00414b50(&local_b0,&DAT_01b86390);
          FUN_00414480(&local_98);
          if (local_98 == (undefined **)0x0) {
            if (local_res10[0] == (undefined **)L"nmos") {
              bVar8 = true;
            }
            else if (local_res10[0] == (undefined **)0x0) {
              bVar8 = false;
            }
            else {
              iVar5 = FUN_0043e420(local_res10[0],L"nmos");
              bVar8 = iVar5 == 0;
            }
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_00414b50(&local_98,L"NMOSMODEL");
          }
          else if (local_98 == (undefined **)0x0) {
            if (local_res10[0] == (undefined **)L"pmos") {
              bVar8 = true;
            }
            else if (local_res10[0] == (undefined **)0x0) {
              bVar8 = false;
            }
            else {
              iVar5 = FUN_0043e420(local_res10[0],L"pmos");
              bVar8 = iVar5 == 0;
            }
            if (bVar8) {
              FUN_00414b50(&local_98,L"PMOSMODEL");
            }
          }
          local_238 = local_res10[0];
          local_230 = 0x11;
          local_228 = (undefined **)CONCAT44(local_228._4_4_,*(undefined4 *)(param_1 + 0x358));
          local_220 = 0;
          local_218 = local_a0;
          local_210 = 0x11;
          local_208 = local_a8;
          local_200 = 0x11;
          local_1f8 = local_b0;
          local_1f0 = 0x11;
          FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s %s %s",&local_238,4);
          (**(code **)(*param_3 + 0x78))(param_3,local_38);
          local_238 = local_a0;
          local_230 = 0x11;
          local_228 = local_a8;
          local_220 = 0x11;
          local_218 = local_b0;
          local_210 = 0x11;
          local_208 = local_b0;
          local_200 = 0x11;
          local_1f8 = local_98;
          local_1f0 = 0x11;
          FUN_00442f70(&local_38,L"MT1 %s %s %s %s %s",&local_238,4);
          (**(code **)(*param_3 + 0x78))(param_3,local_38);
          local_198 = local_res10[0];
          local_190 = 0x11;
          local_188 = (undefined **)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
          local_180 = 0;
          FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
          (**(code **)(*param_3 + 0x78))(param_3,local_38);
          FUN_01b84090(param_1,local_res10[0],param_3,local_98);
        }
      }
    }
    else {
      FUN_00414b50(&local_40,&DAT_01b860ec);
      FUN_00414b50(&local_48,&DAT_01b860fc);
      FUN_01b811a0(&local_98,local_res10[0]);
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) != 0) {
        FUN_00414b50(&local_98,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28));
      }
      local_178 = local_res10[0];
      local_170 = 0x11;
      local_168 = (undefined **)CONCAT44(local_168._4_4_,*(undefined4 *)(param_1 + 0x358));
      local_160 = 0;
      local_158 = local_40;
      local_150 = 0x11;
      local_148 = local_48;
      local_140 = 0x11;
      FUN_00442f70(&local_38,L".SUBCKT LT%s_%d %s %s",&local_178,3);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_1e8 = local_40;
      local_1e0 = 0x11;
      local_1d8 = local_48;
      local_1d0 = 0x11;
      local_1c8 = local_98;
      local_1c0 = 0x11;
      FUN_00442f70(&local_38,L"D1 %s %s %s",&local_1e8,2);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      local_198 = local_res10[0];
      local_190 = 0x11;
      local_188 = (undefined **)CONCAT44(local_188._4_4_,*(undefined4 *)(param_1 + 0x358));
      local_180 = 0;
      FUN_00442f70(&local_38,L".ENDS LT%s_%d",&local_198,1);
      (**(code **)(*param_3 + 0x78))(param_3,local_38);
      FUN_01b84090(param_1,local_res10[0],param_3,local_98);
    }
  }
  *(int *)(param_1 + 0x358) = *(int *)(param_1 + 0x358) + 1;
  FUN_00414560(&local_1b8,4);
  FUN_00414560(&local_d0,0x15);
  FUN_00414480(local_res10);
  return;
}

