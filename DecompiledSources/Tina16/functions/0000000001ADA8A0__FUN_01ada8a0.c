/* Ghidra address: 01ada8a0 */
/* Ghidra symbol: FUN_01ada8a0 */


void FUN_01ada8a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 local_res10 [3];
  undefined1 auStack_198 [32];
  undefined8 local_178;
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
  undefined1 *local_c0;
  longlong local_a8;
  longlong local_a0;
  int local_94;
  int local_90;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_44;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_c0 = auStack_198;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_40 = (longlong *)FUN_01ae9310(param_1,local_res10[0],0);
  FUN_01ae94a0(param_1,&local_50);
  local_44 = FUN_01ae9510(param_1,0,0);
  FUN_0043f750(&local_e0,local_44);
  FUN_00416ba0(&local_d8,L"AllCurves",local_e0);
  local_178 = 0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_d0,local_50,local_d8);
  FUN_00415dd0(&local_e8,local_d0,0);
  FUN_00b0d000(&local_c8,local_e8,0xfde9);
  FUN_004168b0(&local_58,local_c8);
  FUN_0043f750(&local_108,local_44);
  FUN_00416ba0(&local_100,L"DisplayedCurves",local_108);
  local_178 = 0;
  (**(code **)(*local_40 + 0x10))(local_40,&local_f8,local_50,local_100);
  FUN_00415dd0(&local_110,local_f8,0);
  FUN_00b0d000(&local_f0,local_110,0xfde9);
  FUN_004168b0(&local_60,local_f0);
  iVar2 = (**(code **)(*local_40 + 0x20))(local_40,local_50,L"Version",1);
  if ((iVar2 < 2) && (local_58 != 0)) {
    local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01ada580(param_1,&local_78);
    FUN_00410f20(local_40);
    local_68 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined2 *)((longlong)local_68 + 0x2c) = 0x3b;
    FUN_004b50b0(local_68,local_58);
    local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(undefined2 *)((longlong)local_70 + 0x2c) = 0x3b;
    FUN_004b50b0(local_70,local_60);
    local_80 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_88 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = (**(code **)(*local_78 + 0x28))();
    local_8c = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_78 + 0x18))(local_78,&local_118,local_8c);
        iVar3 = (**(code **)(*local_70 + 0xb0))(local_70,local_118);
        if (iVar3 == -1) {
          (**(code **)(*local_78 + 0x18))(local_78,&local_128,local_8c);
          iVar3 = (**(code **)(*local_68 + 0xb0))(local_68,local_128);
          if (iVar3 != -1) {
            (**(code **)(*local_78 + 0x18))(local_78,&local_130,local_8c);
            (**(code **)(*local_88 + 0x78))(local_88,local_130);
          }
        }
        else {
          (**(code **)(*local_78 + 0x18))(local_78,&local_120,local_8c);
          uVar6 = (**(code **)(*local_78 + 0x30))(local_78,local_8c);
          (**(code **)(*local_80 + 0x80))(local_80,local_120,uVar6);
        }
        local_8c = local_8c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01ada5a0(param_1,0,local_80,local_88);
    FUN_00410f20(local_80);
    FUN_00410f20(local_88);
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
    local_8c = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),local_8c);
        local_a0 = FUN_004113f0(uVar6,&DAT_01cdd500);
        if (*(byte *)(local_a0 + 0x58) < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)local_a0 >> 8),1) <<
                   (*(byte *)(local_a0 + 0x58) & 0x1f) & 3U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          iVar3 = (**(code **)(*local_70 + 0x28))();
          local_90 = 0;
          if (-1 < iVar3 + -1) {
            do {
              (**(code **)(*local_70 + 0x18))(local_70,&local_138,local_90);
              local_94 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0xb0))
                                   (*(longlong **)(local_a0 + 0x80),local_138);
              if (local_94 != -1) {
                (**(code **)(*local_70 + 0x18))(local_70,&local_140,local_90);
                iVar4 = (**(code **)(*local_30 + 0xb0))(local_30,local_140);
                if (iVar4 == -1) {
                  (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x18))
                            (*(longlong **)(local_a0 + 0x80),&local_148,local_94);
                  uVar6 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                    (*(longlong **)(local_a0 + 0x80),local_94);
                  (**(code **)(*local_30 + 0x80))(local_30,local_148,uVar6);
                  uVar6 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                    (*(longlong **)(local_a0 + 0x80),local_94);
                  cVar1 = FUN_004113d0(uVar6,&PTR_FUN_01aaff18);
                  if (cVar1 == '\0') {
                    lVar7 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                      (*(longlong **)(local_a0 + 0x80),local_94);
                    local_a8 = *(longlong *)(lVar7 + 0x100);
                  }
                  else {
                    lVar7 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                      (*(longlong **)(local_a0 + 0x80),local_94);
                    local_a8 = *(longlong *)(lVar7 + 0xf0);
                  }
                  cVar1 = FUN_01ce33d0(local_a0);
                  if (((cVar1 == '\x01') &&
                      (iVar4 = (**(code **)(*local_38 + 0xc0))(local_38,local_a8), iVar4 == -1)) &&
                     (*(char *)(local_a8 + 0x120) != '\0')) {
                    (**(code **)(*local_38 + 0x80))
                              (local_38,*(undefined8 *)(local_a8 + 0xd8),local_a8);
                  }
                }
              }
              local_90 = local_90 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar3 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x28))();
          local_90 = 0;
          if (-1 < iVar3 + -1) {
            do {
              (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x18))
                        (*(longlong **)(local_a0 + 0x80),&local_150,local_90);
              local_94 = (**(code **)(*local_70 + 0xb0))(local_70,local_150);
              if (local_94 == -1) {
                (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x18))
                          (*(longlong **)(local_a0 + 0x80),&local_158,local_90);
                iVar4 = (**(code **)(*local_30 + 0xb0))(local_30,local_158);
                if (iVar4 == -1) {
                  (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x18))
                            (*(longlong **)(local_a0 + 0x80),&local_160,local_90);
                  uVar6 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                    (*(longlong **)(local_a0 + 0x80),local_90);
                  (**(code **)(*local_30 + 0x80))(local_30,local_160,uVar6);
                  uVar6 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                    (*(longlong **)(local_a0 + 0x80),local_90);
                  cVar1 = FUN_004113d0(uVar6,&PTR_FUN_01aaff18);
                  if (cVar1 == '\0') {
                    lVar7 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                      (*(longlong **)(local_a0 + 0x80),local_90);
                    local_a8 = *(longlong *)(lVar7 + 0x100);
                  }
                  else {
                    lVar7 = (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x30))
                                      (*(longlong **)(local_a0 + 0x80),local_90);
                    local_a8 = *(longlong *)(lVar7 + 0xf0);
                  }
                  cVar1 = FUN_01ce33d0(local_a0);
                  if (((cVar1 == '\x01') &&
                      (iVar4 = (**(code **)(*local_38 + 0xc0))(local_38,local_a8), iVar4 == -1)) &&
                     (*(char *)(local_a8 + 0x120) != '\0')) {
                    (**(code **)(*local_38 + 0x80))
                              (local_38,*(undefined8 *)(local_a8 + 0xd8),local_a8);
                  }
                }
              }
              local_90 = local_90 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          (**(code **)(**(longlong **)(local_a0 + 0x80) + 0x10))
                    (*(longlong **)(local_a0 + 0x80),local_30);
          cVar1 = FUN_01ce33d0(local_a0);
          if (cVar1 == '\x01') {
            (**(code **)(**(longlong **)(local_a0 + 0x78) + 0x10))
                      (*(longlong **)(local_a0 + 0x78),local_38);
            iVar3 = (**(code **)(**(longlong **)(local_a0 + 0x78) + 0x28))
                              (*(longlong **)(local_a0 + 0x78));
            if (0 < iVar3) {
              FUN_01ce74d0(local_a0,local_res10[0]);
            }
            uVar5 = FUN_01ce83f0(local_a0);
            FUN_01ce6ab0(local_a0,uVar5,0);
          }
          (**(code **)(*local_30 + 0x90))(local_30);
          (**(code **)(*local_38 + 0x90))(local_38);
        }
        local_8c = local_8c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
    FUN_00410f20(local_68);
    FUN_00410f20(local_70);
  }
  else {
    FUN_00410f20(local_40);
  }
  FUN_00414560(&local_160,10);
  FUN_004144d0(&local_110);
  FUN_00414560(&local_108,3);
  FUN_00414520(&local_f0);
  FUN_004144d0(&local_e8);
  FUN_00414560(&local_e0,3);
  FUN_00414520(&local_c8);
  FUN_00414560(&local_60,3);
  FUN_00414480(local_res10);
  return;
}

