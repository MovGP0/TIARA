/* Ghidra address: 006db440 */
/* Ghidra symbol: FUN_006db440 */


void FUN_006db440(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [40];
  undefined1 *local_d0;
  int local_c4;
  undefined8 local_c0;
  int local_b4;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  uint *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78;
  int local_74;
  undefined4 local_70 [11];
  undefined4 local_44;
  longlong local_28;
  char local_19;
  
  local_d0 = auStack_f8;
  local_90 = *(longlong *)(param_2 + 0x10);
  iVar3 = *(int *)(local_90 + 0x10);
  local_88 = local_90;
  if (iVar3 < -0x136) {
    if (iVar3 == -0x137) {
      local_d0 = auStack_f8;
      uVar2 = thunk_FUN_041a8b50();
      uVar2 = FUN_004239b0(uVar2);
      local_80 = FUN_00422ce0(uVar2);
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_0417e313(uVar4,&local_80);
      iVar3 = FUN_0064d120(param_1);
      local_80 = CONCAT44(iVar3 / 2,(undefined4)local_80);
      uVar4 = FUN_0065b870(param_1,(longlong)iVar3 % 2 & 0xffffffff);
      FUN_004701a0(uVar4,0x1206,0,&local_80);
      local_70[0] = 0x80;
      if (local_74 < 0) {
        if ((local_78 & 0x800) == 0) {
          if (((local_78 & 0x400) != 0) || ((local_78 & 1) != 0)) {
            local_a8 = *(longlong *)(param_1 + 0x490);
            *(int *)(param_1 + 0x4b4) = *(int *)(*(longlong *)(local_a8 + 0x10) + 0x10) + -1;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x4b4) = 0;
        }
      }
      else {
        local_b0 = FUN_0065b870(param_1);
        local_b4 = local_74;
        thunk_FUN_041b2403(local_b0,0x120b,(longlong)local_74,local_70);
        *(undefined4 *)(param_1 + 0x4b4) = local_44;
      }
      local_c0 = FUN_0065b870(param_1);
      local_c4 = *(int *)(local_90 + 0x18);
      thunk_FUN_041b2403(local_c0,0x120b,(longlong)local_c4,local_70);
      *(undefined4 *)(param_1 + 0x4b0) = local_44;
      uVar4 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),local_44);
      uVar6 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x4b4));
      cVar1 = FUN_006dbf10(param_1,uVar4,uVar6);
      *(char *)(param_1 + 0x4a1) = cVar1;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)(cVar1 == '\0');
      lVar7 = thunk_FUN_041d93e9();
      lVar8 = FUN_0065b870(param_1);
      if (lVar7 == lVar8) {
        return;
      }
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_0416f4fc(uVar4);
      return;
    }
    if (2 < iVar3 + 0x148U) {
      if (iVar3 == -0x142) {
LAB_006db4f3:
        local_d0 = auStack_f8;
        uVar4 = FUN_006da380(*(undefined8 *)(param_1 + 0x490),*(undefined4 *)(local_90 + 0x18));
        pcVar5 = (code *)FUN_00411550(param_1,0xffab);
        (*pcVar5)(param_1,uVar4);
        return;
      }
      if (iVar3 != -0x141) {
        if (iVar3 != -0x13c) {
          return;
        }
        local_d0 = auStack_f8;
        local_28 = FUN_006dbe00(param_1,*(undefined4 *)(local_90 + 0x18));
        FUN_006da240(local_28,*(char *)(local_28 + 0x37) == '\0');
        return;
      }
LAB_006db56d:
      local_98 = *(uint **)(local_90 + 0x20);
      if ((*local_98 & 1) != 0) {
        local_d0 = auStack_f8;
        local_28 = FUN_006dbe00(param_1,*(undefined4 *)(local_90 + 0x18));
        if (*(uint *)(local_28 + 0x20) != local_98[1]) {
          *(uint *)(local_28 + 0x20) = local_98[1];
          pcVar5 = (code *)FUN_00411550(param_1,0xffa7);
          (*pcVar5)(param_1,local_28);
        }
      }
      return;
    }
  }
  else if (2 < iVar3 + 0x134U) {
    if (iVar3 == -0x12e) goto LAB_006db4f3;
    if (iVar3 != -0x12d) {
      if (iVar3 != -0x10) {
        return;
      }
      if (*(char *)(param_1 + 0x4a1) == '\0') {
        return;
      }
      FUN_006dc330(param_1);
      return;
    }
    goto LAB_006db56d;
  }
  local_d0 = auStack_f8;
  local_28 = FUN_006dbe00(param_1,*(undefined4 *)(local_90 + 0x18));
  iVar3 = *(int *)(local_90 + 0x10);
  if (iVar3 == -0x147) {
LAB_006db637:
    local_19 = '\x02';
  }
  else {
    if (iVar3 != -0x146) {
      if (iVar3 == -0x133) goto LAB_006db637;
      if (iVar3 != -0x132) {
        local_19 = '\x01';
        goto code_r0x006db648;
      }
    }
    local_19 = '\0';
  }
code_r0x006db648:
  if (local_19 != '\x02') {
    *(longlong *)(param_1 + 0x4d8) = local_28;
    *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(local_28 + 0x20);
    uVar2 = thunk_FUN_041a8b50();
    uVar2 = FUN_004239b0(uVar2);
    uVar4 = FUN_00422ce0(uVar2);
    *(undefined8 *)(param_1 + 0x4e4) = uVar4;
    uVar4 = FUN_0065b870(param_1);
    thunk_FUN_0417e313(uVar4,param_1 + 0x4e4);
  }
  local_a0 = *(longlong *)(local_90 + 0x20);
  if (*(int *)(local_a0 + 4) < *(int *)(local_28 + 0x24)) {
    *(int *)(local_a0 + 4) = *(int *)(local_28 + 0x24);
  }
  if (*(int *)(local_28 + 0x28) < *(int *)(local_a0 + 4)) {
    *(int *)(local_a0 + 4) = *(int *)(local_28 + 0x28);
  }
  pcVar5 = (code *)FUN_00411550(param_1,0xffa6);
  (*pcVar5)(param_1,local_28,*(undefined4 *)(local_a0 + 4),local_19);
  if (local_19 != '\x02') {
    return;
  }
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  return;
}

