/* Ghidra address: 018da4d0 */
/* Ghidra symbol: FUN_018da4d0 */


void FUN_018da4d0(longlong param_1,longlong *param_2,byte param_3,char param_4,char param_5,
                 int param_6)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  undefined1 auStack_158 [32];
  int local_138;
  int local_130;
  int local_128;
  byte local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  byte local_81;
  double local_80;
  double local_78;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  
  local_e0 = auStack_158;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_5c = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  FUN_00419260(param_1 + 0xc0,&DAT_018d23f8,1,(longlong)local_5c);
  if (((local_5c != 0) && (iVar3 = FUN_018d4250(*(undefined8 *)(param_1 + 0x30)), iVar3 != 0)) ||
     (param_5 != '\0')) {
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    uVar5 = FUN_005ffa40(param_2);
    local_c0 = thunk_FUN_03e5bd07(uVar5,0x5a);
    cVar2 = FUN_018dc390(param_1,param_2);
    if (cVar2 == '\0') {
      local_bc = FUN_0040c770(((double)*(int *)(param_1 + 0x2c) * *(double *)(param_1 + 0x98) * 96.0
                              ) / 72.0);
    }
    else {
      local_bc = FUN_0040c770(((double)(*(int *)(param_1 + 0x2c) * local_c0) *
                              *(double *)(param_1 + 0x70)) / 72.0);
    }
    local_bc = -local_bc;
    FUN_005ff880(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70));
    FUN_005fcc80(param_2[0xe],local_bc);
    iVar3 = FUN_018d4250(*(undefined8 *)(param_1 + 0x30));
    if (0 < iVar3) {
      uVar5 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),0);
      iVar3 = FUN_018d3e80(uVar5);
      if (0 < iVar3) {
        uVar5 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),0);
        local_a8 = FUN_018d3e60(uVar5,0);
        if (*(char *)(local_a8 + 0x1c) == '\0') {
          FUN_005fce70(param_2[0xe],*(undefined1 *)(local_a8 + 0x14));
          if (*(char *)(param_1 + 0xab) == '\0') {
            FUN_005fc860(param_2[0xe],*(undefined4 *)(local_a8 + 0x18));
          }
          else {
            FUN_005fc860(param_2[0xe],0);
          }
          cVar2 = FUN_018dc390(param_1,param_2);
          if (cVar2 == '\0') {
            iVar3 = FUN_0040c770(((double)*(int *)(local_a8 + 0xc) * *(double *)(param_1 + 0x98) *
                                 96.0) / 72.0);
            FUN_005fcc80(param_2[0xe],-iVar3);
          }
          else {
            iVar3 = FUN_0040c770(((double)(*(int *)(local_a8 + 0xc) * local_c0) *
                                 *(double *)(param_1 + 0x70)) / 72.0);
            FUN_005fcc80(param_2[0xe],-iVar3);
          }
        }
        *(undefined1 *)(local_a8 + 0x1c) = 1;
      }
    }
    local_b0 = 0;
    local_b8 = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      local_b0 = FUN_018d3c70(param_2[0xe],*(undefined4 *)(param_1 + 0x78));
      uVar5 = FUN_005ffa40(param_2);
      local_b8 = thunk_FUN_041a19a1(uVar5,local_b0);
    }
    local_94 = FUN_018dc200(param_1,param_2);
    local_98 = FUN_018dc200(param_1,*(undefined8 *)(param_1 + 0x10));
    cVar2 = FUN_018dc390(param_1,param_2);
    if (cVar2 == '\0') {
      local_78 = (double)*(int *)(param_1 + 0x18) / 96.0;
      local_3c = FUN_0040c770((((double)(local_98 * local_5c) +
                               *(double *)(param_1 + 0x40) * local_78 * (double)local_5c) / local_78
                              ) * *(double *)(param_1 + 0x98));
    }
    else {
      local_78 = ((double)*(int *)(param_1 + 0x18) / (double)local_c0) / *(double *)(param_1 + 0x70)
      ;
      local_3c = FUN_0040c770(((double)(local_98 * local_5c) +
                              *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x98) * local_78 *
                              (double)local_5c) / local_78);
    }
    iVar3 = FUN_0040c770(*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x98));
    local_60 = local_3c - (local_94 * local_5c + iVar3 * local_5c);
    if (*(char *)(param_1 + 0xaa) == '\0') {
      local_60 = 0;
    }
    FUN_018d9f10(auStack_158);
    local_50 = FUN_004095c0((longlong)(local_5c * 4));
    local_54 = 0;
    if (-1 < local_5c + -2) {
      iVar3 = local_5c + -1;
      do {
        iVar4 = FUN_0040c770(*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x98));
        *(int *)(local_50 + (longlong)local_54 * 4) = iVar4 + local_94;
        local_54 = local_54 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (0 < local_5c) {
      *(undefined4 *)(local_50 + (longlong)(local_5c + -1) * 4) = 0;
    }
    if (local_60 < 0) {
      local_60 = -local_60;
      local_68 = -1;
    }
    else {
      local_68 = 1;
    }
    if (1 < local_5c) {
      if (local_60 < local_5c) {
        local_138 = local_68;
        FUN_018d3bb0(local_50,0,local_5c + -2,local_60);
      }
      else if (1 < local_5c) {
        local_64 = (local_60 / (local_5c + -1)) * local_68;
        local_54 = 0;
        if (-1 < local_5c + -2) {
          iVar3 = local_5c + -1;
          do {
            piVar1 = (int *)(local_50 + (longlong)local_54 * 4);
            *piVar1 = *piVar1 + local_64;
            local_54 = local_54 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_138 = local_68;
        FUN_018d3bb0(local_50,0,local_5c + -2,local_60 - local_64 * (local_5c + -1) * local_68);
      }
    }
    FUN_0180c8a0(param_2,1);
    cVar2 = FUN_018dc390(param_1,param_2);
    if (cVar2 == '\0') {
      local_80 = *(double *)(param_1 + 0x98);
      local_a0 = FUN_0040c770((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x98)) * local_80
                             );
    }
    else {
      local_80 = ((double)local_c0 * *(double *)(param_1 + 0x70)) / 96.0;
      local_a0 = FUN_0040c770(*(double *)(param_1 + 0x40) * local_80);
    }
    local_9c = FUN_0040c770(*(double *)(param_1 + 0x40) * local_80);
    local_9c = local_94 + local_9c;
    if ((local_5c < 1) && (param_5 == '\x01')) {
      iVar3 = FUN_0040c840((double)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84)) /
                           (double)local_9c);
      iVar3 = iVar3 + 1;
      local_58 = 1;
      if (0 < iVar3) {
        do {
          local_6c = local_58 * local_9c - local_a0;
          iVar4 = *(int *)(param_1 + 0x84) + local_6c;
          if (iVar4 < *(int *)(param_1 + 0x8c)) {
            (**(code **)(*param_2 + 200))(param_2,local_40,iVar4);
            (**(code **)(*param_2 + 0xc0))
                      (param_2,local_40 + local_48,*(int *)(param_1 + 0x84) + local_6c);
          }
          local_58 = local_58 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    local_54 = 0;
    iVar3 = local_5c;
    if (-1 < local_5c + -1) {
      do {
        local_c4 = 0;
        local_81 = param_3;
        local_88 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))
                             (*(longlong **)(param_1 + 0xa0),local_54);
        if ((local_88 & 1) != 0) {
          if (param_3 < 8) {
            bVar7 = ((int)CONCAT71((uint7)(uint3)(local_88 >> 8),1) << (param_3 & 0x1f) & 9U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            local_c4 = FUN_0040c770(*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x90));
          }
        }
        if (((local_88 & 2) != 0) && (param_3 == 3)) {
          if (*(char *)(param_1 + 0x7c) == '\0') {
            local_81 = 0;
          }
          else {
            local_81 = 1;
          }
        }
        dVar8 = (double)FUN_0040bcd0((double)*(int *)(param_1 + 0x78) * 0.017453292519943295);
        local_8c = FUN_0040c770((double)local_c4 * dVar8);
        local_8c = local_40 + local_8c;
        dVar8 = (double)FUN_0040bdd0((double)*(int *)(param_1 + 0x78) * 0.017453292519943295);
        local_90 = FUN_0040c770((double)local_c4 * dVar8);
        local_90 = local_44 - local_90;
        *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)local_54 * 4) = local_90;
        if (local_54 == param_6) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_e8,local_54);
          local_138 = local_90;
          local_130 = local_48 - local_c4;
          local_128 = local_54;
          local_120 = local_81;
          local_118 = &local_b0;
          local_110 = &local_b8;
          FUN_018d9d70(param_1,param_2,local_e8,local_8c);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                    (*(longlong **)(param_1 + 0xa0),&local_f0,local_54);
          local_138 = local_90;
          local_130 = local_48 - local_c4;
          local_128 = local_54;
          local_120 = local_81;
          local_118 = &local_b0;
          local_110 = &local_b8;
          FUN_018d8cc0(param_1,param_2,local_f0,local_8c);
        }
        if (param_5 != '\0') {
          if (((param_5 == '\x01') && (local_54 == 0)) && (param_4 != '\0')) {
            iVar4 = FUN_0040c840((double)(local_44 - *(int *)(param_1 + 0x84)) / (double)local_9c);
            local_58 = 0;
            if (-1 < iVar4) {
              iVar4 = iVar4 + 1;
              do {
                local_6c = local_58 * local_9c + local_a0;
                if (*(int *)(param_1 + 0x84) < local_44 - local_6c) {
                  (**(code **)(*param_2 + 200))(param_2,local_40,local_44 - local_6c);
                  (**(code **)(*param_2 + 0xc0))(param_2,local_40 + local_48,local_44 - local_6c);
                }
                local_58 = local_58 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
          if (param_5 == '\x02') {
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
                      (*(longlong **)(param_1 + 0xa0),&local_100,local_54);
            FUN_004168b0(&local_108,local_100);
            FUN_0043ea00(&local_f8,local_108);
            if (local_f8 != 0) goto LAB_018db1d9;
          }
          else {
LAB_018db1d9:
            local_6c = local_9c - local_a0;
            iVar4 = local_44 + local_6c;
            if ((iVar4 <= *(int *)(param_1 + 0x8c)) && (*(int *)(param_1 + 0x84) < iVar4)) {
              (**(code **)(*param_2 + 200))(param_2,local_40,iVar4);
              (**(code **)(*param_2 + 0xc0))(param_2,local_40 + local_48,local_44 + local_6c);
            }
          }
          if (((param_5 == '\x01') && (local_54 == local_5c + -1)) && (param_4 != '\x01')) {
            iVar4 = FUN_0040c840((double)(*(int *)(param_1 + 0x8c) - local_44) / (double)local_9c);
            local_58 = 2;
            if (1 < iVar4) {
              iVar4 = iVar4 + -1;
              do {
                local_6c = local_58 * local_9c - local_a0;
                if (local_44 + local_6c <= *(int *)(param_1 + 0x8c)) {
                  (**(code **)(*param_2 + 200))(param_2,local_40,local_44 + local_6c);
                  (**(code **)(*param_2 + 0xc0))(param_2,local_40 + local_48,local_44 + local_6c);
                }
                local_58 = local_58 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
        }
        lVar6 = (longlong)local_54;
        iVar4 = FUN_0040c770((double)*(int *)(local_50 + lVar6 * 4) * local_30);
        local_44 = local_44 + iVar4;
        iVar4 = FUN_0040c770((double)*(int *)(local_50 + lVar6 * 4) * local_38);
        local_40 = local_40 + iVar4;
        local_54 = local_54 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_004095f0(local_50,(longlong)(local_5c * 4));
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar5 = FUN_005ffa40(param_2);
      thunk_FUN_041a19a1(uVar5,local_b8);
      thunk_FUN_0416f828(local_b0);
    }
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00414480(&local_108);
  FUN_00414520(&local_100);
  FUN_00414480(&local_f8);
  FUN_004145c0(&local_f0,2);
  return;
}

