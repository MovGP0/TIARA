/* Ghidra address: 018d7950 */
/* Ghidra symbol: FUN_018d7950 */


void FUN_018d7950(longlong param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_res10;
  int local_res18;
  int local_res20;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  int local_150;
  undefined1 local_148;
  undefined1 local_140;
  int local_12c;
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
  undefined1 *local_a0;
  longlong local_90;
  char local_85;
  int local_84;
  longlong local_80;
  char local_71;
  undefined8 local_70;
  int local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_178;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_90 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414650(&local_res10);
  FUN_018d4040(*(undefined8 *)(param_1 + 0x30));
  FUN_018d4ac0(*(undefined8 *)(param_1 + 0x30),&local_res10);
  piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 0x28);
  *piVar1 = *piVar1 + 2;
  local_85 = '\0';
  iVar4 = FUN_0044f060();
  if (iVar4 == 2) {
    cVar2 = FUN_005fcf90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
    if ((cVar2 == '\x01') || (*(char *)(param_1 + 0xac) != '\0')) goto LAB_018d7b67;
  }
  uVar3 = FUN_005fcf90(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
  FUN_01807c80(&local_90,local_res10,uVar3,0);
  local_4c = FUN_00414cd0(local_90);
  iVar4 = FUN_00414cc0(local_res10);
  local_85 = iVar4 < local_4c;
LAB_018d7b67:
  local_4c = FUN_00414cc0(local_res10);
  if ((local_4c < 2) || (*(char *)(param_1 + 0xa9) == '\0')) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
              (*(longlong **)(param_1 + 0xa0),local_res10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    iVar4 = FUN_018d4250(uVar5);
    uVar5 = FUN_018d4260(uVar5,iVar4 + -1);
    local_80 = FUN_018d3e60(uVar5,0);
    if (*(char *)(local_80 + 0x1c) == '\0') {
      FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),
                   *(undefined1 *)(local_80 + 0x14));
    }
  }
  else {
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    FUN_018dc3f0(param_1,local_4c);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    iVar4 = FUN_018d4250(uVar5);
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,iVar4 + -1);
    local_150 = param_5;
    local_148 = 1;
    local_140 = *(undefined1 *)(param_1 + 0xac);
    local_68 = FUN_018d6930(uVar5,param_1 + 0x20,local_res10,*(undefined8 *)(param_1 + 0x10));
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
    if (local_68 < local_res20) {
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                (*(longlong **)(param_1 + 0xa0),local_res10);
    }
    else {
      local_84 = 0;
      local_54 = 0;
      local_50 = 1;
      local_58 = 1;
      local_5c = 1;
      if (0 < local_4c) {
        do {
          if (*(short *)(local_res10 + -2 + (longlong)local_50 * 2) == 0x20) {
            if (*(char *)(*(longlong *)(param_1 + 0x30) + 8) != '\0') {
              iVar4 = FUN_018d4250(*(longlong *)(param_1 + 0x30));
              if (0 < iVar4) {
                uVar5 = *(undefined8 *)(param_1 + 0x30);
                iVar4 = FUN_018d4250(uVar5);
                uVar5 = FUN_018d4260(uVar5,iVar4 + -1);
                lVar6 = FUN_018d3e60(uVar5,local_50 - local_58);
                if (*(char *)(lVar6 + 0x1e) == '\0') {
                  local_5c = local_50;
                }
                goto LAB_018d7db5;
              }
            }
            local_5c = local_50;
          }
LAB_018d7db5:
          if (local_res20 <
              *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)(local_50 + local_84 + -1) * 4) -
              local_54) {
            if (local_5c == local_58) {
              if (local_50 == local_58) {
                FUN_00415e60(&local_d0,*(undefined2 *)(local_res10 + -2 + (longlong)local_58 * 2));
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                          (*(longlong **)(param_1 + 0xa0),local_d0);
                FUN_018d4110(*(undefined8 *)(param_1 + 0x30),1,0);
              }
              else if (*(char *)(param_1 + 0xa8) == '\0') {
                FUN_00414480(&local_28);
                FUN_004168b0(&local_c0,local_res10);
                FUN_00416dc0(&local_28,local_c0,(longlong)local_58,(longlong)(local_50 - local_58));
                FUN_004168e0(&local_c8,local_28);
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                          (*(longlong **)(param_1 + 0xa0),local_c8);
                FUN_00414480(&local_28);
                FUN_018d4110(*(undefined8 *)(param_1 + 0x30),local_50 - local_58,0);
                local_5c = local_50 + -1;
              }
              else {
                local_158 = (undefined1 *)CONCAT44(local_158._4_4_,local_50);
                local_150 = local_4c;
                FUN_018d75e0(auStack_178,&local_a8,local_res10,local_58);
                FUN_00414be0(&local_70,local_a8);
                iVar4 = FUN_00416420(local_70,0);
                local_71 = iVar4 != 0;
                if (!(bool)local_71) {
                  FUN_00414480(local_20);
                  FUN_004168b0(&local_b0,local_res10);
                  FUN_00416dc0(local_20,local_b0,(longlong)local_58,(longlong)(local_50 - local_58))
                  ;
                  FUN_004168e0(&local_70,local_20[0]);
                  FUN_00414480(local_20);
                }
                if (local_71 == '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                            (*(longlong **)(param_1 + 0xa0),local_70);
                }
                else {
                  FUN_00416020(&local_b8,local_70,&DAT_018d8750);
                  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                            (*(longlong **)(param_1 + 0xa0),local_b8);
                }
                local_60 = FUN_00414cc0(local_70);
                FUN_018d4110(*(undefined8 *)(param_1 + 0x30),local_60,local_71);
                local_5c = local_58 + local_60 + -1;
              }
            }
            else if (*(char *)(param_1 + 0xa8) == '\0') {
              FUN_00414480(&local_40);
              FUN_004168b0(&local_110,local_res10);
              FUN_00416dc0(&local_40,local_110,(longlong)local_58,(longlong)(local_5c - local_58));
              FUN_004168e0(&local_118,local_40);
              (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                        (*(longlong **)(param_1 + 0xa0),local_118);
              FUN_00414480(&local_40);
              FUN_018d4110(*(undefined8 *)(param_1 + 0x30),(local_5c - local_58) + 1,0);
            }
            else {
              local_158 = (undefined1 *)CONCAT44(local_158._4_4_,local_50);
              local_150 = local_4c;
              FUN_018d75e0(auStack_178,&local_d8,local_res10,local_5c + 1);
              FUN_00414be0(&local_70,local_d8);
              iVar4 = FUN_00416420(local_70,0);
              local_71 = iVar4 != 0;
              if ((bool)local_71) {
                FUN_00414480(&local_30);
                FUN_004168b0(&local_e0,local_res10);
                FUN_00416dc0(&local_30,local_e0,(longlong)local_58,
                             (longlong)((local_5c - local_58) + 1));
                FUN_004168b0(&local_f0,local_70);
                local_158 = &LAB_018d8760;
                FUN_00416cd0(&local_e8,3,local_30,local_f0);
                FUN_004168e0(&local_f8,local_e8);
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                          (*(longlong **)(param_1 + 0xa0),local_f8);
                FUN_00414480(&local_30);
              }
              else {
                FUN_00414480(&local_38);
                FUN_004168b0(&local_100,local_res10);
                FUN_00416dc0(&local_38,local_100,(longlong)local_58,(longlong)(local_5c - local_58))
                ;
                FUN_004168e0(&local_108,local_38);
                (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                          (*(longlong **)(param_1 + 0xa0),local_108);
                FUN_00414480(&local_38);
              }
              iVar4 = FUN_00414cc0(local_70);
              local_60 = (local_5c - local_58) + iVar4 + 1;
              FUN_018d4110(*(undefined8 *)(param_1 + 0x30),local_60,local_71);
              if (local_71 != '\0') {
                local_5c = local_58 + local_60 + -1;
              }
            }
            local_54 = *(int *)(*(longlong *)(param_1 + 0x20) +
                               (longlong)(local_5c + local_84 + -1) * 4);
            local_50 = local_5c;
            local_5c = local_5c + 1;
            local_res20 = local_res18;
            local_58 = local_5c;
          }
          if (((local_85 != '\0') && (local_50 + 1 <= local_4c)) &&
             (0x7f < *(byte *)(local_90 + -1 + (longlong)(local_50 + local_84)))) {
            local_84 = local_84 + 1;
          }
          local_50 = local_50 + 1;
        } while (local_50 <= local_4c);
      }
      local_12c = (local_4c - local_58) + 1;
      if (0 < local_12c) {
        FUN_00414480(&local_48);
        FUN_004168b0(&local_120,local_res10);
        FUN_00416dc0(&local_48,local_120,(longlong)local_58,(longlong)local_12c);
        FUN_004168e0(&local_128,local_48);
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x70))
                  (*(longlong **)(param_1 + 0xa0),local_128);
        FUN_00414480(&local_48);
      }
    }
  }
  FUN_00414520(&local_128);
  FUN_00414480(&local_120);
  FUN_00414520(&local_118);
  FUN_00414480(&local_110);
  FUN_00414520(&local_108);
  FUN_00414480(&local_100);
  FUN_00414520(&local_f8);
  FUN_00414560(&local_f0,3);
  FUN_004145c0(&local_d8,3);
  FUN_00414480(&local_c0);
  FUN_00414520(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00414520(&local_a8);
  FUN_004144d0(&local_90);
  FUN_00414520(&local_70);
  FUN_00414560(&local_48,6);
  FUN_00414520(&local_res10);
  return;
}

