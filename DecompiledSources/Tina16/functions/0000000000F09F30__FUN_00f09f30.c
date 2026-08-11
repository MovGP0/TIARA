/* Ghidra address: 00f09f30 */
/* Ghidra symbol: FUN_00f09f30 */


void FUN_00f09f30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  int local_208;
  int local_204;
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
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_178 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = 0;
  local_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = (longlong *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  plVar7 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x4a8);
  if (iVar3 == 0) {
    FUN_00414ad0(param_1 + 0x758,&DAT_00f0b25c);
  }
  else if (iVar3 == 1) {
    FUN_00414ad0(param_1 + 0x758,&DAT_00f0b26c);
  }
  else if (iVar3 == 2) {
    FUN_00414ad0(param_1 + 0x758,&DAT_00f0b27c);
  }
  else if (iVar3 == 3) {
    FUN_00414ad0(param_1 + 0x758,&DAT_00f0b28c);
  }
  else {
    FUN_00414ad0(param_1 + 0x758,&DAT_00f0b26c);
  }
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))(*(longlong **)(param_1 + 0x740),local_40,0)
  ;
  iVar3 = FUN_004170c0(L"Digilent",local_40[0],1);
  iVar4 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6d8),iVar4);
  iVar5 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
  iVar4 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6d8));
  if (iVar5 + -1 < iVar4) {
    iVar4 = iVar5 + -1;
  }
  FUN_00c5a4c0(*(undefined8 *)(param_1 + 0x6d8),iVar4);
  uVar6 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6d8));
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
            (*(longlong **)(param_1 + 0x740),&local_48,uVar6);
  FUN_00415dd0(&local_50,local_48,0);
  FUN_00415dd0(&local_58,*(undefined8 *)(param_1 + 0x758),0);
  plVar9 = plVar7;
  FUN_00d309d0(local_50,plVar7,local_58);
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (iVar4 == 1) {
    *(undefined1 *)(param_1 + 0x750) = 7;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    if (iVar4 == 2) {
      *(undefined1 *)(param_1 + 0x750) = 8;
    }
    else {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      if (iVar4 == 3) {
        *(undefined1 *)(param_1 + 0x750) = 9;
      }
      else {
        iVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
        if (iVar4 == 5) {
          *(undefined1 *)(param_1 + 0x750) = 3;
        }
        else {
          iVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
          if (iVar4 == 4) {
            *(undefined1 *)(param_1 + 0x750) = 6;
          }
          else {
            iVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
            if (iVar4 == 3) {
              if (iVar3 == 0) {
                *(undefined1 *)(param_1 + 0x750) = 4;
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
                          (*(longlong **)(param_1 + 0x740),&local_60,0);
                plVar9 = local_60;
                iVar3 = FUN_004170c0(L"Network Analyzer",local_60,1);
                if (iVar3 == 0) {
                  *(undefined1 *)(param_1 + 0x750) = 2;
                }
                else {
                  *(undefined1 *)(param_1 + 0x750) = 5;
                }
              }
            }
            else {
              iVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
              if (iVar3 == 2) {
                *(undefined1 *)(param_1 + 0x750) = 1;
              }
              else {
                *(undefined1 *)(param_1 + 0x750) = 0;
              }
            }
          }
        }
      }
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  cVar2 = *(char *)(param_1 + 0x750);
  if (cVar2 == '\a') {
    uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
    FUN_008483e0(lVar1,uVar6);
    FUN_00848a70(lVar1,0xb);
    FUN_008486b0(lVar1,0);
    FUN_00848790(lVar1,1);
    iVar3 = FUN_0064d0b0(lVar1);
    FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
    uVar8 = FUN_00b89270();
    FUN_0041ddd0(&local_70,&PTR_PTR_00f09bf8);
    FUN_00b8e650(uVar8,&local_68,L"ImportCurveDlg.TimeTxt",local_70);
    FUN_0084e3e0(lVar1,0,0,local_68);
    iVar3 = *(int *)(lVar1 + 0x4a4);
    local_208 = 1;
    if (0 < iVar3) {
      do {
        uVar8 = FUN_00b89270();
        FUN_0041ddd0(&local_80,&PTR_PTR_00f09c08);
        FUN_00b8e650(uVar8,&local_78,L"ImportCurveDlg.ValueTxt",local_80);
        FUN_0084e3e0(lVar1,local_208,0,local_78);
        local_208 = local_208 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (cVar2 == '\x01') {
    FUN_008483e0(lVar1,2);
    FUN_00848a70(lVar1,0xb);
    FUN_008486b0(lVar1,0);
    FUN_00848790(lVar1,1);
    iVar3 = FUN_0064d0b0(lVar1);
    FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
    uVar8 = FUN_00b89270();
    FUN_0041ddd0(&local_90,&PTR_PTR_00f09bf8);
    FUN_00b8e650(uVar8,&local_88,L"ImportCurveDlg.TimeTxt",local_90);
    FUN_0084e3e0(lVar1,0,0,local_88);
    uVar8 = FUN_00b89270();
    FUN_0041ddd0(&local_a0,&PTR_PTR_00f09c08);
    FUN_00b8e650(uVar8,&local_98,L"ImportCurveDlg.ValueTxt",local_a0);
    FUN_0084e3e0(lVar1,1,0,local_98);
  }
  else if (cVar2 == '\x02') {
    FUN_008483e0(lVar1,3);
    FUN_00848a70(lVar1,0xb);
    FUN_008486b0(lVar1,0);
    FUN_00848790(lVar1,1);
    iVar3 = FUN_0064d0b0(lVar1);
    FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
    uVar8 = FUN_00b89270();
    FUN_0041ddd0(&local_b0,&PTR_PTR_00f09bf8);
    FUN_00b8e650(uVar8,&local_a8,L"ImportCurveDlg.TimeTxt",local_b0);
    FUN_0084e3e0(lVar1,0,0,local_a8);
    uVar8 = FUN_00b89270();
    FUN_0041ddd0(&local_c0,&PTR_PTR_00f09c08);
    FUN_00b8e650(uVar8,&local_b8,L"ImportCurveDlg.ValueTxt",local_c0);
    FUN_0084e3e0(lVar1,1,0,local_b8);
    uVar8 = FUN_00b89270();
    FUN_0041ddd0(&local_d0,&PTR_PTR_00f09c08);
    FUN_00b8e650(uVar8,&local_c8,L"ImportCurveDlg.ValueTxt",local_d0);
    FUN_0084e3e0(lVar1,2,0,local_c8);
  }
  else {
    if ((byte)(cVar2 - 8U) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)plVar9 >> 8),1) << (cVar2 - 8U & 0x1f) & 3U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      uVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
      FUN_008483e0(lVar1,uVar6);
      FUN_00848a70(lVar1,0xb);
      FUN_008486b0(lVar1,0);
      FUN_00848790(lVar1,1);
      iVar3 = FUN_0064d0b0(lVar1);
      FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_e0,&PTR_PTR_00f09bf8);
      FUN_00b8e650(uVar8,&local_d8,L"ImportCurveDlg.TimeTxt",local_e0);
      FUN_0084e3e0(lVar1,0,0,local_d8);
      for (local_208 = 1; local_208 < *(int *)(lVar1 + 0x4a4) + -1; local_208 = local_208 + 2) {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if (cVar2 == '\0') {
          uVar8 = FUN_00b89270();
          FUN_0041ddd0(&local_100,&PTR_PTR_00f09c48);
          FUN_00b8e650(uVar8,&local_f8,L"ImportCurveDlg.VoltagedBTxt",local_100);
          FUN_0084e3e0(lVar1,local_208,0,local_f8);
        }
        else {
          uVar8 = FUN_00b89270();
          FUN_0041ddd0(&local_f0,&PTR_PTR_00f09c38);
          FUN_00b8e650(uVar8,&local_e8,L"ImportCurveDlg.VoltageTxt",local_f0);
          FUN_0084e3e0(lVar1,local_208,0,local_e8);
        }
        uVar8 = FUN_00b89270();
        FUN_0041ddd0(&local_110,&PTR_PTR_00f09c58);
        FUN_00b8e650(uVar8,&local_108,L"ImportCurveDlg.PhaseTxt",local_110);
        FUN_0084e3e0(lVar1,local_208 + 1,0,local_108);
      }
    }
    else if (cVar2 == '\x03') {
      FUN_008483e0(lVar1,5);
      FUN_00848a70(lVar1,0xb);
      FUN_008486b0(lVar1,0);
      FUN_00848790(lVar1,1);
      iVar3 = FUN_0064d0b0(lVar1);
      FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_120,&PTR_PTR_00f09c18);
      FUN_00b8e650(uVar8,&local_118,L"ImportCurveDlg.FreqTxt",local_120);
      FUN_0084e3e0(lVar1,0,0,local_118);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_130,&PTR_PTR_00f09c28);
      FUN_00b8e650(uVar8,&local_128,L"ImportCurveDlg.ChannelTxt",local_130);
      FUN_0084e3e0(lVar1,1,0,local_128);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_140,&PTR_PTR_00f09c38);
      FUN_00b8e650(uVar8,&local_138,L"ImportCurveDlg.VoltageTxt",local_140);
      FUN_0084e3e0(lVar1,2,0,local_138);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_150,&PTR_PTR_00f09c48);
      FUN_00b8e650(uVar8,&local_148,L"ImportCurveDlg.VoltagedBTxt",local_150);
      FUN_0084e3e0(lVar1,3,0,local_148);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_160,&PTR_PTR_00f09c58);
      FUN_00b8e650(uVar8,&local_158,L"ImportCurveDlg.PhaseTxt",local_160);
      FUN_0084e3e0(lVar1,4,0,local_158);
    }
    else if (cVar2 == '\x04') {
      FUN_008483e0(lVar1,3);
      FUN_00848a70(lVar1,0xb);
      FUN_008486b0(lVar1,0);
      FUN_00848790(lVar1,1);
      iVar3 = FUN_0064d0b0(lVar1);
      FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_170,&PTR_PTR_00f09c18);
      FUN_00b8e650(uVar8,&local_168,L"ImportCurveDlg.FreqTxt",local_170);
      FUN_0084e3e0(lVar1,0,0,local_168);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_180,&PTR_PTR_00f09c48);
      FUN_00b8e650(uVar8,&local_178,L"ImportCurveDlg.VoltagedBTxt",local_180);
      FUN_0084e3e0(lVar1,1,0,local_178);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_190,&PTR_PTR_00f09c58);
      FUN_00b8e650(uVar8,&local_188,L"ImportCurveDlg.PhaseTxt",local_190);
      FUN_0084e3e0(lVar1,2,0,local_188);
    }
    else if ((*(char *)(param_1 + 0x750) == '\x05') || (*(char *)(param_1 + 0x750) == '\x06')) {
      FUN_008483e0(lVar1,3);
      FUN_00848a70(lVar1,0xb);
      FUN_008486b0(lVar1,0);
      FUN_00848790(lVar1,1);
      iVar3 = FUN_0064d0b0(lVar1);
      FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_1a0,&PTR_PTR_00f09c18);
      FUN_00b8e650(uVar8,&local_198,L"ImportCurveDlg.FreqTxt",local_1a0);
      FUN_0084e3e0(lVar1,0,0,local_198);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_1b0,&PTR_PTR_00f09c38);
      FUN_00b8e650(uVar8,&local_1a8,L"ImportCurveDlg.VoltageTxt",local_1b0);
      FUN_0084e3e0(lVar1,1,0,local_1a8);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_1c0,&PTR_PTR_00f09c58);
      FUN_00b8e650(uVar8,&local_1b8,L"ImportCurveDlg.PhaseTxt",local_1c0);
      FUN_0084e3e0(lVar1,2,0,local_1b8);
    }
    else {
      FUN_008483e0(lVar1,1);
      FUN_00848a70(lVar1,0xb);
      FUN_008486b0(lVar1,0);
      FUN_00848790(lVar1,1);
      iVar3 = FUN_0064d0b0(lVar1);
      FUN_00848570(lVar1,(longlong)(iVar3 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
      uVar8 = FUN_00b89270();
      FUN_0041ddd0(&local_1d0,&LAB_00f09c68);
      FUN_00b8e650(uVar8,&local_1c8,L"ImportCurveDlg.LineTxt",local_1d0);
      FUN_0084e3e0(lVar1,0,0,local_1c8);
    }
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
  iVar4 = FUN_00c5a450();
  iVar3 = (iVar3 - iVar4) + -1;
  if (9 < iVar3) {
    iVar3 = 9;
  }
  local_208 = 0;
  if (-1 < iVar3) {
    iVar3 = iVar3 + 1;
    do {
      (**(code **)(*plVar7 + 0x90))(plVar7);
      if (*(char *)(param_1 + 0x750) == '\0') {
        iVar4 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6d8));
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
                  (*(longlong **)(param_1 + 0x740),&local_1f0,iVar4 + local_208);
        (**(code **)(*plVar7 + 0x78))(plVar7,local_1f0);
      }
      else {
        iVar4 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x6d8));
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
                  (*(longlong **)(param_1 + 0x740),&local_1d8,iVar4 + local_208);
        FUN_00415dd0(&local_1e0,local_1d8,0);
        FUN_00415dd0(&local_1e8,*(undefined8 *)(param_1 + 0x758),0);
        FUN_00d309d0(local_1e0,plVar7,local_1e8);
      }
      iVar4 = (**(code **)(*plVar7 + 0x28))();
      local_204 = 0;
      if (-1 < iVar4 + -1) {
        do {
          if ((*(char *)(param_1 + 0x750) == '\x06') && (1 < local_204)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_1f8,local_204);
            FUN_0084e3e0(lVar1,local_204 + -1,local_208 + 1,local_1f8);
          }
          else {
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_200,local_204);
            FUN_0084e3e0(lVar1,local_204,local_208 + 1,local_200);
          }
          local_204 = local_204 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_204 = (**(code **)(*plVar7 + 0x28))(plVar7);
      iVar4 = *(int *)(lVar1 + 0x4a4) + -1;
      if (local_204 <= iVar4) {
        iVar4 = (iVar4 - local_204) + 1;
        do {
          FUN_0084e3e0(lVar1,local_204,local_208 + 1,0);
          local_204 = local_204 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_208 = local_208 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(plVar7);
  FUN_00414560(&local_200,3);
  FUN_00414590(&local_1e8,2);
  FUN_00414560(&local_1d8,0x30);
  FUN_00414590(&local_58,2);
  FUN_00414560(&local_48,2);
  return;
}

