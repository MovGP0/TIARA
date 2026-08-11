/* Ghidra address: 01be6190 */
/* Ghidra symbol: FUN_01be6190 */


void FUN_01be6190(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int extraout_EAX;
  int extraout_EAX_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int extraout_var;
  int extraout_var_00;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong *local_98;
  longlong local_90;
  undefined1 local_88 [12];
  int local_7c;
  int local_78;
  int local_74;
  undefined1 local_70 [20];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  
  local_98 = param_1;
  local_90 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) {
    local_4c = (undefined4)param_1[0x12];
    local_48 = *(undefined4 *)((longlong)param_1 + 0x94);
    uVar7 = FUN_00809b30(*(undefined8 *)PTR_DAT_02005950,&local_4c,0);
    lVar1 = local_98[0x12];
    iStack_2c = *(int *)((longlong)local_98 + 0x94);
    local_30 = (int)lVar1;
    iVar3 = FUN_00807790(uVar7);
    iVar4 = FUN_008077f0(uVar7);
    if (iVar3 + iVar4 < (int)lVar1 + (int)local_98[0x13]) {
      iVar3 = FUN_00807790(uVar7);
      iVar4 = FUN_008077f0(uVar7);
      local_30 = (iVar3 + iVar4) - (int)local_98[0x13];
    }
    iVar3 = FUN_00807790(uVar7);
    if ((int)local_98[0x12] < iVar3) {
      local_30 = FUN_00807790(uVar7);
    }
    FUN_00807850(uVar7,&local_78);
    FUN_00807850(uVar7,local_88);
    if (local_74 + local_7c <
        *(int *)((longlong)local_98 + 0x94) + *(int *)((longlong)local_98 + 0x9c)) {
      iStack_2c = *(int *)((longlong)local_98 + 0x94) - *(int *)((longlong)local_98 + 0x9c);
    }
    FUN_00807850(uVar7,&local_78);
    if (*(int *)((longlong)local_98 + 0x94) < local_74) {
      FUN_00807850(uVar7,&local_78);
      iStack_2c = local_74;
    }
    FUN_00807850(uVar7,&local_78);
    if (iStack_2c < local_74) {
      FUN_00807850(uVar7,&local_78);
      iStack_2c = local_74;
    }
  }
  else {
    if (*(char *)(param_2 + 0x4c3) == '\0') {
      local_54 = *(int *)(param_3 + 0x90) + 1;
      local_50 = *(int *)(param_3 + 0x94) + *(int *)(param_3 + 0x9c);
      FUN_0064d1f0(param_2,&local_54);
      local_30 = extraout_EAX;
      iStack_2c = extraout_var;
    }
    else if (*(char *)(param_2 + 0x4c3) == '\x01') {
      local_5c = (*(int *)(param_3 + 0x90) - (int)param_1[0x13]) + *(int *)(param_3 + 0x98);
      local_58 = *(int *)(param_3 + 0x94) + *(int *)(param_3 + 0x9c);
      FUN_0064d1f0(param_2,&local_5c);
      local_30 = extraout_EAX_00;
      iStack_2c = extraout_var_00;
    }
    else {
      FUN_0064d000(param_3,&local_78);
      uVar7 = FUN_0064d1f0(*(undefined8 *)(local_90 + 0x78),&local_78);
      local_30 = (int)uVar7;
      local_30 = local_30 + *(int *)(local_90 + 0x98);
      iStack_2c = (int)((ulonglong)uVar7 >> 0x20);
    }
    local_44 = 0xffffffff;
    thunk_FUN_03e0f7b4(0x1b,0,&local_44,0);
    FUN_0064d000(local_90,&local_78);
    local_40 = FUN_0064d1f0(*(undefined8 *)(local_90 + 0x78),&local_78);
    FUN_0064d000(local_90,&local_78);
    local_38 = FUN_0064d1f0(*(undefined8 *)(local_90 + 0x78),local_70);
    uVar7 = FUN_00809b60(*(undefined8 *)PTR_DAT_02005950,&local_40,0);
    iVar3 = FUN_00807790(uVar7);
    if (local_30 < iVar3) {
      local_30 = FUN_00807790(uVar7);
    }
    FUN_00807850(uVar7,&local_78);
    uVar5 = FUN_008077f0(uVar7);
    iVar3 = FUN_01be6180(auStack_c8,local_78,uVar5);
    if (iVar3 < local_30 + (int)local_98[0x13]) {
      uVar5 = FUN_008077f0(uVar7);
      local_30 = FUN_01be6180(auStack_c8,local_78,uVar5);
      local_30 = local_30 - (int)local_98[0x13];
      cVar2 = FUN_004113d0(local_90,&PTR_FUN_01bdf860);
      if (cVar2 != '\0') {
        iVar3 = FUN_008077f0(uVar7);
        if (((local_78 + iVar3) - *(int *)(param_2 + 0x90)) + *(int *)(param_2 + 0x98) <
            local_30 + (int)local_98[0x13]) {
          local_30 = (*(int *)(param_2 + 0x90) - (int)local_98[0x13]) + 2;
        }
      }
    }
    iVar4 = FUN_008077b0(uVar7);
    iVar3 = iStack_2c;
    if (iVar4 < *(int *)((longlong)local_98 + 0x9c)) {
      iStack_2c = FUN_008077d0(uVar7);
    }
    else {
      uVar5 = FUN_008077d0(uVar7);
      uVar6 = FUN_008077b0(uVar7);
      iVar4 = FUN_01be6180(auStack_c8,uVar5,uVar6);
      if (iVar4 < iVar3 + *(int *)((longlong)local_98 + 0x9c)) {
        cVar2 = FUN_004113d0(local_90,&PTR_FUN_01bdff58);
        if (cVar2 == '\0') {
          iStack_2c = (iVar3 - *(int *)((longlong)local_98 + 0x9c)) + *(int *)(local_90 + 0x9c) + 3;
        }
        else {
          iVar4 = FUN_008077b0(uVar7);
          if (iVar4 / 2 < local_40._4_4_) {
            iStack_2c = (iVar3 - *(int *)(local_90 + 0x9c)) - *(int *)((longlong)local_98 + 0x9c);
          }
        }
      }
    }
  }
  local_a8 = *(undefined4 *)((longlong)local_98 + 0x9c);
  (**(code **)(*local_98 + 400))(local_98,local_30,iStack_2c,(int)local_98[0x13]);
  return;
}

