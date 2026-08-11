/* Ghidra address: 01adfeb0 */
/* Ghidra symbol: FUN_01adfeb0 */


longlong FUN_01adfeb0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                     undefined8 param_5,char param_6,longlong *param_7)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_288 [32];
  wchar_t *local_268;
  undefined *local_260;
  wchar_t *local_258;
  longlong local_248;
  int local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  wchar_t *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  longlong local_188;
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
  wchar_t *local_f8;
  undefined8 local_f0 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_a8;
  int local_9c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = (wchar_t *)0x0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_138 = 0;
  local_140 = 0;
  local_130 = 0;
  local_120 = 0;
  local_128 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_f0[0] = 0;
  local_f8 = (wchar_t *)0x0;
  local_100 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_60 = 0;
  local_88 = 0;
  local_68 = 0;
  local_58 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_c0 = 0;
  local_23c = param_3;
  FUN_00414610(param_5);
  local_248 = 0;
  if ((param_2 != 0) && (cVar1 = FUN_01ada080(param_1), cVar1 != '\0')) {
    FUN_005894c0(local_f0,&DAT_01cb2e28,*(undefined1 *)(*(longlong *)(param_2 + 8) + 0x434));
    FUN_01adc190(&local_100,*(undefined8 *)(param_1 + 0x68));
    FUN_01abd640(&local_f8,local_100);
    local_268 = local_f8;
    FUN_00416cd0(&local_40,3,local_f0[0],&DAT_01ae128c);
    local_38 = (longlong *)FUN_01ae9310(param_1,param_5,param_2);
    iVar3 = (**(code **)(*local_38 + 0x20))(local_38,local_40,L"Version",1);
    if (iVar3 < 2) {
      FUN_00410f20(local_38);
    }
    else {
      local_268 = (wchar_t *)0x0;
      (**(code **)(*local_38 + 0x10))(local_38,&local_c8,local_40,L"AllCurves");
      if (param_6 != '\0') {
        FUN_00414480(&local_c8);
      }
      FUN_0043f750(&local_108,local_23c);
      local_268 = L".";
      FUN_00416cd0(&local_48,3,&DAT_01ae12d8,local_108);
      cVar1 = FUN_01adf970(auStack_288);
      if (cVar1 == '\0') {
        FUN_00410f20(local_38);
      }
      else {
        FUN_01ade6a0(param_1,param_2);
        local_30 = 0;
        local_70 = 0;
        local_9c = 1;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))
                          (*(longlong **)(param_1 + 0xd8));
        if (iVar3 + -1 < local_23c) {
          local_30 = FUN_01cdf400(&DAT_01cdd500,1);
          FUN_00416ba0(&local_110,local_48,L"Type");
          uVar2 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_110,0);
          *(undefined1 *)(local_30 + 0x58) = uVar2;
          FUN_00416ba0(&local_118,local_48,L"YAxesPosition");
          uVar2 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_118,0);
          *(undefined1 *)(local_30 + 0x59) = uVar2;
          FUN_00416ba0(&local_128,local_48,L"YAxisCaption");
          local_268 = (wchar_t *)0x0;
          (**(code **)(*local_38 + 0x10))(local_38,&local_120,local_40,local_128);
          FUN_00414ad0(local_30 + 0x60,local_120);
          FUN_00416ba0(&local_130,local_48,L"Proportional");
          uVar2 = (**(code **)(*local_38 + 0x30))(local_38,local_40,local_130,0);
          *(undefined1 *)(local_30 + 0x68) = uVar2;
          *(longlong *)(local_30 + 0x50) = param_1;
          FUN_0043f750(&local_140,local_23c);
          FUN_00416ba0(&local_138,L"Analysis Result ",local_140);
          (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x80))
                    (*(longlong **)(param_1 + 0xd8),local_138,local_30);
          FUN_00416ba0(&local_148,local_48,L"XAxis.Count");
          iVar3 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_148,1);
          iVar10 = 0;
          if (-1 < iVar3 + -1) {
            do {
              FUN_0043f750(&local_150,iVar10);
              local_268 = L".";
              FUN_00416cd0(&local_50,3,L"XAxis.",local_150);
              FUN_00416ba0(&local_158,local_48,local_50);
              uVar5 = FUN_01ade740(auStack_288,local_158);
              (**(code **)(**(longlong **)(local_30 + 0x70) + 0x80))
                        (*(longlong **)(local_30 + 0x70),&DAT_01ae13fc,uVar5);
              iVar10 = iVar10 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00416ba0(&local_160,local_48,L"YAxis.Count");
          iVar3 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_160,1);
          iVar10 = 0;
          if (-1 < iVar3 + -1) {
            do {
              FUN_0043f750(&local_168,iVar10);
              local_268 = L".";
              FUN_00416cd0(&local_50,3,L"YAxis.",local_168);
              FUN_00416ba0(&local_170,local_48,local_50);
              lVar6 = FUN_01ade740(auStack_288,local_170);
              (**(code **)(**(longlong **)(local_30 + 0x78) + 0x80))
                        (*(longlong **)(local_30 + 0x78),&DAT_01ae144c,lVar6);
              local_268 = L"Twin";
              FUN_00416cd0(&local_178,3,local_48,local_50);
              iVar4 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_178,0);
              if (iVar4 == 1) {
                local_268 = L"Twin.";
                FUN_00416cd0(&local_180,3,local_48,local_50);
                lVar7 = FUN_01ade740(auStack_288,local_180);
                *(undefined1 *)(lVar7 + 0x120) = 0;
                *(longlong *)(lVar6 + 0x118) = lVar7;
              }
              uVar5 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x30))
                                (*(longlong **)(local_30 + 0x70),0);
              uVar8 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x30))
                                (*(longlong **)(local_30 + 0x78),iVar10);
              uVar5 = FUN_01ade9a0(auStack_288,uVar5,uVar8);
              (**(code **)(**(longlong **)(local_30 + 0x88) + 0x80))
                        (*(longlong **)(local_30 + 0x88),L"Grid",uVar5);
              iVar10 = iVar10 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else {
          local_30 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                               (*(longlong **)(param_1 + 0xd8),local_23c);
        }
        local_248 = local_30;
        FUN_01cc5c60(param_2);
        local_a8 = FUN_01cc5cc0(param_2);
        while (local_a8 != 0) {
          if ((((param_7 == (longlong *)0x0) ||
               (iVar3 = (**(code **)(*param_7 + 0xc0))(param_7,local_a8), iVar3 != -1)) &&
              (FUN_01cc0ae0(local_a8,&local_188), local_188 != 0)) &&
             (0 < *(int *)(local_a8 + 0x2c))) {
            FUN_01cc0ae0(local_a8,&local_190);
            FUN_01abd640(&local_60,local_190);
            local_268 = L".";
            FUN_00416cd0(&local_68,3,L"Curve.",local_60);
            local_268 = L",";
            FUN_00416cd0(&local_198,3,&DAT_01ae14c0,local_c8);
            local_268 = L",";
            FUN_00416cd0(&local_1a0,3,&DAT_01ae14c0,local_60);
            cVar1 = FUN_005b83d0(local_198,local_1a0);
            if (cVar1 == '\0') {
              cVar1 = FUN_01ce33d0(local_30);
              if (cVar1 == '\x01') {
                FUN_00416ba0(&local_1a8,local_48,L"YAxis.0.");
                lVar6 = FUN_01ade740(auStack_288,local_1a8);
                FUN_01cc0ae0(local_a8,&local_1b0);
                FUN_01cd64a0(lVar6,local_1b0);
                FUN_005fc860(*(undefined8 *)(lVar6 + 0x98),
                             *(undefined4 *)(PTR_DAT_02003c00 + (longlong)local_9c * 4));
                (**(code **)(**(longlong **)(local_30 + 0x78) + 0x80))
                          (*(longlong **)(local_30 + 0x78),&DAT_01ae144c,lVar6);
                uVar5 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x30))
                                  (*(longlong **)(local_30 + 0x70),0);
                plVar9 = *(longlong **)(local_30 + 0x78);
                iVar3 = (**(code **)(*plVar9 + 0x28))(plVar9);
                uVar8 = (**(code **)(*plVar9 + 0x30))(plVar9,iVar3 + -1);
                uVar5 = FUN_01ade9a0(auStack_288,uVar5,uVar8);
                (**(code **)(**(longlong **)(local_30 + 0x88) + 0x80))
                          (*(longlong **)(local_30 + 0x88),L"Grid",uVar5);
                iVar3 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x28))
                                  (*(longlong **)(local_30 + 0x78));
                FUN_0043f750(&local_1c0,iVar3 + -1);
                local_268 = local_1c0;
                local_260 = &DAT_01ae12ec;
                local_258 = L"Curves";
                FUN_00416cd0(&local_1b8,5,local_48,L"YAxis.");
                (**(code **)(*local_38 + 0x18))(local_38,local_40,local_1b8,local_60);
              }
              else {
                local_268 = L"Curves";
                FUN_00416cd0(&local_1c8,3,local_48,L"YAxis.0.");
                local_268 = (wchar_t *)0x0;
                (**(code **)(*local_38 + 0x10))(local_38,&local_58,local_40,local_1c8);
                local_268 = (wchar_t *)local_60;
                FUN_00416cd0(&local_58,3,local_58,&DAT_01ae14c0);
                local_268 = L"Curves";
                FUN_00416cd0(&local_1d0,3,local_48,L"YAxis.0.");
                (**(code **)(*local_38 + 0x18))(local_38,local_40,local_1d0,local_58);
              }
            }
            iVar3 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x28))();
            iVar10 = 0;
            if (-1 < iVar3 + -1) {
              do {
                FUN_0043f750(&local_1d8,iVar10);
                local_268 = L".";
                FUN_00416cd0(&local_50,3,L"YAxis.",local_1d8);
                uVar5 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x30))
                                  (*(longlong **)(local_30 + 0x78),iVar10);
                FUN_01adeca0(auStack_288,uVar5);
                local_268 = L"Twin";
                FUN_00416cd0(&local_1e0,3,local_48,local_50);
                iVar4 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_1e0,0);
                if (iVar4 == 1) {
                  FUN_0043f750(&local_1e8,iVar10);
                  local_268 = L".Twin.";
                  FUN_00416cd0(&local_50,3,L"YAxis.",local_1e8);
                  lVar6 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x30))
                                    (*(longlong **)(local_30 + 0x78),iVar10);
                  FUN_01adeca0(auStack_288,*(undefined8 *)(lVar6 + 0x118));
                }
                iVar10 = iVar10 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          local_a8 = FUN_01cc5cc0(param_2);
        }
        FUN_01ce87d0(local_30);
        iVar3 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x28))();
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar5 = (**(code **)(**(longlong **)(local_30 + 0x70) + 0x30))
                              (*(longlong **)(local_30 + 0x70),iVar10);
            FUN_01ad85f0(param_1,uVar5,0);
            FUN_0043f750(&local_1f0,iVar10);
            local_268 = L".";
            FUN_00416cd0(&local_50,3,L"XAxis.",local_1f0);
            FUN_00416ba0(&local_1f8,local_48,local_50);
            FUN_01cd7dd0(uVar5,local_40,local_1f8,local_38);
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x28))();
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            lVar6 = (**(code **)(**(longlong **)(local_30 + 0x78) + 0x30))
                              (*(longlong **)(local_30 + 0x78),iVar10);
            FUN_01ad85f0(param_1,lVar6,0);
            FUN_0043f750(&local_200,iVar10);
            local_268 = L".";
            FUN_00416cd0(&local_50,3,L"YAxis.",local_200);
            FUN_00416ba0(&local_208,local_48,local_50);
            FUN_01cd7dd0(lVar6,local_40,local_208,local_38);
            local_268 = L"Twin";
            FUN_00416cd0(&local_210,3,local_48,local_50);
            iVar4 = (**(code **)(*local_38 + 0x20))(local_38,local_40,local_210,0);
            if (iVar4 == 1) {
              FUN_01ad85f0(param_1,*(undefined8 *)(lVar6 + 0x118),0);
              local_268 = L"Twin.";
              FUN_00416cd0(&local_218,3,local_48,local_50);
              FUN_01cd7dd0(*(undefined8 *)(lVar6 + 0x118),local_40,local_218,local_38);
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar3 = (**(code **)(*local_38 + 0x20))(local_38,local_40,L"Figure.Count",0);
        iVar10 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_0043f750(&local_220,iVar10);
            local_268 = L".";
            FUN_00416cd0(&local_d0,3,L"Figure.",local_220);
            FUN_00416ba0(&local_228,local_d0,L"Type");
            local_268 = (wchar_t *)0x0;
            (**(code **)(*local_38 + 0x10))(local_38,&local_d8,local_40,local_228);
            FUN_00416ba0(&local_230,local_d0,&DAT_01ae156c);
            local_268 = (wchar_t *)0x0;
            (**(code **)(*local_38 + 0x10))(local_38,&local_e0,local_40,local_230);
            iVar4 = FUN_00416db0(local_d8,L"TText");
            if (iVar4 == 0) {
              iVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xb0))
                                (*(longlong **)(param_1 + 0xe0),local_e0);
              if (iVar4 == -1) {
                plVar9 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
                FUN_01d2afb0(plVar9,local_e0);
                plVar9[0x11] = param_1;
                plVar9[7] = *(longlong *)(param_1 + 0x38);
                (**(code **)(*plVar9 + 0x48))(plVar9,&local_238);
                (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x80))
                          (*(longlong **)(param_1 + 0xe0),local_238,plVar9);
              }
              else {
                plVar9 = (longlong *)
                         (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x30))
                                   (*(longlong **)(param_1 + 0xe0),iVar4);
              }
              FUN_01a601e0(plVar9,local_38,local_40,local_d0);
            }
            iVar10 = iVar10 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        FUN_01ce1d40(local_30);
        FUN_00410f20(local_38);
      }
    }
  }
  FUN_00414560(&local_238,0x2a);
  FUN_00414560(&local_e0,5);
  FUN_00414560(&local_88,3);
  FUN_00414560(&local_68,6);
  FUN_00414480(&param_5);
  return local_248;
}

