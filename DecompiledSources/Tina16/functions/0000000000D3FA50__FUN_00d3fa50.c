/* Ghidra address: 00d3fa50 */
/* Ghidra symbol: FUN_00d3fa50 */


void FUN_00d3fa50(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  uint local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  longlong local_120;
  longlong lStack_118;
  undefined1 *local_110;
  undefined4 local_100;
  undefined1 local_fc [4];
  undefined4 local_f8;
  char local_f1;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined4 uStack_cc;
  char local_c6;
  byte local_c5;
  undefined1 local_c4 [12];
  int local_b8;
  int local_b4;
  undefined4 uStack_b0;
  int local_ac;
  undefined4 uStack_a8;
  int local_a4;
  undefined4 uStack_a0;
  longlong lStack_9c;
  undefined1 local_94 [16];
  int local_84;
  undefined4 local_80;
  int local_74 [2];
  int local_6c;
  int local_68;
  undefined1 local_64 [19];
  undefined1 local_51;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_3c;
  undefined4 uStack_34;
  longlong *local_30;
  
  local_110 = auStack_178;
  local_e0 = 0;
  local_c6 = FUN_00d3f270(param_1);
  if (local_c6 != '\0') {
    cVar1 = FUN_00d3eda0(param_1);
    if (cVar1 != '\x01') {
      local_100 = FUN_00d3f040(param_1);
      local_c5 = FUN_00d3efa0(param_1);
      FUN_00d3e550(param_1,local_64);
      local_48 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      uVar2 = FUN_004230a0(local_64);
      uVar3 = FUN_004230c0(local_64);
      (**(code **)(*local_48 + 0xe0))(local_48,uVar2,uVar3);
      uVar5 = FUN_00609e10(local_48);
      local_50 = FUN_005ffa40(uVar5);
      local_b8 = 0;
      local_158._0_4_ = 0;
      FUN_004238d0(&local_b4,0,0,0);
      local_158._0_4_ = 0;
      FUN_004238d0(&local_a4,0,0,0);
      local_158._0_4_ = 0;
      FUN_004238d0(&local_120,0,0,0);
      param_1[0x1c] = local_120;
      param_1[0x1d] = lStack_118;
      local_158 = (int *)((ulonglong)local_158._4_4_ << 0x20);
      FUN_004238d0(&local_84,0,0,0);
      if ((char)param_1[0x18] == '\0') {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,3);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,6);
        }
      }
      else {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,2);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,5);
        }
      }
      local_d4 = local_3c;
      uStack_cc = uStack_34;
      if (*(int *)((longlong)param_1 + 0x114) < 1) {
        uVar5 = FUN_00781840();
        local_158 = (int *)0x0;
        local_150 = 0;
        FUN_00778dc0(uVar5,local_50,&local_3c,local_64);
      }
      else {
        uVar5 = FUN_00781840();
        local_158 = (int *)local_fc;
        local_150 = 0;
        FUN_00779290(uVar5,0,&local_3c,1);
        local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
        uVar2 = (**(code **)(*local_48 + 0x60))(local_48);
        (**(code **)(*local_30 + 0x88))(local_30,uVar2);
        (**(code **)(*local_30 + 0x70))(local_30,local_f8);
        uVar2 = (**(code **)(*local_30 + 0x60))(local_30);
        uVar3 = (**(code **)(*local_30 + 0x48))(local_30);
        local_158 = (int *)CONCAT44(local_158._4_4_,uVar3);
        FUN_004238d0(local_94,0,0,uVar2);
        uVar5 = FUN_00781840();
        uVar7 = FUN_00609e10(local_30);
        uVar7 = FUN_005ffa40(uVar7);
        local_158 = (int *)0x0;
        local_150 = 0;
        FUN_00778dc0(uVar5,uVar7,&local_3c,local_94);
        uVar5 = FUN_00609e10(local_48);
        FUN_00d3f8c0(auStack_178,local_30,uVar5,local_64);
        FUN_00410f20(local_30);
      }
      if (((((local_c5 & 1) == 0) || (local_c6 == '\x03')) || (local_c6 == '\x04')) ||
         (local_c6 == '\x05')) {
        local_b4 = local_b4 + 7;
      }
      else {
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x228))(plVar6,local_c4,0x20);
        if (*(int *)((longlong)param_1 + 0x114) < 1) {
          uVar5 = FUN_00781840();
          local_158 = &local_a4;
          cVar1 = FUN_007790e0(uVar5,0,local_c4,local_64);
          if (cVar1 == '\0') {
            local_158 = (int *)((ulonglong)local_158 & 0xffffffff00000000);
            FUN_004238d0(&local_a4,0,0,0);
          }
        }
        else {
          FUN_00d3f510(param_1,&local_a4);
        }
        uVar2 = (**(code **)(*param_1 + 0x50))(param_1,0x31);
        uVar3 = (**(code **)(*param_1 + 0x50))(param_1,0x32);
        local_158 = (int *)CONCAT44(local_158._4_4_,uVar3);
        FUN_004238d0(&local_84,0,0,uVar2);
        FUN_00d37120(&local_120,&local_84,&local_a4);
        iVar4 = FUN_004230a0(&local_a4);
        if (0 < iVar4) {
          uVar5 = FUN_00609e10(local_48);
          uVar5 = FUN_005ffa40(uVar5);
          uVar7 = FUN_00d3f700(param_1);
          uVar7 = FUN_0060ce20(uVar7);
          local_158 = (int *)((ulonglong)local_158 & 0xffffffff00000000);
          local_150 = 0;
          local_148 = 0;
          local_140 = 0;
          local_138 = 3;
          thunk_FUN_041a8a5c(uVar5,local_84,local_80,uVar7);
        }
        iVar4 = FUN_004230a0(&local_a4);
        local_b4 = local_b4 + iVar4 + 5;
        param_1[0x1e] = CONCAT44(uStack_a0,local_a4);
        param_1[0x1f] = lStack_9c;
      }
      local_f0 = thunk_FUN_0417c6e9(param_1[1],0);
      local_e4 = FUN_00d36f10(local_f0,0xf060);
      local_f1 = FUN_00d36e90(local_f0,local_e4);
      if (((local_c5 & 1) != 0) && (local_f1 == '\0')) {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          if ((*(int *)((longlong)param_1 + 0xc4) == 0x14) && ((int)param_1[0x19] == 0x14)) {
            local_51 = 0x36;
          }
          else if ((int)param_1[0x19] == 0x14) {
            local_51 = 0x35;
          }
          else if ((char)param_1[0x18] == '\0') {
            local_51 = 0x37;
          }
          else {
            local_51 = 0x34;
          }
        }
        else if ((*(int *)((longlong)param_1 + 0xc4) == 0x14) && ((int)param_1[0x19] == 0x14)) {
          local_51 = 0x3a;
        }
        else if ((int)param_1[0x19] == 0x14) {
          local_51 = 0x39;
        }
        else if ((char)param_1[0x18] == '\0') {
          local_51 = 0x3b;
        }
        else {
          local_51 = 0x38;
        }
        if ((char)param_1[0x22] == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,local_51);
        }
        else {
          cVar1 = FUN_00d3f400(param_1);
          if (cVar1 == '\0') {
            plVar6 = (longlong *)FUN_00781840();
            (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x34);
          }
          else {
            plVar6 = (longlong *)FUN_00781840();
            (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x38);
          }
        }
        FUN_00d3e670(param_1,&local_a4);
        iVar4 = FUN_004230a0(&local_a4);
        if (0 < iVar4) {
          uVar5 = FUN_00781840();
          uVar7 = FUN_00609e10(local_48);
          uVar7 = FUN_005ffa40(uVar7);
          local_158 = (int *)0x0;
          local_150 = 0;
          FUN_00778dc0(uVar5,uVar7,&local_3c,&local_a4);
        }
        if (0 < local_a4) {
          local_ac = local_a4;
        }
      }
      if (((((local_c5 & 4) != 0) && ((local_c5 & 1) != 0)) && (local_c6 != '\x03')) &&
         ((local_c6 != '\x04' && (local_c6 != '\x05')))) {
        cVar1 = FUN_00d3eda0(param_1);
        if (cVar1 == '\x02') {
          if ((*(int *)((longlong)param_1 + 0xc4) == 9) && ((int)param_1[0x19] == 9)) {
            local_51 = 0x42;
          }
          else if ((int)param_1[0x19] == 9) {
            local_51 = 0x41;
          }
          else if ((char)param_1[0x18] == '\0') {
            local_51 = 0x43;
          }
          else {
            local_51 = 0x40;
          }
        }
        else if ((*(int *)((longlong)param_1 + 0xc4) == 9) && ((int)param_1[0x19] == 9)) {
          local_51 = 0x32;
        }
        else if ((int)param_1[0x19] == 9) {
          local_51 = 0x31;
        }
        else if ((char)param_1[0x18] == '\0') {
          local_51 = 0x33;
        }
        else {
          local_51 = 0x30;
        }
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,local_51);
        FUN_00d3ea50(param_1,&local_a4);
        iVar4 = FUN_004230a0(&local_a4);
        if (0 < iVar4) {
          uVar5 = FUN_00781840();
          uVar7 = FUN_00609e10(local_48);
          uVar7 = FUN_005ffa40(uVar7);
          local_158 = (int *)0x0;
          local_150 = 0;
          FUN_00778dc0(uVar5,uVar7,&local_3c,&local_a4);
        }
        if (0 < local_a4) {
          local_ac = local_a4;
        }
      }
      if (((((local_c5 & 2) != 0) && ((local_c5 & 1) != 0)) && (local_c6 != '\x03')) &&
         ((local_c6 != '\x04' && (local_c6 != '\x05')))) {
        if ((*(int *)((longlong)param_1 + 0xc4) == 8) && ((int)param_1[0x19] == 8)) {
          local_51 = 0x2a;
        }
        else if ((int)param_1[0x19] == 8) {
          local_51 = 0x29;
        }
        else if ((char)param_1[0x18] == '\0') {
          local_51 = 0x2b;
        }
        else {
          local_51 = 0x28;
        }
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,local_51);
        FUN_00d3ec20(param_1,&local_a4);
        iVar4 = FUN_004230a0(&local_a4);
        if (0 < iVar4) {
          uVar5 = FUN_00781840();
          uVar7 = FUN_00609e10(local_48);
          uVar7 = FUN_005ffa40(uVar7);
          local_158 = (int *)0x0;
          local_150 = 0;
          FUN_00778dc0(uVar5,uVar7,&local_3c,&local_a4);
        }
        if (0 < local_a4) {
          local_ac = local_a4;
        }
      }
      if ((((local_c5 & 8) != 0) && ((local_c5 & 1) != 0)) &&
         ((((local_c5 & 4) == 0 && ((local_c5 & 2) == 0)) || (local_c6 == '\x03')))) {
        if ((*(int *)((longlong)param_1 + 0xc4) == 0x15) && ((int)param_1[0x19] == 0x15)) {
          local_51 = 0x4a;
        }
        else if ((int)param_1[0x19] == 0x15) {
          local_51 = 0x49;
        }
        else if ((char)param_1[0x18] == '\0') {
          local_51 = 0x4b;
        }
        else {
          local_51 = 0x48;
        }
        plVar6 = (longlong *)FUN_00781840();
        (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,local_51);
        uVar5 = FUN_00781840();
        local_158 = &local_a4;
        cVar1 = FUN_007790e0(uVar5,0,&local_3c,local_64);
        if (cVar1 == '\0') {
          local_158 = (int *)((ulonglong)local_158 & 0xffffffff00000000);
          FUN_004238d0(&local_a4,0,0,0);
        }
        iVar4 = FUN_004230a0(&local_a4);
        if (0 < iVar4) {
          uVar5 = FUN_00781840();
          uVar7 = FUN_00609e10(local_48);
          uVar7 = FUN_005ffa40(uVar7);
          local_158 = (int *)0x0;
          local_150 = 0;
          FUN_00778dc0(uVar5,uVar7,&local_3c,&local_a4);
        }
        if (0 < local_a4) {
          local_ac = local_a4;
        }
      }
      local_d8 = 0x14100;
      cVar1 = FUN_00787a60(param_1[3]);
      if (cVar1 == '\x01') {
        local_d8 = local_d8 | 0x2000;
      }
      FUN_00787f40(param_1[3],&local_e0);
      cVar1 = FUN_00d3eda0(param_1);
      if (((cVar1 == '\x02') && (local_b8 != 0)) && ((local_c5 & 1) != 0)) {
        local_b4 = local_b4 + local_84;
        uVar5 = FUN_00609e10(local_48);
        uVar5 = FUN_005ffa40(uVar5);
        FUN_0064ae10(uVar5,0,local_b8);
        uVar5 = FUN_00781840();
        uVar7 = FUN_00609e10(local_48);
        uVar7 = FUN_005ffa40(uVar7);
        local_158 = &local_b4;
        local_150 = local_d8;
        local_148 = 0x1fffffff;
        local_140 = CONCAT44(local_140._4_4_,local_100);
        FUN_00778f70(uVar5,uVar7,&local_d4,local_e0);
        uVar5 = FUN_00609e10(local_48);
        uVar5 = FUN_005ffa40(uVar5);
        FUN_0064ae10(uVar5,0,-local_b8);
      }
      else {
        iVar4 = *(int *)((longlong)param_1 + 0x114);
        if (0 < iVar4) {
          local_b8 = iVar4 / 2;
          uVar5 = FUN_00609e10(local_48,(longlong)iVar4 % 2 & 0xffffffff);
          uVar5 = FUN_005ffa40(uVar5);
          FUN_0064ae10(uVar5,0,local_b8);
        }
        uVar5 = FUN_00781840();
        uVar7 = FUN_00609e10(local_48);
        uVar7 = FUN_005ffa40(uVar7);
        local_158 = &local_b4;
        local_150 = local_d8;
        local_148 = 0x1fffffff;
        local_140 = CONCAT44(local_140._4_4_,local_100);
        FUN_00778f70(uVar5,uVar7,&local_d4,local_e0);
        if (0 < *(int *)((longlong)param_1 + 0x114)) {
          uVar5 = FUN_00609e10(local_48);
          uVar5 = FUN_005ffa40(uVar5);
          FUN_0064ae10(uVar5,0,-local_b8);
        }
      }
      param_1[0x1c] = CONCAT44(uStack_b0,local_b4);
      param_1[0x1d] = CONCAT44(uStack_a8,local_ac);
      (**(code **)(*param_2 + 0x88))(param_2,0,0,local_48);
      FUN_00410f20(local_48);
      local_50 = FUN_005ffa40(param_2);
      (**(code **)*param_1)(param_1,local_74);
      if ((char)param_1[0x18] == '\0') {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x15);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x1b);
        }
      }
      else {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x14);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x1a);
        }
      }
      uVar2 = FUN_004230c0(local_64);
      local_158 = (int *)CONCAT44(local_158._4_4_,*(undefined4 *)((longlong)param_1 + 0x10c));
      FUN_004238d0(&local_84,0,uVar2,local_74[0]);
      if (local_74[0] < (int)param_1[0x21]) {
        uVar5 = FUN_00781840();
        local_158 = (int *)0x0;
        local_150 = 0;
        FUN_00778dc0(uVar5,local_50,&local_3c,&local_84);
      }
      if ((char)param_1[0x18] == '\0') {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x17);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x1d);
        }
      }
      else {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x16);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x1c);
        }
      }
      uVar2 = FUN_004230c0(local_64);
      local_158 = (int *)CONCAT44(local_158._4_4_,*(undefined4 *)((longlong)param_1 + 0x10c));
      FUN_004238d0(&local_84,(int)param_1[0x21] - local_6c,uVar2,(int)param_1[0x21]);
      if (local_6c < (int)param_1[0x21]) {
        uVar5 = FUN_00781840();
        local_158 = (int *)0x0;
        local_150 = 0;
        FUN_00778dc0(uVar5,local_50,&local_3c,&local_84);
      }
      if ((char)param_1[0x18] == '\0') {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x19);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x1f);
        }
      }
      else {
        cVar1 = FUN_00d3f400(param_1);
        if (cVar1 == '\0') {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x18);
        }
        else {
          plVar6 = (longlong *)FUN_00781840();
          (**(code **)(*plVar6 + 0x228))(plVar6,&local_3c,0x1e);
        }
      }
      local_158 = (int *)CONCAT44(local_158._4_4_,*(int *)((longlong)param_1 + 0x10c));
      FUN_004238d0(&local_84,0,*(int *)((longlong)param_1 + 0x10c) - local_68,(int)param_1[0x21]);
      uVar5 = FUN_00781840();
      local_158 = (int *)0x0;
      local_150 = 0;
      FUN_00778dc0(uVar5,local_50,&local_3c,&local_84);
    }
  }
  FUN_00414480(&local_e0);
  return;
}

