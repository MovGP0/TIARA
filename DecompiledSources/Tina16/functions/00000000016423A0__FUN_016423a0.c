/* Ghidra address: 016423a0 */
/* Ghidra symbol: FUN_016423a0 */


/* WARNING: Removing unreachable block (ram,0x01642714) */
/* WARNING: Removing unreachable block (ram,0x01642724) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016423a0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_RBX;
  bool bVar21;
  undefined4 local_1c0;
  int local_1bc;
  int local_19c;
  undefined8 local_198;
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
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_140 = 0;
  local_148 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90[0] = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  plVar11 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar12 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar13 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar14 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar15 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar16 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01642290(param_1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x10f0) + 0x28))();
  local_1bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
      (**(code **)(*plVar13 + 0x90))(plVar13);
      (**(code **)(**(longlong **)(param_1 + 0x10f0) + 0x18))
                (*(longlong **)(param_1 + 0x10f0),local_90,local_1bc);
      plVar17 = (longlong *)FUN_01b21190(local_90[0],0x3b,0);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_78,0);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_50,1);
      (**(code **)(*plVar17 + 0x18))(plVar17,&local_80,2);
      (**(code **)(*plVar13 + 0x78))(plVar13,local_78);
      local_198 = FUN_016284a0(plVar13,*(undefined8 *)(param_1 + 0x78),unaff_RBX & 0xffffffff);
      FUN_016432f0(param_1,local_198,local_50,local_80);
      local_1c0 = 1;
      FUN_0043f750(&local_98,1);
      FUN_0043f750(&local_a0,0);
      FUN_0043f750(&local_a8,0);
      FUN_00416cd0(&local_58,5,local_98,&DAT_01643214,local_a0,&DAT_01643214,local_a8);
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))(*(longlong **)(param_1 + 0x40),local_58)
      ;
      local_1bc = local_1bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))();
  local_1bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                (*(longlong **)(param_1 + 0x38),&local_38,local_1bc);
      FUN_004b4b10(plVar11,local_38);
      (**(code **)(*plVar13 + 0x90))(plVar13);
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_b0,0);
      uVar4 = FUN_0043fc00(local_b0);
      iVar5 = (**(code **)(*plVar11 + 0x28))(plVar11);
      if (iVar5 == 1) {
        _DAT_0210f84c = 1;
      }
      else {
        FUN_0043f750(&local_b8,uVar4);
        (**(code **)(*plVar13 + 0x78))(plVar13,local_b8);
        local_19c = 1;
        (**(code **)(*plVar14 + 0x90))(plVar14);
        (**(code **)(*plVar15 + 0x90))(plVar15);
        bVar1 = false;
        for (; local_19c < iVar5; local_19c = local_19c + 2) {
          (**(code **)(*plVar11 + 0x18))(plVar11,&local_c0,local_19c);
          uVar6 = FUN_0043fc00(local_c0);
          lVar20 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),uVar6);
          (**(code **)(*plVar11 + 0x18))(plVar11,&local_c8,local_19c + 1);
          iVar8 = FUN_0043fc00(local_c8);
          uVar19 = FUN_01634bb0(lVar20,iVar8);
          bVar1 = (bool)(bVar1 | (uVar19 & 0x200) != 0);
          if (*(int *)(lVar20 + 0x5c8) == 2) {
            (**(code **)(*plVar11 + 0x18))(plVar11,&local_d0,local_19c);
            (**(code **)(*plVar14 + 0x80))(plVar14,local_d0,(longlong)iVar8);
          }
          if (*(int *)(lVar20 + 0x5c8) == 1) {
            (**(code **)(*plVar11 + 0x18))(plVar11,&local_d8,local_19c);
            (**(code **)(*plVar15 + 0x78))(plVar15,local_d8);
          }
        }
        iVar5 = (**(code **)(*plVar14 + 0x28))(plVar14);
        if (0 < iVar5) {
          iVar5 = (**(code **)(*plVar14 + 0x28))();
          local_19c = 0;
          if (-1 < iVar5 + -1) {
            do {
              lVar20 = *plVar14;
              (**(code **)(lVar20 + 0x18))(plVar14,&local_e0,local_19c);
              uVar6 = FUN_0043fc00(local_e0);
              uVar7 = (**(code **)(*plVar14 + 0x30))(plVar14,local_19c);
              lVar18 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),uVar6);
              FUN_00414b50(&local_50,*(undefined8 *)(lVar18 + 0x638));
              iVar8 = FUN_01634b90(lVar18,uVar7);
              FUN_01634bd0(lVar18,&local_40,uVar7);
              uVar19 = FUN_01634bb0(lVar18,uVar7);
              bVar21 = (uVar19 & 0x200) != 0;
              uVar19 = CONCAT71((int7)((ulonglong)lVar20 >> 8),bVar21);
              FUN_00416cd0(&local_48,3,*(undefined8 *)(lVar18 + 0x638),&DAT_01643224,local_40);
              if ((iVar8 == 1) || (iVar8 == 3)) {
                local_1c0 = 0;
              }
              if ((iVar8 == 2) || (iVar8 == 3)) {
                local_1c0 = 1;
              }
              FUN_0043f750(&local_e8,local_1c0);
              FUN_0043f750(&local_f0,uVar6);
              FUN_0043f750(&local_f8,uVar7);
              FUN_00416cd0(&local_58,5,local_e8,&DAT_01643214,local_f0,&DAT_01643214,local_f8);
              if (bVar21) {
                (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))
                          (*(longlong **)(param_1 + 0x40),local_58);
                if ((iVar8 == 2) || (iVar8 == 3)) {
                  local_198 = FUN_016284a0(plVar13,*(undefined8 *)(param_1 + 0x78),
                                           uVar19 & 0xffffffff);
                }
                FUN_0043f750(&local_100,uVar7);
                FUN_016432f0(param_1,local_198,local_50,local_100);
                FUN_0043f750(&local_110,uVar4);
                FUN_00416cd0(&local_108,4,L"DA inserted: iGR: ",local_110,&DAT_01643268,local_58);
                FUN_01602e30(local_108,1);
                FUN_0043f750(&local_118,uVar4);
                (**(code **)(*plVar16 + 0x78))(plVar16,local_118);
              }
              iVar9 = (**(code **)(*plVar15 + 0x28))();
              if (-1 < iVar9 + -1) {
                do {
                  if ((iVar8 == 1) || (iVar8 == 3)) {
                    local_1c0 = 0;
                  }
                  if ((iVar8 == 2) || (iVar8 == 3)) {
                    local_1c0 = 1;
                  }
                  FUN_0043f750(&local_120,local_1c0);
                  FUN_0043f750(&local_128,uVar6);
                  FUN_0043f750(&local_130,uVar7);
                  FUN_00416cd0(&local_58,5,local_120,&DAT_01643214,local_128,&DAT_01643214,local_130
                              );
                  if ((!bVar1) &&
                     (iVar10 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xb0))
                                         (*(longlong **)(param_1 + 0x40),local_58), iVar10 < 0)) {
                    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x78))
                              (*(longlong **)(param_1 + 0x40),local_58);
                    if ((iVar8 == 1) || (iVar8 == 3)) {
                      local_198 = FUN_01628450(plVar13,*(undefined8 *)(param_1 + 0x78));
                    }
                    if ((iVar8 == 2) || (iVar8 == 3)) {
                      local_198 = FUN_016284a0(plVar13,*(undefined8 *)(param_1 + 0x78),
                                               uVar19 & 0xffffffff);
                    }
                    FUN_0043f750(&local_138,uVar7);
                    FUN_016432f0(param_1,local_198,local_50,local_138);
                    FUN_0043f750(&local_148,uVar4);
                    FUN_00416cd0(&local_140,4,L"AD or DA inserted: iGR: ",local_148,&DAT_01643268,
                                 local_58);
                    FUN_01602e30(local_140,1);
                    FUN_0043f750(&local_150,uVar4);
                    (**(code **)(*plVar16 + 0x78))(plVar16,local_150);
                  }
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              local_19c = local_19c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      local_1bc = local_1bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_015fcd70(&local_158,*(undefined8 *)(param_1 + 0x10b8));
  FUN_00416cd0(&local_30,3,local_158,&DAT_016432bc,L"mixed_info2.txt");
  cVar2 = FUN_00440a20(local_30,1);
  if (cVar2 != '\0') {
    (**(code **)(*plVar12 + 0xd8))(plVar12,local_30);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
  local_1bc = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                (*(longlong **)(param_1 + 0x40),&local_58,local_1bc);
      FUN_004b4b10(plVar11,local_58);
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_160,1);
      uVar4 = FUN_0043fc00(local_160);
      lVar20 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),uVar4);
      FUN_00414b50(&local_50,*(undefined8 *)(lVar20 + 0x638));
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_170,0);
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_178,2);
      FUN_00416cd0(&local_168,5,local_170,&DAT_01643214,local_50,&DAT_01643214,local_178);
      (**(code **)(*plVar12 + 0x78))(plVar12,local_168);
      local_1bc = local_1bc + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  (**(code **)(*plVar12 + 0x100))(plVar12,local_30);
  FUN_00410f20(plVar11);
  FUN_00410f20(plVar12);
  FUN_00410f20(plVar13);
  FUN_00410f20(plVar14);
  FUN_00410f20(plVar15);
  FUN_00410f20(plVar16);
  FUN_00414560(&local_178,0x1e);
  FUN_00414560(&local_80,0xb);
  return;
}

