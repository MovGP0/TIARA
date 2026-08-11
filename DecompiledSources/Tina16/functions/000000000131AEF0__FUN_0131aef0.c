/* Ghidra address: 0131aef0 */
/* Ghidra symbol: FUN_0131aef0 */


void FUN_0131aef0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_228 [32];
  wchar_t *local_208;
  undefined *local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  int local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  longlong local_1c8;
  undefined4 local_1c0;
  int local_1bc;
  char local_1b6;
  char local_1b5;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  int local_158 [2];
  undefined1 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong local_80 [2];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  wchar_t *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = (undefined8 *)0x0;
  local_170 = 0;
  local_178 = (undefined *)0x0;
  local_168 = 0;
  local_160 = 0;
  local_138 = 0;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = (undefined8 *)0x0;
  local_e8 = 0;
  local_f0 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  local_d0 = 0;
  local_d8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_b8 = (longlong *)0x0;
  local_b0 = (longlong *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = (longlong *)0x0;
  local_90 = 0;
  local_98 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_80[0] = 0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (wchar_t *)0x0;
  local_60 = (undefined8 *)0x0;
  local_68 = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  local_1b6 = '\x01';
  local_1c8 = param_1;
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00bac3d0(&local_38);
  cVar1 = (**(code **)(*local_38 + 0x170))(local_38,*(undefined8 *)(local_1c8 + 0x38));
  if (cVar1 != '\0') {
    (**(code **)(*local_38 + 0x100))(local_38,local_80);
    if (local_80[0] != 0) {
      (**(code **)(*local_38 + 0x100))(local_38,&local_88);
      (**(code **)(*local_88 + 0x100))(local_88,&local_68,L"simMode");
      iVar3 = FUN_00416db0(local_68,&DAT_0131c368);
      if (iVar3 == 0) {
        local_1b6 = '\x01';
      }
      else {
        iVar3 = FUN_00416db0(local_68,L"Single");
        if (iVar3 == 0) {
          local_1b6 = '\0';
        }
      }
      (**(code **)(*local_38 + 0x100))(local_38,&local_98);
      (**(code **)(*local_98 + 0x100))(local_98,&local_90,L"manufacturer");
      local_1c0 = FUN_0043fc00(local_90);
      (**(code **)(*local_38 + 0x100))(local_38,&local_a0);
      (**(code **)(*local_a0 + 0xe8))(local_a0,&local_40,L"/testbench/testcase");
      uVar4 = (**(code **)(*local_40 + 0x18))(local_40);
      *(undefined4 *)(local_1c8 + 0x7c) = uVar4;
      (**(code **)(*local_40 + 0x68))(local_40);
      (**(code **)(*local_40 + 0x70))(local_40,&local_a8);
      FUN_0041b890(&local_48,local_a8,&DAT_0131c3e8);
      while (local_48 != (longlong *)0x0) {
        FUN_0041b800(&local_50);
        local_1b5 = '\0';
        (**(code **)(*local_48 + 0x20))(local_48,&local_b0);
        iVar3 = (**(code **)(*local_b0 + 0x18))();
        local_1bc = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*local_48 + 0x20))(local_48,&local_b8);
            (**(code **)(*local_b8 + 0x20))(local_b8,&local_50,local_1bc);
            (**(code **)(*local_50 + 0x40))(local_50,&local_c0);
            iVar5 = FUN_00416db0(local_c0,L"action");
            if (iVar5 == 0) {
              (**(code **)(*local_50 + 0x18))(local_50,&local_c8);
              iVar5 = (**(code **)(*local_c8 + 0x18))();
              local_1b4 = 0;
              if (-1 < iVar5 + -1) {
                do {
                  (**(code **)(*local_50 + 0x18))(local_50,&local_e0);
                  (**(code **)(*local_e0 + 0x20))(local_e0,&local_d8,local_1b4);
                  (**(code **)(*local_d8 + 0x40))(local_d8,&local_d0);
                  iVar6 = FUN_00416db0(local_d0,L"action");
                  if (iVar6 == 0) {
                    (**(code **)(*local_50 + 0x18))(local_50,&local_f8);
                    (**(code **)(*local_f8 + 0x20))(local_f8,&local_f0,local_1b4);
                    (**(code **)(*local_f0 + 0xb8))(local_f0,&local_e8);
                    iVar6 = FUN_00416db0(local_e8,L"Do not run");
                    if (iVar6 == 0) {
                      local_1b5 = '\x01';
                      break;
                    }
                  }
                  local_1b4 = local_1b4 + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
            }
            if (local_1b5 != '\0') break;
            local_1bc = local_1bc + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        if (local_1b5 == '\0') {
          (**(code **)(*local_48 + 0x100))(local_48,&local_58,L"folder");
          iVar3 = FUN_00416db0(local_58,&DAT_0131c460);
          if (iVar3 == 0) {
            cVar1 = FUN_00440b00(*(undefined8 *)(local_1c8 + 0x48),1);
            FUN_00416ba0(&local_58,*(undefined8 *)(local_1c8 + 0x48),local_58);
          }
          else {
            local_208 = local_58;
            FUN_00416cd0(&local_108,3,*(undefined8 *)(local_1c8 + 0x48),&DAT_0131c460);
            cVar1 = FUN_00440b00(local_108,1);
            local_208 = local_58;
            local_200 = &DAT_0131c460;
            FUN_00416cd0(&local_58,4,*(undefined8 *)(local_1c8 + 0x48),&DAT_0131c460);
          }
          if (cVar1 != '\0') {
            local_1b5 = '\0';
            if (local_1b6 == '\0') {
              (**(code **)(*local_48 + 0x100))(local_48,&local_110,L"runThis");
              cVar1 = FUN_0043fed0(local_110,0);
              if (cVar1 != '\0') {
                local_1b5 = '\x01';
              }
            }
            else {
              local_1b5 = '\x01';
            }
            if (local_1b5 != '\0') {
              (**(code **)(*local_48 + 0x100))(local_48,&local_60,L"circuit");
              local_208 = L".TSC";
              FUN_00416cd0(&local_118,3,local_58,local_60);
              cVar1 = FUN_00440a20(local_118,1);
              if (cVar1 == '\0') {
                local_208 = L".TSC";
                FUN_00416cd0(&local_60,3,local_58,local_60);
                local_208 = L".TSC";
                FUN_00416cd0(&local_128,3,local_58,local_60);
                (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x80))
                          (*(longlong **)(local_1c8 + 0x20),local_128,0);
                local_208 = (wchar_t *)0x0;
                FUN_01309160(2,local_60,*(undefined8 *)(local_1c8 + 0x40),
                             *(undefined8 *)(local_1c8 + 0x38));
              }
              else {
                local_208 = L".TSC";
                FUN_00416cd0(&local_120,3,local_58,local_60);
                uVar8 = FUN_0131ae80(auStack_228,local_48);
                (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x80))
                          (*(longlong **)(local_1c8 + 0x20),local_120,uVar8);
              }
            }
          }
          (**(code **)(*local_40 + 0x70))(local_40,&local_130);
          FUN_0041b890(&local_48,local_130,&DAT_0131c3e8);
        }
        else {
          (**(code **)(*local_40 + 0x70))(local_40,&local_100);
          FUN_0041b890(&local_48,local_100,&DAT_0131c3e8);
        }
      }
      iVar3 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x28))
                        (*(longlong **)(local_1c8 + 0x20));
      if (iVar3 == 0) {
        *(undefined1 *)(local_1c8 + 0x75) = 1;
      }
      if (*(char *)(local_1c8 + 0x74) == '\0') {
        local_1bc = 0;
        if ((*(char *)(local_1c8 + 0x98) != '\0') && (*(longlong *)PTR_DAT_020013f8 != 0)) {
          FUN_012ea610(*(undefined8 *)PTR_DAT_020013f8,1,1);
          local_158[0] = local_1bc;
          local_150 = 0;
          local_148 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x28))
                                (*(longlong **)(local_1c8 + 0x20));
          local_140 = 0;
          FUN_00442f70(&local_138,L"Current testbench status: %d/%d",local_158,1);
          FUN_012ea640(*(undefined8 *)PTR_DAT_020013f8,1,local_138);
          FUN_008059a0(*(undefined8 *)PTR_DAT_020013f8);
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
        }
        while ((iVar3 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x28))
                                  (*(longlong **)(local_1c8 + 0x20)), local_1bc < iVar3 &&
               (*(char *)(local_1c8 + 0x72) == '\0'))) {
          lVar7 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x30))
                            (*(longlong **)(local_1c8 + 0x20),local_1bc);
          if (lVar7 == 0) {
            local_208 = (wchar_t *)0x0;
            FUN_01309160(2,local_60,*(undefined8 *)(local_1c8 + 0x40),
                         *(undefined8 *)(local_1c8 + 0x38));
          }
          else {
            uVar8 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x30))
                              (*(longlong **)(local_1c8 + 0x20),local_1bc);
            FUN_0041b890(&local_160,uVar8,&DAT_0131c3e8);
            pcVar9 = (char *)FUN_012f2450(local_160);
            uVar8 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x30))
                              (*(longlong **)(local_1c8 + 0x20),local_1bc);
            FUN_0131aea0(auStack_228,uVar8);
            if (((*pcVar9 != '\0') || (pcVar9[1] != '\0')) || (pcVar9[2] != '\0')) {
              *PTR_DAT_02002ce0 = 0;
              (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x18))
                        (*(longlong **)(local_1c8 + 0x20),&local_168,local_1bc);
              local_208 = *(wchar_t **)(local_1c8 + 0x40);
              local_200 = *(undefined **)(local_1c8 + 0x38);
              local_1f8 = (undefined1 *)CONCAT71(local_1f8._1_7_,1);
              FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_168,0,2);
              iVar3 = local_1bc + 1;
              FUN_0043f750(&local_170,iVar3);
              uVar4 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x28))
                                (*(longlong **)(local_1c8 + 0x20));
              FUN_0043f750(&local_178,uVar4);
              local_208 = L"/";
              local_200 = local_178;
              local_1f8 = &LAB_0131c530;
              FUN_00416cd0(*(longlong *)PTR_DAT_02004e40 + 0x27d8,5,&DAT_0131c50c,local_170);
              FUN_0064dd90(*(undefined8 *)PTR_DAT_02004e40,&local_180);
              FUN_00416ad0(&local_180,*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27d8));
              FUN_0064de00(*(undefined8 *)PTR_DAT_02004e40,local_180);
              if (*PTR_DAT_02002ce0 == '\0') {
                (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x18))
                          (*(longlong **)(local_1c8 + 0x20),&local_188,local_1bc);
                local_208 = *(wchar_t **)(local_1c8 + 0x38);
                local_200 = *(undefined **)(local_1c8 + 0x48);
                local_1f8 = *(undefined1 **)(local_1c8 + 0x50);
                local_1f0 = CONCAT71(local_1f0._1_7_,*(undefined1 *)(local_1c8 + 0x76));
                local_1e0 = CONCAT31(local_1e0._1_3_,6);
                local_1d8 = 0;
                local_1e8 = iVar3;
                FUN_01315290(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),pcVar9,
                             local_188,*(undefined8 *)(local_1c8 + 0x40));
                FUN_01c93f00(*(undefined8 *)PTR_DAT_02004e40,
                             *(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2788),0,0);
              }
              if ((*(char *)(local_1c8 + 0x98) != '\0') && (*(longlong *)PTR_DAT_020013f8 != 0)) {
                local_158[0] = local_1bc + 1;
                local_150 = 0;
                local_148 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x28))
                                      (*(longlong **)(local_1c8 + 0x20));
                local_140 = 0;
                FUN_00442f70(&local_190,L"Current testbench status: %d/%d",local_158,1);
                FUN_012ea640(*(undefined8 *)PTR_DAT_020013f8,1,local_190);
                if ((*(char *)(local_1c8 + 0x72) == '\0') &&
                   (*(char *)(*(longlong *)PTR_DAT_020013f8 + 0x6c9) == '\0')) {
                  uVar2 = 0;
                }
                else {
                  uVar2 = 1;
                }
                *(undefined1 *)(local_1c8 + 0x72) = uVar2;
                FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
                thunk_FUN_0419965d(200);
              }
            }
            FUN_004095f0(pcVar9);
          }
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          local_1bc = local_1bc + 1;
        }
      }
      else {
        uVar8 = FUN_012cc640(&PTR_FUN_012cba78,1,*(undefined8 *)PTR_DAT_02004030,local_1c8 + 0x72);
        *(undefined8 *)(local_1c8 + 0x90) = uVar8;
        FUN_008059a0(uVar8);
        while ((iVar3 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x28))
                                  (*(longlong **)(local_1c8 + 0x20)),
               *(int *)(local_1c8 + 0x80) < iVar3 && (*(char *)(local_1c8 + 0x72) == '\0'))) {
          if ((0 < *(int *)(local_1c8 + 0x7c)) &&
             (*(int *)(local_1c8 + 0x78) < *(int *)(local_1c8 + 0x88))) {
            FUN_013189e0(local_1c8,1);
            lVar7 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x30))
                              (*(longlong **)(local_1c8 + 0x20),*(undefined4 *)(local_1c8 + 0x84));
            if (lVar7 == 0) {
              (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x18))
                        (*(longlong **)(local_1c8 + 0x20),&local_1b0,
                         *(undefined4 *)(local_1c8 + 0x84));
              local_208 = (wchar_t *)CONCAT44(local_208._4_4_,*(int *)(local_1c8 + 0x80) + 1);
              FUN_012ccc10(*(undefined8 *)(local_1c8 + 0x90),local_1b0,
                           *(int *)(local_1c8 + 0x78) + -1,*(undefined4 *)(local_1c8 + 0x7c));
              FUN_013189e0(local_1c8,0);
            }
            else {
              uVar8 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x30))
                                (*(longlong **)(local_1c8 + 0x20),*(undefined4 *)(local_1c8 + 0x84))
              ;
              FUN_0041b890(&local_198,uVar8,&DAT_0131c3e8);
              uVar8 = FUN_012f2450(local_198);
              uVar10 = (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x30))
                                 (*(longlong **)(local_1c8 + 0x20),*(undefined4 *)(local_1c8 + 0x84)
                                 );
              FUN_0131aea0(auStack_228,uVar10);
              (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x18))
                        (*(longlong **)(local_1c8 + 0x20),&local_1a0,
                         *(undefined4 *)(local_1c8 + 0x84));
              FUN_01318ad0(local_1c8,local_1a0,uVar8);
              uVar10 = FUN_004d0ba0(&PTR_FUN_01308728,1,1);
              FUN_004d1400(uVar10,1);
              (**(code **)(**(longlong **)(local_1c8 + 0x20) + 0x18))
                        (*(longlong **)(local_1c8 + 0x20),&local_1a8,
                         *(undefined4 *)(local_1c8 + 0x84));
              local_208 = *(wchar_t **)(local_1c8 + 0x40);
              local_200 = *(undefined **)(local_1c8 + 0x38);
              local_1f8 = *(undefined1 **)(local_1c8 + 0x48);
              local_1f0 = *(undefined8 *)(local_1c8 + 0x50);
              local_1e8 = CONCAT31(local_1e8._1_3_,*(undefined1 *)(local_1c8 + 0x76));
              local_1e0 = *(int *)(local_1c8 + 0x84) + 1;
              local_1d8 = CONCAT71(local_1d8._1_7_,3);
              FUN_0131c840(uVar10,local_1c8,uVar8,local_1a8);
              FUN_004d1e30(uVar10);
            }
          }
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          thunk_FUN_0419965d(200);
        }
        while (0 < *(int *)(local_1c8 + 0x78)) {
          FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
          thunk_FUN_0419965d(200);
        }
        local_70 = (undefined8 *)(local_1c8 + 0x90);
        uVar8 = *local_70;
        *local_70 = 0;
        FUN_00410f20(uVar8);
      }
      *PTR_DAT_02002ce0 = 0;
      FUN_00414480(*(longlong *)PTR_DAT_02004e40 + 0x27d8);
    }
  }
  FUN_0131a360(local_1c8,1,local_1c0);
  FUN_00410f20(local_30);
  FUN_00414560(&local_1b0,3);
  FUN_0041b800(&local_198);
  FUN_00414560(&local_190,2);
  FUN_00414480(&local_180);
  FUN_00414560(&local_178,3);
  FUN_0041b800(&local_160);
  FUN_00414480(&local_138);
  FUN_0041b800(&local_130);
  FUN_00414560(&local_128,5);
  FUN_0041b800(&local_100);
  FUN_0041b800(&local_f8);
  FUN_0041b800(&local_f0);
  FUN_00414480(&local_e8);
  FUN_0041b800(&local_e0);
  FUN_0041b800(&local_d8);
  FUN_00414480(&local_d0);
  FUN_0041b800(&local_c8);
  FUN_00414480(&local_c0);
  FUN_00417840(&local_b8,&DAT_00b9f960,2);
  FUN_0041b800(&local_a8);
  FUN_00417840(&local_a0,&LAB_00b9fca0,2);
  FUN_00414480(&local_90);
  FUN_00417840(&local_88,&LAB_00b9fca0,2);
  FUN_00414560(&local_68,3);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  return;
}

