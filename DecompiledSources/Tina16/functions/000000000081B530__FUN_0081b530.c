/* Ghidra address: 0081b530 */
/* Ghidra symbol: FUN_0081b530 */


void FUN_0081b530(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auStack_168 [32];
  int *local_148;
  uint local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_110 [16];
  longlong local_100;
  longlong lStack_f8;
  undefined1 *local_f0;
  undefined1 local_e0 [4];
  undefined4 local_dc;
  undefined4 local_d8;
  int local_d4;
  undefined8 local_d0;
  uint local_c5;
  undefined1 local_c1;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [16];
  int local_a0;
  int local_9c;
  longlong lStack_98;
  undefined1 local_8d;
  undefined1 local_8c [12];
  undefined8 local_80;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined4 uStack_6c;
  longlong *local_68;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong *local_50;
  int local_48;
  int local_44;
  undefined4 uStack_40;
  int local_3c;
  int local_38;
  int local_34;
  longlong lStack_30;
  
  local_f0 = auStack_168;
  local_d0 = 0;
  if (*(char *)(param_1[2] + 0x4d1) == '\0') {
    local_f0 = auStack_168;
    if (param_1[0x14] != 0) {
      local_f0 = auStack_168;
      FUN_00816290(param_1[0x14],param_2);
    }
    FUN_0081b0d0(auStack_168);
  }
  else {
    if ((int)param_1[0x28] < 1) {
      local_d8 = 0;
      local_f0 = auStack_168;
    }
    else {
      uVar7 = FUN_0065b870(param_1[2]);
      cVar2 = FUN_00647eb0(uVar7);
      if (cVar2 == '\0') {
        local_d8 = *(undefined4 *)(DAT_02012670 + 0x98);
      }
      else {
        local_d8 = (**(code **)(*(longlong *)param_1[2] + 0x98))((longlong *)param_1[2]);
      }
    }
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_004238d0(&local_100,0,0,0);
    param_1[0xc] = local_100;
    param_1[0xd] = lStack_f8;
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_004238d0(&local_100,0,0,0);
    param_1[0x15] = local_100;
    param_1[0x16] = lStack_f8;
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_004238d0(&local_100,0,0,0);
    param_1[0x1d] = local_100;
    param_1[0x1e] = lStack_f8;
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_004238d0(&local_100,0,0,0);
    *(longlong *)((longlong)param_1 + 0x7c) = local_100;
    *(longlong *)((longlong)param_1 + 0x84) = lStack_f8;
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_004238d0(&local_100,0,0,0);
    *(longlong *)((longlong)param_1 + 0x11c) = local_100;
    *(longlong *)((longlong)param_1 + 0x124) = lStack_f8;
    local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
    FUN_004238d0(&local_100,0,0,0);
    param_1[8] = local_100;
    param_1[9] = lStack_f8;
    plVar8 = (longlong *)FUN_00781840();
    cVar2 = (**(code **)(*plVar8 + 0x90))(plVar8);
    if (cVar2 != '\0') {
      FUN_00819760(param_1,&local_60);
      if ((*(char *)(param_1[2] + 0x4d1) == '\x04') || (*(char *)(param_1[2] + 0x4d1) == '\x05')) {
        if ((char)param_1[0xe] == '\0') {
          local_8d = 6;
        }
        else {
          local_8d = 5;
        }
      }
      else if ((char)param_1[0xe] == '\0') {
        local_8d = 3;
      }
      else {
        local_8d = 2;
      }
      local_50 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_50 + 0xe0))(local_50,(int)param_1[0x26],local_5c);
      uVar3 = (**(code **)(*local_50 + 0x60))(local_50);
      uVar4 = (**(code **)(*local_50 + 0x48))(local_50);
      local_148 = (int *)CONCAT44(local_148._4_4_,uVar4);
      FUN_004238d0(&local_48,0,0,uVar3);
      plVar8 = (longlong *)FUN_00781840();
      (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_8d);
      if ((int)param_1[0x28] < 1) {
        uVar7 = FUN_00781840();
        uVar9 = FUN_00609e10(local_50);
        uVar9 = FUN_005ffa40(uVar9);
        local_148 = (int *)0x0;
        local_140 = 0;
        FUN_00778dc0(uVar7,uVar9,&local_74,&local_48);
      }
      else {
        uVar7 = FUN_00781840();
        local_148 = (int *)local_e0;
        local_140 = 0;
        FUN_00779290(uVar7,0,&local_74,1);
        local_68 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        uVar3 = (**(code **)(*local_50 + 0x60))(local_50);
        (**(code **)(*local_68 + 0x88))(local_68,uVar3);
        (**(code **)(*local_68 + 0x70))(local_68,local_dc);
        uVar3 = (**(code **)(*local_68 + 0x60))(local_68);
        uVar4 = (**(code **)(*local_68 + 0x48))(local_68);
        local_148 = (int *)CONCAT44(local_148._4_4_,uVar4);
        FUN_004238d0(local_b0,0,0,uVar3);
        uVar7 = FUN_00781840();
        uVar9 = FUN_00609e10(local_68);
        uVar9 = FUN_005ffa40(uVar9);
        local_148 = (int *)0x0;
        local_140 = 0;
        FUN_00778dc0(uVar7,uVar9,&local_74,local_b0);
        uVar7 = FUN_00609e10(local_50);
        FUN_0081aa40(auStack_168,local_68,uVar7,&local_48);
        FUN_00410f20(local_68);
      }
      local_c0._4_4_ = local_44;
      local_b8 = CONCAT44(local_3c,uStack_40);
      local_80 = local_74;
      uStack_78 = uStack_6c;
      local_d4 = 3;
      lVar1 = param_1[2];
      if (((((*(byte *)(lVar1 + 0x4d0) & 1) == 0) || (*(char *)(lVar1 + 0x4d1) == '\x03')) ||
          (*(char *)(lVar1 + 0x4d1) == '\x04')) || (*(char *)(lVar1 + 0x4d1) == '\x05')) {
        local_c0 = CONCAT44(local_44,local_48 + local_60);
      }
      else {
        plVar8 = (longlong *)FUN_00781840();
        (**(code **)(*plVar8 + 0x228))(plVar8,local_8c,0x20);
        uVar7 = FUN_00781840();
        local_148 = &local_38;
        cVar2 = FUN_007790e0(uVar7,0,local_8c,&local_48);
        if (cVar2 == '\0') {
          local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
          FUN_004238d0(&local_38,0,0,0);
        }
        local_a0 = local_38;
        local_9c = local_34;
        lStack_98 = lStack_30;
        uVar7 = FUN_00781840();
        cVar2 = FUN_007794f0(uVar7,&local_74);
        if (cVar2 == '\0') {
          FUN_0081aea0(auStack_168,&local_38);
          uVar10 = local_9c - local_34 >> 0x1f;
          local_d4 = (local_9c - local_34 ^ uVar10) - uVar10;
          if (local_5c < local_d4) {
            local_d4 = 3;
          }
        }
        else {
          local_d4 = 0;
        }
        uVar3 = (**(code **)(*param_1 + 0x48))(param_1,0x31);
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1,0x32);
        local_148._0_4_ = uVar4;
        FUN_004238d0(&local_a0,0,0,uVar3);
        FUN_008139c0(&local_100,&local_a0,&local_38);
        iVar5 = FUN_004230a0(&local_38);
        if (0 < iVar5) {
          uVar7 = FUN_00609e10(local_50);
          uVar7 = FUN_005ffa40(uVar7);
          uVar9 = FUN_0081a890(param_1);
          uVar9 = FUN_0060ce20(uVar9);
          local_148._0_4_ = 0;
          local_140 = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 3;
          thunk_FUN_041a8a5c(uVar7,local_a0,local_9c,uVar9);
        }
        iVar5 = FUN_004230a0(&local_a0);
        local_c0 = CONCAT44(local_c0._4_4_,local_38 + iVar5 + 5);
        iVar5 = FUN_004230a0(&local_a0);
        iVar6 = FUN_004230c0(&local_a0);
        local_148 = (int *)CONCAT44(local_148._4_4_,local_34 + iVar6);
        FUN_004238d0(&local_100,local_38,local_34,local_38 + iVar5);
        *(longlong *)((longlong)param_1 + 0x11c) = local_100;
        *(longlong *)((longlong)param_1 + 0x124) = lStack_f8;
      }
      if ((*(byte *)(param_1[2] + 0x4d0) & 1) != 0) {
        if ((*(char *)(param_1[2] + 0x4d1) == '\x04') || (*(char *)(param_1[2] + 0x4d1) == '\x05'))
        {
          if (((int)param_1[0x21] == 0x14) && (*(int *)((longlong)param_1 + 0x74) == 0x14)) {
            local_c1 = 0x3a;
          }
          else if (*(int *)((longlong)param_1 + 0x74) == 0x14) {
            local_c1 = 0x39;
          }
          else if ((char)param_1[0xe] == '\0') {
            local_c1 = 0x3b;
          }
          else {
            local_c1 = 0x38;
          }
        }
        else if (((int)param_1[0x21] == 0x14) && (*(int *)((longlong)param_1 + 0x74) == 0x14)) {
          local_c1 = 0x36;
        }
        else if (*(int *)((longlong)param_1 + 0x74) == 0x14) {
          local_c1 = 0x35;
        }
        else if ((char)param_1[0xe] == '\0') {
          local_c1 = 0x37;
        }
        else {
          local_c1 = 0x34;
        }
        plVar8 = (longlong *)FUN_00781840();
        (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_c1);
        uVar7 = FUN_00781840();
        local_148 = &local_38;
        cVar2 = FUN_007790e0(uVar7,0,&local_74,&local_48);
        if (cVar2 == '\0') {
          local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
          FUN_004238d0(&local_38,0,0,0);
        }
        uVar7 = FUN_00781840();
        cVar2 = FUN_007794f0(uVar7,&local_74);
        if (cVar2 == '\0') {
          FUN_0081acc0(auStack_168,&local_38);
        }
        iVar5 = FUN_004230a0(&local_38);
        if (0 < iVar5) {
          uVar7 = FUN_00781840();
          uVar9 = FUN_00609e10(local_50);
          uVar9 = FUN_005ffa40(uVar9);
          local_148 = (int *)0x0;
          local_140 = 0;
          FUN_00778dc0(uVar7,uVar9,&local_74,&local_38);
        }
        if (0 < local_38) {
          local_b8 = CONCAT44(local_b8._4_4_,local_38);
        }
        param_1[0xc] = CONCAT44(local_34,local_38);
        param_1[0xd] = lStack_30;
      }
      lVar1 = param_1[2];
      if (((((*(byte *)(lVar1 + 0x4d0) & 4) != 0) && ((*(byte *)(param_1[2] + 0x4d0) & 1) != 0)) &&
          (*(char *)(lVar1 + 0x4d1) != '\x03')) &&
         ((*(char *)(lVar1 + 0x4d1) != '\x04' && (*(char *)(lVar1 + 0x4d1) != '\x05')))) {
        if (*(char *)(lVar1 + 0x4d2) == '\x02') {
          if (((int)param_1[0x21] == 9) && (*(int *)((longlong)param_1 + 0x74) == 9)) {
            local_c1 = 0x42;
          }
          else if (*(int *)((longlong)param_1 + 0x74) == 9) {
            local_c1 = 0x41;
          }
          else if ((char)param_1[0xe] == '\0') {
            local_c1 = 0x43;
          }
          else {
            local_c1 = 0x40;
          }
        }
        else if (((int)param_1[0x21] == 9) && (*(int *)((longlong)param_1 + 0x74) == 9)) {
          local_c1 = 0x32;
        }
        else if (*(int *)((longlong)param_1 + 0x74) == 9) {
          local_c1 = 0x31;
        }
        else if ((char)param_1[0xe] == '\0') {
          local_c1 = 0x33;
        }
        else {
          local_c1 = 0x30;
        }
        plVar8 = (longlong *)FUN_00781840();
        (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_c1);
        uVar7 = FUN_00781840();
        local_148 = &local_38;
        cVar2 = FUN_007790e0(uVar7,0,&local_74,&local_48);
        if (cVar2 == '\0') {
          local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
          FUN_004238d0(&local_38,0,0,0);
        }
        uVar7 = FUN_00781840();
        cVar2 = FUN_007794f0(uVar7,&local_74);
        if (cVar2 == '\0') {
          FUN_0081acc0(auStack_168,&local_38);
        }
        iVar5 = FUN_004230a0(&local_38);
        if (0 < iVar5) {
          uVar7 = FUN_00781840();
          uVar9 = FUN_00609e10(local_50);
          uVar9 = FUN_005ffa40(uVar9);
          local_148 = (int *)0x0;
          local_140 = 0;
          FUN_00778dc0(uVar7,uVar9,&local_74,&local_38);
        }
        if (0 < local_38) {
          local_b8 = CONCAT44(local_b8._4_4_,local_38);
        }
        param_1[0x15] = CONCAT44(local_34,local_38);
        param_1[0x16] = lStack_30;
      }
      lVar1 = param_1[2];
      if (((((*(byte *)(lVar1 + 0x4d0) & 2) != 0) && ((*(byte *)(param_1[2] + 0x4d0) & 1) != 0)) &&
          (*(char *)(lVar1 + 0x4d1) != '\x03')) &&
         ((*(char *)(lVar1 + 0x4d1) != '\x04' && (*(char *)(lVar1 + 0x4d1) != '\x05')))) {
        if (*(char *)(lVar1 + 0x4d2) == '\x01') {
          if (((int)param_1[0x21] == 8) && (*(int *)((longlong)param_1 + 0x74) == 8)) {
            local_c1 = 0x42;
          }
          else if (*(int *)((longlong)param_1 + 0x74) == 8) {
            local_c1 = 0x41;
          }
          else if ((char)param_1[0xe] == '\0') {
            local_c1 = 0x43;
          }
          else {
            local_c1 = 0x40;
          }
        }
        else if (((int)param_1[0x21] == 8) && (*(int *)((longlong)param_1 + 0x74) == 8)) {
          local_c1 = 0x2a;
        }
        else if (*(int *)((longlong)param_1 + 0x74) == 8) {
          local_c1 = 0x29;
        }
        else if ((char)param_1[0xe] == '\0') {
          local_c1 = 0x2b;
        }
        else {
          local_c1 = 0x28;
        }
        plVar8 = (longlong *)FUN_00781840();
        (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_c1);
        uVar7 = FUN_00781840();
        plVar8 = (longlong *)FUN_00781840();
        (**(code **)(*plVar8 + 0x228))(plVar8,local_110,0x28);
        local_148 = &local_38;
        cVar2 = FUN_007790e0(uVar7,0,local_110,&local_48);
        if (cVar2 == '\0') {
          local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
          FUN_004238d0(&local_38,0,0,0);
        }
        uVar7 = FUN_00781840();
        cVar2 = FUN_007794f0(uVar7,&local_74);
        if (cVar2 == '\0') {
          FUN_0081acc0(auStack_168,&local_38);
        }
        iVar5 = FUN_004230a0(&local_38);
        if (0 < iVar5) {
          uVar7 = FUN_00781840();
          uVar9 = FUN_00609e10(local_50);
          uVar9 = FUN_005ffa40(uVar9);
          local_148 = (int *)0x0;
          local_140 = 0;
          FUN_00778dc0(uVar7,uVar9,&local_74,&local_38);
        }
        if (0 < local_38) {
          local_b8 = CONCAT44(local_b8._4_4_,local_38);
        }
        param_1[0x1d] = CONCAT44(local_34,local_38);
        param_1[0x1e] = lStack_30;
      }
      if (((*(byte *)(param_1[2] + 0x4d0) & 8) != 0) && ((*(byte *)(param_1[2] + 0x4d0) & 1) != 0))
      {
        if ((((*(byte *)(param_1[2] + 0x4d0) & 4) == 0) &&
            ((*(byte *)(param_1[2] + 0x4d0) & 2) == 0)) || (*(char *)(param_1[2] + 0x4d1) == '\x03')
           ) {
          if (((int)param_1[0x21] == 0x15) && (*(int *)((longlong)param_1 + 0x74) == 0x15)) {
            local_c1 = 0x4a;
          }
          else if (*(int *)((longlong)param_1 + 0x74) == 0x15) {
            local_c1 = 0x49;
          }
          else if ((char)param_1[0xe] == '\0') {
            local_c1 = 0x4b;
          }
          else {
            local_c1 = 0x48;
          }
          plVar8 = (longlong *)FUN_00781840();
          (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_c1);
          uVar7 = FUN_00781840();
          local_148 = &local_38;
          cVar2 = FUN_007790e0(uVar7,0,&local_74,&local_48);
          if (cVar2 == '\0') {
            local_148 = (int *)((ulonglong)local_148 & 0xffffffff00000000);
            FUN_004238d0(&local_38,0,0,0);
          }
          uVar7 = FUN_00781840();
          cVar2 = FUN_007794f0(uVar7,&local_74);
          if (cVar2 == '\0') {
            FUN_0081acc0(auStack_168,&local_38);
          }
          iVar5 = FUN_004230a0(&local_38);
          if (0 < iVar5) {
            uVar7 = FUN_00781840();
            uVar9 = FUN_00609e10(local_50);
            uVar9 = FUN_005ffa40(uVar9);
            local_148 = (int *)0x0;
            local_140 = 0;
            FUN_00778dc0(uVar7,uVar9,&local_74,&local_38);
          }
          if (0 < local_38) {
            local_b8 = CONCAT44(local_b8._4_4_,local_38);
          }
          *(ulonglong *)((longlong)param_1 + 0x7c) = CONCAT44(local_34,local_38);
          *(longlong *)((longlong)param_1 + 0x84) = lStack_30;
        }
      }
      local_c5 = 0x14100;
      cVar2 = FUN_0064e930(param_1[2]);
      if (cVar2 != '\0') {
        local_c5 = local_c5 | 0x2000;
      }
      FUN_00785f90(param_1,&local_d0);
      lVar1 = param_1[2];
      if ((((*(char *)(lVar1 + 0x4d2) == '\x02') && (*(char *)(lVar1 + 0x4d6) != '\x01')) &&
          (local_d4 != 0)) && ((*(byte *)(lVar1 + 0x4d0) & 1) != 0)) {
        uVar7 = FUN_00609e10(local_50);
        uVar7 = FUN_005ffa40(uVar7);
        FUN_0064ae10(uVar7,0,local_d4);
        uVar7 = FUN_00781840();
        uVar9 = FUN_00609e10(local_50);
        uVar9 = FUN_005ffa40(uVar9);
        local_148 = (int *)&local_c0;
        local_140 = local_c5;
        local_138 = 0x1fffffff;
        local_130 = CONCAT44(local_130._4_4_,local_d8);
        FUN_00778f70(uVar7,uVar9,&local_80,local_d0);
        uVar7 = FUN_00609e10(local_50);
        uVar7 = FUN_005ffa40(uVar7);
        FUN_0064ae10(uVar7,0,-local_d4);
      }
      else {
        if ((*(byte *)(lVar1 + 0x4d0) & 1) == 0) {
          local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + local_60);
        }
        if (0 < (int)param_1[0x28]) {
          if (*(char *)(lVar1 + 0x4d2) == '\x02') {
            local_d4 = FUN_0081abd0(auStack_168);
          }
          else {
            local_d4 = (int)param_1[0x28] / 2;
          }
          uVar7 = FUN_00609e10(local_50);
          uVar7 = FUN_005ffa40(uVar7);
          FUN_0064ae10(uVar7,0,local_d4);
        }
        uVar7 = FUN_00781840();
        uVar9 = FUN_00609e10(local_50);
        uVar9 = FUN_005ffa40(uVar9);
        local_148 = (int *)&local_c0;
        local_140 = local_c5;
        local_138 = 0x1fffffff;
        local_130 = CONCAT44(local_130._4_4_,local_d8);
        FUN_00778f70(uVar7,uVar9,&local_80,local_d0);
        if (0 < (int)param_1[0x28]) {
          uVar7 = FUN_00609e10(local_50);
          uVar7 = FUN_005ffa40(uVar7);
          FUN_0064ae10(uVar7,0,-local_d4);
        }
      }
      param_1[8] = local_c0;
      param_1[9] = local_b8;
      (**(code **)(*param_2 + 0x88))(param_2,0,0,local_50);
      FUN_00410f20(local_50);
      lVar1 = param_1[0x14];
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x14) < (int)param_1[0x26] - local_58)) {
        local_148 = (int *)CONCAT44(local_148._4_4_,*(undefined4 *)(lVar1 + 0x18));
        FUN_004238d0(&local_100,*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                     (int)param_1[0x26] - local_58);
        FUN_008177b0(lVar1,&local_100);
      }
      if (param_1[0x14] != 0) {
        FUN_00816290(param_1[0x14],param_2);
      }
      if ((*(char *)(param_1[2] + 0x4d1) == '\x04') || (*(char *)(param_1[2] + 0x4d1) == '\x05')) {
        if ((char)param_1[0xe] == '\0') {
          local_8d = 0x1b;
        }
        else {
          local_8d = 0x1a;
        }
      }
      else if ((char)param_1[0xe] == '\0') {
        local_8d = 0x15;
      }
      else {
        local_8d = 0x14;
      }
      local_148 = (int *)CONCAT44(local_148._4_4_,(int)param_1[0xf] - local_54);
      FUN_004238d0(&local_48,0,local_5c,local_60);
      plVar8 = (longlong *)FUN_00781840();
      (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_8d);
      if (0 < local_3c - local_44) {
        uVar7 = FUN_00781840();
        uVar9 = FUN_005ffa40(param_2);
        local_148 = (int *)0x0;
        local_140 = 0;
        FUN_00778dc0(uVar7,uVar9,&local_74,&local_48);
      }
      if ((*(char *)(param_1[2] + 0x4d1) == '\x04') || (*(char *)(param_1[2] + 0x4d1) == '\x05')) {
        if ((char)param_1[0xe] == '\0') {
          local_8d = 0x1d;
        }
        else {
          local_8d = 0x1c;
        }
      }
      else if ((char)param_1[0xe] == '\0') {
        local_8d = 0x17;
      }
      else {
        local_8d = 0x16;
      }
      local_148 = (int *)CONCAT44(local_148._4_4_,(int)param_1[0xf] - local_54);
      FUN_004238d0(&local_48,(int)param_1[0x26] - local_58,local_5c,(int)param_1[0x26]);
      plVar8 = (longlong *)FUN_00781840();
      (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_8d);
      if (0 < local_3c - local_44) {
        uVar7 = FUN_00781840();
        uVar9 = FUN_005ffa40(param_2);
        local_148 = (int *)0x0;
        local_140 = 0;
        FUN_00778dc0(uVar7,uVar9,&local_74,&local_48);
      }
      if ((*(char *)(param_1[2] + 0x4d1) == '\x04') || (*(char *)(param_1[2] + 0x4d1) == '\x05')) {
        if ((char)param_1[0xe] == '\0') {
          local_8d = 0x1f;
        }
        else {
          local_8d = 0x1e;
        }
      }
      else if ((char)param_1[0xe] == '\0') {
        local_8d = 0x19;
      }
      else {
        local_8d = 0x18;
      }
      local_148 = (int *)CONCAT44(local_148._4_4_,(int)param_1[0xf]);
      FUN_004238d0(&local_48,0,(int)param_1[0xf] - local_54,(int)param_1[0x26]);
      plVar8 = (longlong *)FUN_00781840();
      (**(code **)(*plVar8 + 0x228))(plVar8,&local_74,local_8d);
      if (0 < local_3c - local_44) {
        uVar7 = FUN_00781840();
        uVar9 = FUN_005ffa40(param_2);
        local_148 = (int *)0x0;
        local_140 = 0;
        FUN_00778dc0(uVar7,uVar9,&local_74,&local_48);
      }
      FUN_0081b0d0(auStack_168);
    }
  }
  FUN_00414480(&local_d0);
  return;
}

