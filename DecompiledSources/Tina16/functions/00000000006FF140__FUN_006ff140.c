/* Ghidra address: 006ff140 */
/* Ghidra symbol: FUN_006ff140 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ff140(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_118 [32];
  byte *local_f8;
  undefined1 *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_94 [95];
  byte local_35;
  undefined1 local_34 [18];
  char local_22;
  char local_21;
  longlong local_20;
  
  local_e0 = auStack_118;
  local_c8 = *(longlong *)(param_2 + 0x10);
  iVar4 = *(int *)(local_c8 + 0x10);
  local_a0 = local_c8;
  if (iVar4 < -0x2c1) {
    if (iVar4 == -0x2c2) {
      if ((*(char *)((longlong)param_1 + 0x4ca) == '\0') &&
         (*(int *)(local_c8 + 0x18) == (int)param_1[0x9c])) {
        *(undefined8 *)(param_2 + 0x18) = 0;
      }
      else {
        local_e0 = auStack_118;
        local_c0 = local_c8;
        uVar5 = (**(code **)(*param_1 + 0x288))(param_1,*(undefined4 *)(local_c8 + 0x18));
        *(longlong *)(param_2 + 0x18) = (longlong)(int)(uVar5 & 0xff);
        if ((*(longlong *)(local_c0 + 0x30) == 0) && (*(byte *)(local_c0 + 0x29) == _DAT_01e023d2))
        {
          local_20 = FUN_006f9550(&PTR_FUN_006cb0d0,1,param_1[1]);
          FUN_006fa6a0(local_20,3);
          FUN_004aec30(param_1[0x96],*(undefined4 *)(local_c0 + 0x18),local_20);
          *(int *)((longlong)param_1 + 0x53c) = *(int *)((longlong)param_1 + 0x53c) + 1;
        }
      }
      *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
      return;
    }
    if (-0x2c6 < iVar4) {
      if (iVar4 == -0x2c4) {
        local_e0 = auStack_118;
        if (*(char *)((longlong)param_1 + 0x4ca) == '\0') {
          local_e0 = auStack_118;
          FUN_007000a0(param_1);
        }
        if (param_1[0xb6] == 0) {
          return;
        }
        (*(code *)param_1[0xb6])(param_1[0xb7],param_1);
        return;
      }
      if (iVar4 != -0x2c3) {
        return;
      }
      local_e0 = auStack_118;
      uVar5 = (**(code **)(*param_1 + 0x290))(param_1,*(undefined4 *)(local_c8 + 0x18));
      *(longlong *)(param_2 + 0x18) = (longlong)(int)(uVar5 & 0xff);
      if (*(char *)((longlong)param_1 + 0x4ca) != '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(local_c8 + 0x18);
      return;
    }
    if (iVar4 == -0x2c6) {
      local_e0 = auStack_118;
      local_b0 = local_c8;
      lVar6 = FUN_007017d0(param_1,0x417,(longlong)*(int *)(local_c8 + 0x18),local_c8 + 0x20);
      if (lVar6 == 0) {
        return;
      }
      local_20 = *(longlong *)(local_b0 + 0x30);
      if (local_20 == 0) {
        return;
      }
      pcVar7 = (code *)FUN_00411550(local_20,0xffc4);
      (*pcVar7)(local_20);
      return;
    }
    if (iVar4 != -0x2d0) {
      if (iVar4 != -0x2cb) {
        return;
      }
      if (*(char *)((longlong)param_1 + 0x4ca) == '\0') {
        return;
      }
      if ((char)param_1[0xa6] != '\0') {
        return;
      }
      if (param_1[0xb8] == 0) {
        return;
      }
      local_e0 = auStack_118;
      local_20 = FUN_004aeac0(param_1[0x96],*(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x18));
      (*(code *)param_1[0xb8])(param_1[0xb9],param_1,local_20);
      return;
    }
LAB_006ffdab:
    if (*(char *)((longlong)param_1 + 0x4ca) == '\0') {
      return;
    }
    local_e0 = auStack_118;
    uVar5 = FUN_007028c0(param_1,local_c8);
    *(longlong *)(param_2 + 0x18) = (longlong)(int)(uVar5 & 0xff);
    return;
  }
  if (iVar4 < -0x2be) {
    if (iVar4 == -0x2bf) {
      *(undefined1 *)((longlong)param_1 + 0x4ca) = 1;
      *(undefined4 *)((longlong)param_1 + 0x53c) = 0;
      local_e0 = auStack_118;
      if (param_1[0xbc] != 0) {
        local_e0 = auStack_118;
        (*(code *)param_1[0xbc])(param_1[0xbd],param_1);
      }
      if ((char)param_1[0xa6] != '\0') {
        return;
      }
      FUN_00702c80(param_1,1);
      return;
    }
    if (iVar4 == -0x2c1) {
      *(undefined1 *)(param_1 + 0xa6) = 1;
      local_e0 = auStack_118;
      FUN_00702c80(param_1,0);
      FUN_007000a0(param_1);
      *(undefined1 *)(param_1 + 0xa6) = 0;
      return;
    }
    if (iVar4 != -0x2c0) {
      return;
    }
    if ((char)param_1[0xa6] == '\0') {
      local_e0 = auStack_118;
      FUN_007000a0(param_1);
      *(undefined1 *)((longlong)param_1 + 0x4ca) = 0;
    }
    else if (param_1[0xbe] != 0) {
      local_e0 = auStack_118;
      (*(code *)param_1[0xbe])(param_1[0xbf],param_1);
    }
    *(undefined1 *)(param_1 + 0xa6) = 0;
    return;
  }
  if (iVar4 == -700) goto LAB_006ffdab;
  if (iVar4 != -0xc) {
    return;
  }
  local_b8 = local_c8;
  local_a8 = local_c8;
  FUN_005fdf10(param_1[0x98]);
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((*(uint *)(local_b8 + 0x18) & 0x10000) != 0) {
    local_20 = 0;
    if (*(int *)(local_b8 + 0x38) < *(int *)(param_1[0x96] + 0x10)) {
      local_20 = FUN_006fca20(param_1,*(undefined4 *)(local_b8 + 0x38));
    }
    if (local_20 == 0) {
LAB_006ffc39:
      FUN_00700070(0,local_e0);
      return;
    }
    iVar4 = *(int *)(local_b8 + 0x18);
    if (iVar4 == 0x10001) {
      FUN_005ffb10(param_1[0x98],*(undefined8 *)(local_b8 + 0x20));
      FUN_005ff880(param_1[0x98],param_1[0x17]);
      FUN_005ff8c0(param_1[0x98],param_1[0x66]);
      lVar6 = param_1[0x98];
      lVar1 = *(longlong *)(lVar6 + 0x70);
      *(longlong **)(lVar1 + 0x10) = param_1;
      *(code **)(lVar1 + 8) = FUN_007009f0;
      lVar6 = *(longlong *)(lVar6 + 0x80);
      *(longlong **)(lVar6 + 0x10) = param_1;
      *(code **)(lVar6 + 8) = FUN_007009f0;
      *(undefined1 *)(param_1 + 0x99) = 0;
      local_35 = 0;
      local_f8 = &local_35;
      local_21 = (**(code **)(*param_1 + 0x280))
                           (param_1,local_20,*(undefined2 *)(local_b8 + 0x40),0);
      if ((local_21 != '\0') && (*(char *)((longlong)param_1 + 0x4cd) == '\x01')) {
        local_35 = 0;
        local_21 = (**(code **)(*param_1 + 0x270))
                             (param_1,local_20,*(undefined2 *)(local_b8 + 0x40),&local_35);
      }
      if ((local_35 & 1) != 0) {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10000;
      }
      if ((local_35 & 2) != 0) {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x20000;
      }
      if ((local_35 & 4) != 0) {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x40000;
      }
      if ((local_35 & 8) != 0) {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x80000;
      }
      if ((local_35 & 0x10) != 0) {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x100000;
      }
      uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[0x98] + 0x70) + 0x28));
      *(undefined4 *)(local_b8 + 0x68) = uVar3;
      local_d8 = *(longlong *)(param_1[0x98] + 0x80);
      uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_d8 + 0x18) + 0x28));
      *(undefined4 *)(local_b8 + 0x74) = uVar3;
      if (local_21 == '\0') {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 4;
        FUN_00700010(0,local_e0);
        goto LAB_006ffc39;
      }
      if ((char)param_1[0x99] != '\0') {
        *(undefined1 *)(param_1 + 0x99) = 0;
        lVar6 = param_1[0x98];
        lVar1 = *(longlong *)(lVar6 + 0x70);
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        lVar1 = *(longlong *)(lVar6 + 0x80);
        *(undefined8 *)(lVar1 + 8) = 0;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        uVar8 = FUN_005fc8c0(*(undefined8 *)(lVar6 + 0x70));
        iVar4 = thunk_FUN_03d2c01a(uVar8,0x5c,local_94);
        if (iVar4 != 0) {
          FUN_005ffb10(param_1[0x98],0);
          iVar4 = thunk_FUN_041a15ee(local_94);
          *(int *)(param_1 + 200) = iVar4;
          uVar3 = thunk_FUN_041a19a1(*(undefined8 *)(local_b8 + 0x20),(longlong)iVar4);
          *(undefined4 *)((longlong)param_1 + 0x644) = uVar3;
          *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 2;
        }
      }
      cVar2 = (**(code **)(*param_1 + 0x298))(param_1,1,1);
      if (cVar2 != '\0') {
        *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
      }
      FUN_005ffb10(param_1[0x98],0);
    }
    else if (iVar4 == 0x10002) {
      FUN_005ffb10(param_1[0x98],*(undefined8 *)(local_b8 + 0x20));
      FUN_005ff880(param_1[0x98],param_1[0x17]);
      FUN_005ff8c0(param_1[0x98],param_1[0x66]);
      if (local_20 != 0) {
        local_f8 = &local_35;
        (**(code **)(*param_1 + 0x280))(param_1,local_20,*(undefined2 *)(local_b8 + 0x40),1);
      }
      FUN_005ffb10(param_1[0x98],0);
      if (((int)param_1[200] != 0) && (*(int *)((longlong)param_1 + 0x644) != 0)) {
        thunk_FUN_041a19a1(*(undefined8 *)(local_b8 + 0x20),
                           (longlong)*(int *)((longlong)param_1 + 0x644));
        thunk_FUN_0416f828((longlong)(int)param_1[200]);
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined4 *)((longlong)param_1 + 0x644) = 0;
      }
    }
    else if (iVar4 == 0x10003) {
      if (local_20 != 0) {
        local_f8 = &local_35;
        (**(code **)(*param_1 + 0x280))(param_1,local_20,*(undefined2 *)(local_b8 + 0x40),2);
      }
    }
    else if ((iVar4 == 0x10004) && (local_20 != 0)) {
      local_f8 = &local_35;
      (**(code **)(*param_1 + 0x280))(param_1,local_20,*(undefined2 *)(local_b8 + 0x40),3);
    }
    goto code_r0x006ffc21;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,local_34);
  iVar4 = *(int *)(local_b8 + 0x18);
  if (iVar4 != 1) {
    if (iVar4 == 2) {
      cVar2 = (**(code **)(*param_1 + 0x298))(param_1,0,1);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x278))(param_1,local_34,1);
      }
    }
    else if (iVar4 == 3) {
      cVar2 = (**(code **)(*param_1 + 0x298))(param_1,0,2);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x278))(param_1,local_34,2);
      }
    }
    else if (iVar4 == 4) {
      cVar2 = (**(code **)(*param_1 + 0x298))(param_1,0,3);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x278))(param_1,local_34,3);
      }
    }
    goto code_r0x006ffc21;
  }
  local_22 = (**(code **)(*param_1 + 0x298))(param_1,0,0);
  if ((local_22 != '\0') || (*(char *)((longlong)param_1 + 0x4cd) == '\x01')) {
    FUN_005ffb10(param_1[0x98],*(undefined8 *)(local_b8 + 0x20));
    FUN_005ff880(param_1[0x98],param_1[0x17]);
    FUN_005ff8c0(param_1[0x98],param_1[0x66]);
    if (local_22 == '\0') {
      local_21 = (**(code **)(*param_1 + 0x268))(param_1,local_34);
    }
    else {
      local_21 = (**(code **)(*param_1 + 0x278))(param_1,local_34,0);
    }
    if (local_21 == '\0') {
      *(undefined8 *)(param_2 + 0x18) = 4;
      FUN_006fffe0(0,local_e0);
      goto LAB_006ffc39;
    }
    uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1[0x98] + 0x70) + 0x28));
    *(undefined4 *)(local_b8 + 0x68) = uVar3;
    local_d0 = *(longlong *)(param_1[0x98] + 0x80);
    uVar3 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(local_d0 + 0x18) + 0x28));
    *(undefined4 *)(local_b8 + 0x74) = uVar3;
    FUN_005ffb10(param_1[0x98],0);
  }
  cVar2 = (**(code **)(*param_1 + 0x298))(param_1,1,0);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x298))(param_1,1,2);
    if (cVar2 != '\0') goto LAB_006ff51b;
    cVar2 = (**(code **)(*param_1 + 0x298))(param_1,1,2);
    if ((cVar2 != '\0') || (*(char *)((longlong)param_1 + 0x4cd) == '\x01')) goto LAB_006ff51b;
  }
  else {
LAB_006ff51b:
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x20;
  }
  cVar2 = (**(code **)(*param_1 + 0x298))(param_1,1,1);
  if (cVar2 != '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x10;
  }
  cVar2 = (**(code **)(*param_1 + 0x298))(param_1,1,3);
  if (cVar2 != '\0') {
    *(ulonglong *)(param_2 + 0x18) = *(ulonglong *)(param_2 + 0x18) | 0x40;
  }
code_r0x006ffc21:
  FUN_005fe090(param_1[0x98]);
  return;
}

