/* Ghidra address: 018d8cc0 */
/* Ghidra symbol: FUN_018d8cc0 */


void FUN_018d8cc0(longlong param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                 uint param_6,int param_7,char param_8,undefined8 *param_9,undefined8 *param_10)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int local_res20;
  undefined1 auStack_118 [32];
  int local_f8;
  uint local_f0;
  uint local_e8;
  double local_e0;
  double local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 *local_b0;
  char local_a2;
  char local_a1;
  longlong local_a0;
  double local_98;
  byte local_89;
  double local_88;
  double local_80;
  longlong local_78;
  int local_6c;
  int local_68;
  int local_64;
  double local_60;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  longlong local_28;
  int local_1c;
  
  local_b0 = auStack_118;
  local_a0 = 0;
  local_a2 = '\0';
  local_54 = 0;
  local_a1 = '\x01';
  cVar2 = FUN_005fcf90(*(undefined8 *)(param_2 + 0x70));
  if (((cVar2 == '\x01') || (*(char *)(param_1 + 0xac) != '\0')) &&
     (iVar4 = FUN_0044f060(), iVar4 == 2)) {
    local_1c = FUN_00414cc0(param_3);
  }
  else {
    uVar3 = FUN_005fcf90(*(undefined8 *)(param_2 + 0x70));
    FUN_01807c80(&local_a0,param_3,uVar3,0);
    local_1c = FUN_00414cd0(local_a0);
    iVar4 = FUN_00414cc0(param_3);
    local_a2 = iVar4 < local_1c;
  }
  if (local_1c != 0) {
    local_28 = 0;
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    FUN_018dc3f0(param_1,local_1c);
    local_89 = FUN_005fce60(*(undefined8 *)(param_2 + 0x70));
    *(byte *)(*(longlong *)(param_1 + 0x30) + 0x1c) = local_89;
    FUN_005fce70(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x70),local_89);
    local_98 = (double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c);
    local_f0 = FUN_0040c770(*(double *)(param_1 + 0x38) * local_98);
    local_f8 = param_7;
    local_e8 = local_e8 & 0xffffff00;
    local_e0._0_1_ = *(undefined1 *)(param_1 + 0xac);
    iVar4 = FUN_018d6930(*(undefined8 *)(param_1 + 0x30),param_1 + 0x20,param_3,
                         *(undefined8 *)(param_1 + 0x10));
    local_68 = FUN_0040c770(*(double *)(param_1 + 0x38) * local_98);
    local_68 = iVar4 - local_68;
    local_f0 = FUN_0040c770(*(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x90));
    local_f8 = param_7;
    local_e8 = local_e8 & 0xffffff00;
    local_e0 = (double)CONCAT71(local_e0._1_7_,*(undefined1 *)(param_1 + 0xac));
    iVar4 = FUN_018d6930(*(undefined8 *)(param_1 + 0x30),param_1 + 0x20,param_3,param_2);
    local_64 = FUN_0040c770(*(double *)(param_1 + 0x38) * *(double *)(param_1 + 0x90));
    local_64 = iVar4 - local_64;
    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),local_89);
    if ((*(char *)(*(longlong *)(param_1 + 0x30) + 8) != '\0') && (*(int *)(param_1 + 0x78) != 0)) {
      uVar6 = FUN_005ffa40(param_2);
      thunk_FUN_041a19a1(uVar6,*param_10);
      thunk_FUN_0416f828(*param_9);
      uVar6 = FUN_018d3c70(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_1 + 0x78));
      *param_9 = uVar6;
      uVar6 = FUN_005ffa40(param_2);
      uVar6 = thunk_FUN_041a19a1(uVar6,*param_9);
      *param_10 = uVar6;
    }
    uVar6 = FUN_005ffa40(param_2);
    local_6c = thunk_FUN_03e5bd07(uVar6,0x58);
    if (local_6c == 0) {
      local_6c = 0x60;
    }
    local_60 = (double)*(int *)(param_1 + 0x18) / (double)local_6c;
    cVar2 = FUN_018dc390(param_1,param_2);
    if (cVar2 == '\0') {
      local_38 = FUN_0040c770(((double)local_68 / ((double)*(int *)(param_1 + 0x18) / 96.0)) *
                              *(double *)(param_1 + 0x90));
    }
    else {
      local_38 = FUN_0040c770(((double)local_68 * *(double *)(param_1 + 0x70)) / local_60);
    }
    if (*(char *)(param_1 + 0xaa) == '\0') {
      local_38 = local_64;
    }
    local_3c = local_38 - local_64;
    local_80 = (double)FUN_0040bcd0((double)*(int *)(param_1 + 0x78) * 0.017453292519943295);
    local_88 = (double)FUN_0040bdd0((double)*(int *)(param_1 + 0x78) * 0.017453292519943295);
    if (param_8 == '\x01') {
      iVar4 = FUN_0040c770((double)(int)((param_6 - local_38) + 1) * local_80);
      iVar5 = FUN_0040c770((double)(int)((param_6 - local_38) + 1) * local_88);
      param_5 = param_5 - iVar5;
      local_res20 = param_4 + iVar4 + -1;
      if ((((local_89 & 1) != 0) || ((local_89 & 2) != 0)) && (*(int *)(param_1 + 0x78) == 0)) {
        local_res20 = param_4 + iVar4 + -2;
      }
    }
    else {
      local_res20 = param_4;
      if (param_8 == '\x02') {
        local_res20 = FUN_0040c770(((double)(int)(param_6 - local_38) / 2.0) * local_80);
        local_res20 = param_4 + local_res20;
        iVar4 = FUN_0040c770(((double)(int)(param_6 - local_38) / 2.0) * local_88);
        param_5 = param_5 - iVar4;
      }
    }
    if (param_8 == '\x03') {
      local_28 = FUN_004095c0((longlong)(local_1c * 4));
      local_40 = FUN_018d8bd0(auStack_118);
      if (local_40 == 0) {
        param_8 = '\0';
      }
      else {
        local_3c = ((param_6 ^ (int)param_6 >> 0x1f) - ((int)param_6 >> 0x1f)) - local_64;
      }
    }
    else {
      local_40 = 0;
    }
    if (local_3c < 0) {
      local_3c = -local_3c;
      local_4c = -1;
    }
    else {
      local_4c = 1;
    }
    if (param_8 == '\x03') {
      local_44 = local_3c / local_40;
      local_48 = local_3c % local_40;
      local_50 = 0;
      local_2c = 0;
      iVar4 = local_1c;
      if (-1 < local_1c + -1) {
        do {
          lVar7 = (longlong)(int)local_2c;
          if ((*(int *)(local_28 + lVar7 * 4) == 1) &&
             (piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4),
             *piVar1 = *piVar1 + local_44 * local_4c, local_50 <= local_48)) {
            piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + lVar7 * 4);
            *piVar1 = *piVar1 + local_4c;
            local_50 = local_50 + 1;
          }
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    else if (local_3c < local_1c) {
      local_f8 = local_4c;
      FUN_018d3bb0(*(undefined8 *)(param_1 + 0x20),0,local_1c + -1,local_3c);
    }
    else {
      local_44 = (local_3c / local_1c) * local_4c;
      local_2c = 0;
      iVar4 = local_1c;
      if (-1 < local_1c + -1) {
        do {
          piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)local_2c * 4);
          *piVar1 = *piVar1 + local_44;
          local_2c = local_2c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_f8 = local_4c;
      FUN_018d3bb0(*(undefined8 *)(param_1 + 0x20),0,local_1c + -1,
                   local_3c - local_44 * local_1c * local_4c);
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x30) + 8) == '\0') ||
       (*(char *)(param_1 + 0x7c) == '\0')) {
      local_2c = 0;
      uVar6 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),param_7);
      local_78 = FUN_018d3e60(uVar6,0);
      local_44 = FUN_0040c770((double)(*(int *)(local_78 + 0x10) * *(int *)(local_78 + 0xc)) *
                              *(double *)(param_1 + 0x98));
      do {
        local_30 = local_2c;
        if ((int)local_2c < local_1c) {
          do {
            uVar6 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),param_7);
            local_78 = FUN_018d3e60(uVar6,local_2c - local_54);
            if (*(char *)(local_78 + 0x1c) == '\0') {
              *(undefined1 *)(local_78 + 0x1c) = 1;
              break;
            }
            if (((local_a2 == '\0') ||
                (*(byte *)(local_a0 + -1 + (longlong)(int)(local_2c + 1)) < 0x80)) ||
               (local_a1 == '\0')) {
              local_a1 = '\x01';
            }
            else {
              local_54 = local_54 + 1;
              local_a1 = '\0';
            }
            local_2c = local_2c + 1;
          } while ((int)local_2c < local_1c);
        }
        FUN_018d8cb0(auStack_118);
        local_f8 = local_44;
        local_f0 = local_2c;
        local_e8 = local_30;
        local_e0 = local_80;
        local_d8 = local_88;
        local_c8 = local_a0;
        local_d0 = param_3;
        FUN_018d8770(param_1,param_2,local_res20,param_5);
        if ((int)local_2c < local_1c) {
          cVar2 = FUN_018dc390(param_1,param_2);
          if (cVar2 == '\0') {
            iVar4 = FUN_0040c770(((double)*(int *)(local_78 + 0xc) * *(double *)(param_1 + 0x98) *
                                 96.0) / 72.0);
            FUN_005fcc80(*(undefined8 *)(param_2 + 0x70),-iVar4);
          }
          else {
            iVar4 = FUN_0040c770(((double)(*(int *)(local_78 + 0xc) * local_6c) *
                                 *(double *)(param_1 + 0x70)) / 72.0);
            FUN_005fcc80(*(undefined8 *)(param_2 + 0x70),-iVar4);
          }
          FUN_005fce70(*(undefined8 *)(param_2 + 0x70),*(undefined1 *)(local_78 + 0x14));
          if (*(char *)(param_1 + 0xab) == '\0') {
            FUN_005fc860(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(local_78 + 0x18));
          }
          else {
            FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0);
          }
          local_44 = FUN_0040c770((double)(*(int *)(local_78 + 0x10) * *(int *)(local_78 + 0xc)) *
                                  *(double *)(param_1 + 0x98));
          local_34 = FUN_018d8c60(auStack_118,local_30,local_2c - local_30);
          if (*(int *)(param_1 + 0x78) == 0) {
            local_res20 = local_res20 + local_34;
          }
          else {
            iVar4 = FUN_0040c770((double)local_34 * local_80);
            local_res20 = local_res20 + iVar4;
            iVar4 = FUN_0040c770((double)local_34 * local_88);
            param_5 = param_5 - iVar4;
            uVar6 = FUN_005ffa40(param_2);
            thunk_FUN_041a19a1(uVar6,*param_10);
            thunk_FUN_0416f828(*param_9);
            uVar6 = FUN_018d3c70(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_1 + 0x78));
            *param_9 = uVar6;
            uVar6 = FUN_005ffa40(param_2);
            uVar6 = thunk_FUN_041a19a1(uVar6,*param_9);
            *param_10 = uVar6;
          }
        }
      } while ((int)local_2c < local_1c);
    }
    else {
      local_2c = local_1c - 1;
      local_54 = FUN_00414cc0(param_3);
      local_54 = local_1c - local_54;
      uVar6 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),param_7);
      local_78 = FUN_018d3e60(uVar6,local_2c - local_54);
      do {
        local_30 = local_2c + 1;
        for (; 0 < (int)local_2c; local_2c = local_2c - 1) {
          uVar6 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),param_7);
          local_78 = FUN_018d3e60(uVar6,local_2c - local_54);
          if (*(char *)(local_78 + 0x1c) == '\0') {
            *(undefined1 *)(local_78 + 0x1c) = 1;
            break;
          }
          if (((local_a2 == '\0') ||
              (*(byte *)(local_a0 + -1 + (longlong)(int)(local_2c + 1)) < 0x80)) ||
             (local_a1 == '\0')) {
            local_a1 = '\x01';
          }
          else {
            local_54 = local_54 + -1;
            local_a1 = '\0';
          }
        }
        FUN_018d8cb0(auStack_118);
        cVar2 = FUN_018dc390(param_1,param_2);
        if (cVar2 == '\0') {
          iVar4 = FUN_0040c770(((double)*(int *)(local_78 + 0xc) * *(double *)(param_1 + 0x98) *
                               96.0) / 72.0);
          FUN_005fcc80(*(undefined8 *)(param_2 + 0x70),-iVar4);
        }
        else {
          iVar4 = FUN_0040c770(((double)(*(int *)(local_78 + 0xc) * local_6c) *
                               *(double *)(param_1 + 0x70)) / 72.0);
          FUN_005fcc80(*(undefined8 *)(param_2 + 0x70),-iVar4);
        }
        FUN_005fce70(*(undefined8 *)(param_2 + 0x70),*(undefined1 *)(local_78 + 0x14));
        if (*(char *)(param_1 + 0xab) == '\0') {
          FUN_005fc860(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(local_78 + 0x18));
        }
        else {
          FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0);
        }
        local_f8 = FUN_0040c770((double)(*(int *)(local_78 + 0x10) * *(int *)(local_78 + 0xc)) *
                                *(double *)(param_1 + 0x98));
        local_f0 = local_30;
        local_e8 = local_2c;
        local_e0 = local_80;
        local_d8 = local_88;
        local_c8 = local_a0;
        local_d0 = param_3;
        local_44 = local_f8;
        FUN_018d8770(param_1,param_2,local_res20,param_5);
        if (0 < (int)local_2c) {
          local_34 = FUN_018d8c60(auStack_118,local_2c,local_30 - local_2c);
          if (*(int *)(param_1 + 0x78) == 0) {
            local_res20 = local_res20 + local_34;
          }
          else {
            iVar4 = FUN_0040c770((double)local_34 * local_80);
            local_res20 = local_res20 + iVar4;
            iVar4 = FUN_0040c770((double)local_34 * local_88);
            param_5 = param_5 - iVar4;
            uVar6 = FUN_005ffa40(param_2);
            thunk_FUN_041a19a1(uVar6,*param_10);
            thunk_FUN_0416f828(*param_9);
            uVar6 = FUN_018d3c70(*(undefined8 *)(param_2 + 0x70),*(undefined4 *)(param_1 + 0x78));
            *param_9 = uVar6;
            uVar6 = FUN_005ffa40(param_2);
            uVar6 = thunk_FUN_041a19a1(uVar6,*param_9);
            *param_10 = uVar6;
          }
        }
        local_2c = local_2c - 1;
      } while (0 < (int)local_2c);
    }
    if (local_28 != 0) {
      FUN_004095f0(local_28,(longlong)(local_1c * 4));
    }
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_004144d0(&local_a0);
  return;
}

