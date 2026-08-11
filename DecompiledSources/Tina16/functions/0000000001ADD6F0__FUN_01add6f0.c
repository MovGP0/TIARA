/* Ghidra address: 01add6f0 */
/* Ghidra symbol: FUN_01add6f0 */


void FUN_01add6f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_res10 [3];
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  longlong local_178;
  int local_170;
  int local_16c;
  longlong local_168;
  int local_160;
  int local_15c;
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
  wchar_t *local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_108 = 0;
  local_118 = 0;
  local_120 = 0;
  local_110 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80[0] = 0;
  local_88 = (wchar_t *)0x0;
  local_90 = 0;
  local_38 = 0;
  local_40 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_res10[0] = param_2;
  local_178 = param_1;
  FUN_00414610(param_2);
  cVar1 = FUN_01ada080(local_178);
  if (cVar1 != '\0') {
    FUN_01ae94a0(local_178,local_80);
    FUN_01adc190(&local_90,*(undefined8 *)(local_178 + 0x68));
    FUN_01abd640(&local_88,local_90);
    local_188 = local_88;
    FUN_00416cd0(&local_38,3,local_80[0],&DAT_01ade3fc);
    local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_30 = (longlong *)FUN_01ae9310(local_178,local_res10[0],0);
    (**(code **)(*local_30 + 0xb8))(local_30,local_38);
    (**(code **)(*local_30 + 0x28))(local_30,local_38,L"Version",2);
    FUN_00414480(&local_58);
    iVar8 = *(int *)(*(longlong *)(local_178 + 0x90) + 0x10);
    local_170 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar5 = FUN_004aeac0(*(undefined8 *)(local_178 + 0x90),local_170);
        FUN_01cc5c60(uVar5);
        lVar6 = FUN_01cc5cc0(uVar5);
        while (lVar6 != 0) {
          if (local_58 != 0) {
            FUN_00416ad0(&local_58,&DAT_01ade428);
          }
          FUN_01cc0ae0(lVar6,&local_a0);
          FUN_01abd640(&local_98,local_a0);
          FUN_00416ad0(&local_58,local_98);
          lVar6 = FUN_01cc5cc0(uVar5);
        }
        local_170 = local_170 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    (**(code **)(*local_30 + 0x18))(local_30,local_38,L"AllCurves",local_58);
    iVar8 = (**(code **)(**(longlong **)(local_178 + 0xd8) + 0x28))();
    local_15c = iVar8 + -1;
    local_170 = 0;
    if (-1 < local_15c) {
      do {
        local_15c = iVar8;
        uVar3 = (**(code **)(**(longlong **)(local_178 + 0xd8) + 0x28))
                          (*(longlong **)(local_178 + 0xd8));
        (**(code **)(*local_30 + 0x28))(local_30,local_38,L"CS.Count",uVar3);
        FUN_0043f750(&local_a8,local_170);
        local_188 = L".";
        FUN_00416cd0(&local_40,3,&DAT_01ade478,local_a8);
        local_168 = (**(code **)(**(longlong **)(local_178 + 0xd8) + 0x30))
                              (*(longlong **)(local_178 + 0xd8),local_170);
        FUN_00416ba0(&local_b0,local_40,L"Type");
        (**(code **)(*local_30 + 0x28))
                  (local_30,local_38,local_b0,*(undefined1 *)(local_168 + 0x58));
        FUN_00416ba0(&local_b8,local_40,L"YAxesPosition");
        (**(code **)(*local_30 + 0x28))
                  (local_30,local_38,local_b8,*(undefined1 *)(local_168 + 0x59));
        FUN_00416ba0(&local_c0,local_40,L"YAxisCaption");
        (**(code **)(*local_30 + 0x18))
                  (local_30,local_38,local_c0,*(undefined8 *)(local_168 + 0x60));
        FUN_00416ba0(&local_c8,local_40,L"Proportional");
        (**(code **)(*local_30 + 0x38))
                  (local_30,local_38,local_c8,*(undefined1 *)(local_168 + 0x68));
        FUN_00416ba0(&local_d0,local_40,L"XAxis.Count");
        uVar3 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x28))
                          (*(longlong **)(local_168 + 0x70));
        (**(code **)(*local_30 + 0x28))(local_30,local_38,local_d0,uVar3);
        iVar8 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x28))();
        local_16c = 0;
        if (-1 < iVar8 + -1) {
          do {
            FUN_0043f750(&local_d8,local_16c);
            local_188 = L".";
            FUN_00416cd0(&local_68,3,L"XAxis.",local_d8);
            local_188 = L"Orientation";
            FUN_00416cd0(&local_e0,3,local_40,local_68);
            uVar5 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x30))
                              (*(longlong **)(local_168 + 0x70),local_16c);
            uVar2 = FUN_01cd6670(uVar5);
            (**(code **)(*local_30 + 0x28))(local_30,local_38,local_e0,uVar2);
            local_188 = L"Scale";
            FUN_00416cd0(&local_e8,3,local_40,local_68);
            lVar6 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x30))
                              (*(longlong **)(local_168 + 0x70),local_16c);
            (**(code **)(*local_30 + 0x28))
                      (local_30,local_38,local_e8,*(undefined1 *)(lVar6 + 0x70));
            local_188 = L"Caption";
            FUN_00416cd0(&local_f0,3,local_40,local_68);
            uVar5 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x30))
                              (*(longlong **)(local_168 + 0x70),local_16c);
            FUN_01cd6430(uVar5,&local_f8);
            (**(code **)(*local_30 + 0x18))(local_30,local_38,local_f0,local_f8);
            local_188 = L"Color";
            FUN_00416cd0(&local_100,3,local_40,local_68);
            lVar6 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x30))
                              (*(longlong **)(local_168 + 0x70),local_16c);
            (**(code **)(*local_30 + 0x28))
                      (local_30,local_38,local_100,
                       *(undefined4 *)(*(longlong *)(lVar6 + 0x98) + 0x28));
            lVar6 = (**(code **)(**(longlong **)(local_168 + 0x70) + 0x30))
                              (*(longlong **)(local_168 + 0x70),local_16c);
            local_48 = *(longlong **)(lVar6 + 0x110);
            (**(code **)(*local_48 + 0x90))(local_48,L"main",local_50);
            iVar4 = (**(code **)(*local_50 + 0x28))();
            local_160 = 0;
            if (-1 < iVar4 + -1) {
              do {
                (**(code **)(*local_50 + 0x18))(local_50,&local_110,local_160);
                local_188 = (wchar_t *)local_110;
                FUN_00416cd0(&local_108,3,local_40,local_68);
                (**(code **)(*local_50 + 0x18))(local_50,&local_120,local_160);
                local_188 = (wchar_t *)0x0;
                (**(code **)(*local_48 + 0x10))(local_48,&local_118,L"main",local_120);
                (**(code **)(*local_30 + 0x18))(local_30,local_38,local_108,local_118);
                local_160 = local_160 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            local_16c = local_16c + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        FUN_00416ba0(&local_128,local_40,L"YAxis.Count");
        uVar3 = (**(code **)(**(longlong **)(local_168 + 0x78) + 0x28))
                          (*(longlong **)(local_168 + 0x78));
        (**(code **)(*local_30 + 0x28))(local_30,local_38,local_128,uVar3);
        iVar8 = (**(code **)(**(longlong **)(local_168 + 0x78) + 0x28))();
        local_16c = 0;
        if (-1 < iVar8 + -1) {
          do {
            FUN_0043f750(&local_130,local_16c);
            local_188 = L".";
            FUN_00416cd0(&local_68,3,L"YAxis.",local_130);
            uVar5 = (**(code **)(**(longlong **)(local_168 + 0x78) + 0x30))
                              (*(longlong **)(local_168 + 0x78),local_16c);
            FUN_01adca80(auStack_1a8,local_68,uVar5);
            lVar6 = (**(code **)(**(longlong **)(local_168 + 0x78) + 0x30))
                              (*(longlong **)(local_168 + 0x78),local_16c);
            if (*(longlong *)(lVar6 + 0x118) != 0) {
              local_188 = L"Twin";
              FUN_00416cd0(&local_138,3,local_40,local_68);
              (**(code **)(*local_30 + 0x28))(local_30,local_38,local_138,1);
              FUN_00416ba0(&local_140,local_68,L"Twin.");
              lVar6 = (**(code **)(**(longlong **)(local_168 + 0x78) + 0x30))
                                (*(longlong **)(local_168 + 0x78),local_16c);
              FUN_01adca80(auStack_1a8,local_140,*(undefined8 *)(lVar6 + 0x118));
            }
            local_16c = local_16c + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_170 = local_170 + 1;
        local_15c = local_15c + -1;
        iVar8 = local_15c;
      } while (local_15c != 0);
    }
    uVar3 = (**(code **)(**(longlong **)(local_178 + 0xe0) + 0x28))
                      (*(longlong **)(local_178 + 0xe0));
    (**(code **)(*local_30 + 0x28))(local_30,local_38,L"Figure.Count",uVar3);
    iVar8 = (**(code **)(**(longlong **)(local_178 + 0xe0) + 0x28))();
    local_170 = 0;
    if (-1 < iVar8 + -1) {
      do {
        FUN_0043f750(&local_148,local_170);
        local_188 = L".";
        FUN_00416cd0(&local_70,3,L"Figure.",local_148);
        FUN_00416ba0(&local_150,local_70,L"Type");
        puVar7 = (undefined8 *)
                 (**(code **)(**(longlong **)(local_178 + 0xe0) + 0x30))
                           (*(longlong **)(local_178 + 0xe0),local_170);
        FUN_00410ae0(*puVar7,&local_158);
        (**(code **)(*local_30 + 0x18))(local_30,local_38,local_150,local_158);
        uVar5 = (**(code **)(**(longlong **)(local_178 + 0xe0) + 0x30))
                          (*(longlong **)(local_178 + 0xe0),local_170);
        cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01a5c280);
        if (cVar1 != '\0') {
          uVar5 = (**(code **)(**(longlong **)(local_178 + 0xe0) + 0x30))
                            (*(longlong **)(local_178 + 0xe0),local_170);
          FUN_01a5f630(uVar5,local_30,local_38,local_70);
        }
        local_170 = local_170 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_01ae9240(local_178,local_30,local_res10[0]);
    FUN_00410f20(local_50);
    FUN_00410f20(local_30);
  }
  FUN_00414560(&local_158,0x1c);
  FUN_00414560(&local_70,4);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_res10);
  return;
}

