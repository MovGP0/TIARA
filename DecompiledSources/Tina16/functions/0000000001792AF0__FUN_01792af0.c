/* Ghidra address: 01792af0 */
/* Ghidra symbol: FUN_01792af0 */


void FUN_01792af0(longlong param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ushort uVar9;
  longlong **pplVar10;
  char cVar11;
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
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78 [4];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ushort *local_30;
  longlong local_28;
  longlong local_20;
  
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_120 = 0;
  local_130 = 0;
  local_140 = 0;
  local_148 = 0;
  local_138 = 0;
  local_128 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = (ushort *)0x0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_0179c840(param_1);
  *PTR_DAT_020010e0 = 1;
  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0xd10) = uVar6;
  uVar6 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0xd28) = uVar6;
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xd18) = uVar6;
  uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0xd08) = uVar6;
  FUN_004b67b0(uVar6,1);
  *(undefined8 *)(param_1 + 0xd20) = 0;
  *(undefined4 *)(param_1 + 0xca0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xcb0) = 0xffffffff;
  uVar6 = FUN_00c3d400(&LAB_00c3a6d0,1);
  *(undefined8 *)(param_1 + 0xca8) = uVar6;
  lVar8 = *(longlong *)(param_1 + 0x758);
  *(uint *)(lVar8 + 0xa0) = *(uint *)(lVar8 + 0xa0) | 0x2000;
  uVar6 = FUN_01791a00(&PTR_FUN_0178b5e0,1,lVar8);
  *(undefined8 *)(param_1 + 0xcb8) = uVar6;
  uVar6 = FUN_00c5c610(&DAT_00c5be98,1);
  *(undefined8 *)(param_1 + 0xd50) = uVar6;
  *(undefined4 *)(param_1 + 0xcf8) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0xfffffffe;
  *(undefined4 *)(param_1 + 0xd40) = 0x80;
  FUN_007e2f80(*(undefined8 *)(param_1 + 0xb38),0);
  FUN_01798ba0(param_1);
  if (*(int *)PTR_DAT_020033a8 < 5) {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))
              (*(longlong **)(param_1 + 0x710),*(int *)PTR_DAT_020033a8 + -1);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),4);
  }
  FUN_017949a0(param_1,0);
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x940));
  FUN_0044f850(&local_80,*(undefined8 *)PTR_DAT_020049a0);
  FUN_00414ad0(param_1 + 0xcc0,local_80);
  FUN_0044f850(&local_88,*(undefined8 *)PTR_DAT_02001340);
  FUN_00414ad0(param_1 + 0xcd0,local_88);
  FUN_0044f850(&local_90,*(undefined8 *)PTR_DAT_02004438);
  FUN_00414ad0(param_1 + 0xcd8,local_90);
  FUN_0044f850(&local_98,*(undefined8 *)PTR_DAT_02005010);
  FUN_00414ad0(param_1 + 0xcc8,local_98);
  FUN_00414ad0(param_1 + 0xd38,*(undefined8 *)(param_1 + 0xcc0));
  FUN_00416ba0(&local_a0,*(undefined8 *)(param_1 + 0xcc8),L"tina.ini");
  uVar6 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_a0);
  *(undefined8 *)(param_1 + 0xd00) = uVar6;
  uVar6 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  *(undefined8 *)(param_1 + 0xce0) = uVar6;
  plVar7 = *(longlong **)(param_1 + 0xce0);
  (**(code **)(*plVar7 + 0x50))(plVar7,L"OpenDDBDlg");
  FUN_00414ad0(plVar7 + 0x20,&DAT_01793ad8);
  FUN_00414ad0(plVar7 + 0x1c,L"Device Database (*.ddb)|*.ddb");
  FUN_00c78ad0(plVar7,L"Open");
  FUN_0044f8b0(&local_c8,*(undefined8 *)(param_1 + 0xcd8));
  FUN_00416ba0(&local_c0,L"Private catalog folder|",local_c8);
  local_b8 = local_c0;
  FUN_0044f8b0(&local_d8,*(undefined8 *)(param_1 + 0xcd0));
  FUN_00416ba0(&local_d0,L"Shared catalog folder|",local_d8);
  local_b0 = local_d0;
  FUN_0044f8b0(&local_e8,*(undefined8 *)(param_1 + 0xcc0));
  FUN_00416ba0(&local_e0,L"Main Tina folder|",local_e8);
  local_a8 = local_e0;
  (**(code **)(*plVar7 + 0x130))(plVar7,&local_b8,2);
  uVar6 = FUN_0177ce70(&PTR_FUN_0177c458,1,param_1);
  *(undefined8 *)(param_1 + 0xce8) = uVar6;
  plVar7 = *(longlong **)(param_1 + 0xce8);
  (**(code **)(*plVar7 + 0x50))(plVar7,L"ImportDDBDlg");
  FUN_00414ad0(plVar7 + 0x20,&DAT_01793ad8);
  FUN_00414ad0(plVar7 + 0x1c,L"Device Database (*.ddb)|*.ddb|TINA Macro (*.tsm)|*.tsm");
  FUN_00c78ad0(plVar7,L"Import From");
  FUN_0044f8b0(&local_f8,*(undefined8 *)(param_1 + 0xcd8));
  FUN_00416ba0(&local_f0,L"Private catalog folder|",local_f8);
  local_b8 = local_f0;
  FUN_0044f8b0(&local_108,*(undefined8 *)(param_1 + 0xcd0));
  FUN_00416ba0(&local_100,L"Shared catalog folder|",local_108);
  local_b0 = local_100;
  FUN_0044f8b0(&local_118,*(undefined8 *)(param_1 + 0xcc0));
  FUN_00416ba0(&local_110,L"Main Tina folder|",local_118);
  local_a8 = local_110;
  (**(code **)(*plVar7 + 0x130))(plVar7,&local_b8,2);
  uVar6 = FUN_0177d960(&PTR_FUN_0177caa0,1,param_1);
  *(undefined8 *)(param_1 + 0xd48) = uVar6;
  plVar7 = *(longlong **)(param_1 + 0xd48);
  (**(code **)(*plVar7 + 0x50))(plVar7,L"SaveDDBDlg");
  FUN_0177dd40(plVar7,&DAT_01793ad8);
  FUN_00414ad0(plVar7 + 0x1c,L"Device Database (*.ddb)|*.ddb");
  *(undefined4 *)(plVar7 + 0x1b) = 0x80106;
  FUN_00c78ad0(plVar7,L"Save As");
  FUN_0044f8b0(&local_128,*(undefined8 *)(param_1 + 0xcd8));
  FUN_00416ba0(&local_120,L"Private catalog folder|",local_128);
  local_b8 = local_120;
  FUN_0044f8b0(&local_138,*(undefined8 *)(param_1 + 0xcd0));
  FUN_00416ba0(&local_130,L"Shared catalog folder|",local_138);
  local_b0 = local_130;
  FUN_0044f8b0(&local_148,*(undefined8 *)(param_1 + 0xcc0));
  FUN_00416ba0(&local_140,L"Main Tina folder|",local_148);
  local_a8 = local_140;
  (**(code **)(*plVar7 + 0x130))(plVar7,&local_b8,2);
  FUN_0044f8b0(&local_150,*(undefined8 *)(param_1 + 0xcd8));
  FUN_00416ad0(&local_150,L"\\SPICELIB");
  local_b8 = local_150;
  FUN_0044f8b0(&local_158,*(undefined8 *)(param_1 + 0xcd0));
  FUN_00416ad0(&local_158,L"\\SPICELIB");
  local_b0 = local_158;
  FUN_0044f8b0(&local_160,*(undefined8 *)(param_1 + 0xcc0));
  FUN_00416ad0(&local_160,L"\\SPICELIB");
  local_a8 = local_160;
  FUN_0177dbd0(plVar7,&local_b8,2);
  plVar7[0x2b] = param_1;
  plVar7[0x2a] = (longlong)FUN_017a0430;
  uVar6 = FUN_007ffaf0(param_1);
  iVar2 = FUN_008077b0(uVar6);
  if (iVar2 < 500) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x998),0);
  }
  FUN_0179a600(param_1,*(undefined8 *)(param_1 + 0x990));
  FUN_0179a660(param_1,*(undefined8 *)(param_1 + 0x6c0));
  FUN_0179a710(param_1,*(undefined8 *)(param_1 + 0x9a8));
  FUN_00414480(&local_20);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  for (iVar2 = 1; iVar4 = FUN_00409d20(), iVar2 <= iVar4; iVar2 = iVar2 + 1) {
    FUN_00409da0(&local_170,iVar2);
    FUN_0043e130(&local_168,local_170);
    iVar4 = FUN_00416db0(local_168,L"/OPEN");
    if (iVar4 == 0) {
      iVar4 = FUN_00409d20();
      if (iVar2 < iVar4) {
        iVar2 = iVar2 + 1;
        FUN_00409da0(&local_20,iVar2);
      }
    }
    else {
      FUN_00409da0(&local_180,iVar2);
      FUN_0043e130(&local_178,local_180);
      iVar4 = FUN_00416db0(local_178,L"/CREATE");
      if (iVar4 == 0) {
        iVar4 = FUN_00409d20();
        if (iVar2 < iVar4) {
          iVar2 = iVar2 + 1;
          FUN_00409da0(&local_48,iVar2);
        }
      }
      else {
        FUN_00409da0(&local_190,iVar2);
        FUN_0043e130(&local_188,local_190);
        iVar4 = FUN_00416db0(local_188,L"/EDIT");
        if (iVar4 == 0) {
          iVar4 = FUN_00409d20();
          if (iVar2 < iVar4) {
            iVar2 = iVar2 + 1;
            FUN_00409da0(&local_40,iVar2);
          }
        }
        else {
          FUN_00409da0(&local_1a0,iVar2);
          FUN_0043e130(&local_198,local_1a0);
          iVar4 = FUN_00416db0(local_198,L"/HANDLE");
          if ((iVar4 == 0) && (iVar4 = FUN_00409d20(), iVar2 < iVar4)) {
            iVar2 = iVar2 + 1;
            FUN_00409da0(&local_50,iVar2);
            uVar3 = FUN_0043fc00(local_50);
            *(ulonglong *)(param_1 + 0xcf0) = (ulonglong)uVar3;
          }
        }
      }
    }
  }
  if (local_20 != 0) {
    FUN_017960f0(param_1,local_20,*(undefined8 *)(param_1 + 0xd18));
    FUN_01795670(param_1,0);
    FUN_00414ad0(param_1 + 0xc98,local_20);
    FUN_01798270(param_1);
    if (local_40 == 0) {
      FUN_01798460(param_1,0);
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),0);
    }
    else {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x758) + 0x4a0);
      uVar5 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_40);
      FUN_01798460(param_1,uVar5);
      (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))(*(longlong **)(param_1 + 0x758),uVar5)
      ;
    }
    FUN_017989e0(param_1);
    FUN_0064e770(*(undefined8 *)(param_1 + 0x948));
    (**(code **)(**(longlong **)(param_1 + 0xc38) + 0x268))
              (*(longlong **)(param_1 + 0xc38),
               *(undefined1 *)(*(longlong *)(param_1 + 0xd18) + 0x48));
  }
  if (local_48 != 0) {
    FUN_00648720(&local_38,local_48);
    FUN_00648780(&local_1a8,local_48);
    FUN_00414b50(&local_48,local_1a8);
    cVar11 = '\x04';
    pplVar10 = local_78;
    do {
      plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *pplVar10 = plVar7;
      pplVar10 = pplVar10 + 1;
      cVar11 = cVar11 + -1;
    } while (cVar11 != '\0');
    while (local_48 != 0) {
      FUN_00648720(&local_28,local_48);
      iVar2 = FUN_00416db0(local_28,local_48);
      if (iVar2 == 0) {
        FUN_00414480(&local_48);
      }
      else {
        FUN_00648780(&local_1b0,local_48);
        FUN_00414b50(&local_48,local_1b0);
      }
      FUN_01792a00(&local_30,&local_28,0x5e);
      iVar2 = 0;
      if (local_30 != (ushort *)0x0) {
        iVar2 = *(int *)(local_30 + -2);
      }
      if (iVar2 == 1) {
        iVar2 = 0;
        if (local_28 != 0) {
          iVar2 = *(int *)(local_28 + -4);
        }
        if (0 < iVar2) {
          uVar9 = *local_30;
          if ((ushort)(uVar9 - 0x61) < 0x1a) {
            uVar9 = uVar9 & 0xffdf;
          }
          if (uVar9 == 0x42) {
            (**(code **)(*local_78[3] + 0x78))(local_78[3],local_28);
          }
          else if (uVar9 == 0x4c) {
            (**(code **)(*local_78[2] + 0x78))(local_78[2],local_28);
          }
          else if (uVar9 == 0x52) {
            (**(code **)(*local_78[0] + 0x78))(local_78[0],local_28);
          }
          else if (uVar9 == 0x54) {
            (**(code **)(*local_78[1] + 0x78))(local_78[1],local_28);
          }
        }
      }
    }
    sVar1 = FUN_0179bd90(param_1,&local_38,0xffffffff);
    if (sVar1 == 6) {
      lVar8 = FUN_00c3da20(&LAB_00c3a6d0,1,local_38,local_78);
      if (lVar8 != 0) {
        uVar5 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x80))
                          (*(longlong **)(param_1 + 0xd18),*(undefined8 *)(lVar8 + 0x10),lVar8);
        FUN_01798270(param_1);
        FUN_01798460(param_1,uVar5);
        (**(code **)(**(longlong **)(param_1 + 0x758) + 0x268))
                  (*(longlong **)(param_1 + 0x758),uVar5);
        FUN_01795670(param_1,1);
        sVar1 = FUN_00c3f0d0(*(undefined8 *)(param_1 + 0xca8),1);
        if (sVar1 != -1) {
          FUN_01798920(param_1,1);
        }
      }
      cVar11 = '\x04';
      pplVar10 = local_78;
      do {
        FUN_00410f20(*pplVar10);
        pplVar10 = pplVar10 + 1;
        cVar11 = cVar11 + -1;
      } while (cVar11 != '\0');
    }
  }
  iVar2 = FUN_00409d20();
  if (0 < iVar2) {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x770),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x778),0);
  }
  FUN_0179dc30(param_1,0);
  FUN_00414560(&local_1b0,0x1f);
  FUN_00414560(&local_a0,5);
  FUN_00414560(&local_58,8);
  return;
}

