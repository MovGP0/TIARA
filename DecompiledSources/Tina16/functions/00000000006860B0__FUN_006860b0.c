/* Ghidra address: 006860b0 */
/* Ghidra symbol: FUN_006860b0 */


void FUN_006860b0(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined7 uVar7;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar8;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined4 local_cc;
  longlong local_c8;
  bool local_bd;
  int local_bc;
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  longlong local_88;
  bool local_7d;
  int local_7c;
  longlong local_78;
  undefined1 local_70 [8];
  int local_68;
  undefined2 local_60;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  uint local_24;
  undefined8 local_20 [2];
  
  local_e0 = auStack_168;
  local_130 = 0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  if (*(byte *)(param_1 + 0x54a) < 8) {
    bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(param_1 + 0x54a) & 0x1f) & 3U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    local_e0 = auStack_168;
    FUN_0064dd90(param_1,&local_e8);
    FUN_00414ad0(param_1 + 0x540,local_e8);
  }
  else {
    iVar4 = FUN_00427dd0();
    if (*(uint *)(param_1 + 0x57c) <= (uint)(iVar4 - *(int *)(param_1 + 0x53c))) {
      FUN_00414480(param_1 + 0x540);
    }
    uVar3 = FUN_00427dd0();
    *(undefined4 *)(param_1 + 0x53c) = uVar3;
  }
  uVar1 = *param_2;
  if (uVar1 == 8) {
    cVar2 = FUN_00685f40(auStack_168,&local_24,&local_28);
    if (cVar2 == '\0') {
      if (*(byte *)(param_1 + 0x54a) < 8) {
        bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(param_1 + 0x54a) & 0x1f) & 3U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_0064dd90(param_1,&local_f0);
        local_78 = local_f0;
        local_7c = 0;
        if (local_f0 != 0) {
          local_7c = *(int *)(local_f0 + -4);
        }
        local_7d = 0 < local_7c;
      }
      else {
        local_7d = false;
      }
      if (local_7d == false) {
        while( true ) {
          local_88 = *(longlong *)(param_1 + 0x540);
          local_8c = 0;
          if (local_88 != 0) {
            local_8c = *(undefined4 *)(local_88 + -4);
          }
          cVar2 = FUN_0044f380(*(undefined8 *)(param_1 + 0x540),local_8c);
          if (cVar2 != '\x02') break;
          local_98 = *(longlong *)(param_1 + 0x540);
          local_9c = 0;
          if (local_98 != 0) {
            local_9c = *(undefined4 *)(local_98 + -4);
          }
          FUN_00416e20(param_1 + 0x540,local_9c,1);
        }
        local_a8 = *(longlong *)(param_1 + 0x540);
        local_ac = 0;
        if (local_a8 != 0) {
          local_ac = *(undefined4 *)(local_a8 + -4);
        }
        FUN_00416e20(param_1 + 0x540,local_ac,1);
      }
      else {
        FUN_0064dd90(param_1,&local_38);
        local_3c = local_24;
        while (cVar2 = FUN_0044f380(local_38,local_3c), cVar2 == '\x02') {
          local_3c = local_3c - 1;
        }
        FUN_00416dc0(&local_30,local_38,1,local_3c - 1);
        uVar6 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar6,0x14e,0xffffffffffffffff,0);
        FUN_00416dc0(&local_100,local_38,local_28 + 1,0x7fffffff);
        FUN_00416ba0(&local_f8,local_30,local_100);
        FUN_0064de00(param_1,local_f8);
        uVar6 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar6,0x142,0,CONCAT22((short)local_3c + -1,(short)local_3c + -1));
        FUN_0064dd90(param_1,&local_108);
        FUN_00414ad0(param_1 + 0x540,local_108);
      }
    }
    else {
      FUN_00685fc0(auStack_168,local_24,local_28);
    }
    *param_2 = 0;
    pcVar5 = (code *)FUN_00411550(param_1,0xffac);
    (*pcVar5)(param_1);
  }
  else if (uVar1 == 9) {
    if ((*(char *)(param_1 + 0x539) != '\0') && (cVar2 = FUN_006838c0(param_1), cVar2 != '\0')) {
      FUN_006838f0(param_1,0);
    }
  }
  else if (uVar1 != 0x1b) {
    FUN_00685f40(auStack_168,&local_24,&local_28);
    if (*(byte *)(param_1 + 0x54a) < 2) {
      local_b8 = *(longlong *)(param_1 + 0x540);
      local_bc = 0;
      if (local_b8 != 0) {
        local_bc = *(int *)(local_b8 + -4);
      }
      local_bd = (int)local_24 < local_bc;
    }
    else {
      local_bd = false;
    }
    if (local_bd == false) {
      FUN_00416780(&local_128,*param_2);
      FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0x540),local_128);
    }
    else {
      local_20[0] = 0;
      FUN_00416dc0(&local_110,*(undefined8 *)(param_1 + 0x540),1,local_24);
      FUN_00416780(&local_118,*param_2);
      FUN_00416ba0(local_20,local_110,local_118);
      local_c8 = *(longlong *)(param_1 + 0x540);
      local_cc = 0;
      if (local_c8 != 0) {
        local_cc = *(undefined4 *)(local_c8 + -4);
      }
      FUN_00416dc0(&local_120,*(undefined8 *)(param_1 + 0x540),local_28 + 1,local_cc);
      FUN_00416ba0(&local_38,local_20[0],local_120);
      FUN_00414480(local_20);
    }
    if ((*(char *)(param_1 + 0x539) != '\0') && (cVar2 = FUN_006838c0(param_1), cVar2 == '\0')) {
      FUN_006838f0(param_1,1);
    }
    if ((*param_2 < 0xd800) || (0xdfff < *param_2)) {
      cVar2 = FUN_00686900(param_1,local_38);
      if (cVar2 != '\0') {
        *param_2 = 0;
      }
    }
    else {
      uVar6 = FUN_0065b870(param_1);
      local_148 = 0;
      iVar4 = thunk_FUN_04166556(local_70,uVar6,0,0);
      if ((iVar4 != 0) && (local_68 == 0x102)) {
        FUN_00416780(&local_138,local_60);
        FUN_00416ba0(&local_130,local_38,local_138);
        cVar2 = FUN_00686900(param_1,local_130);
        if (cVar2 != '\0') {
          uVar6 = FUN_0065b870(param_1);
          local_148 = 1;
          thunk_FUN_04166556(local_70,uVar6,0,0);
          *param_2 = 0;
        }
      }
    }
  }
  FUN_00414560(&local_138,6);
  FUN_00414480(&local_108);
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_38,2);
  return;
}

