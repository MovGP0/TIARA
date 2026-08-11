/* Ghidra address: 01c0a7d0 */
/* Ghidra symbol: FUN_01c0a7d0 */


void FUN_01c0a7d0(longlong *param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_80 [16];
  undefined1 *local_70;
  longlong local_68;
  longlong local_60;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_70 = auStack_d8;
  plVar6 = (longlong *)param_1[100];
  puVar1 = auStack_d8;
  if ((plVar6 != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*plVar6 + 0x70))(plVar6), puVar1 = local_70, cVar2 == '\0')) {
    uVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
    cVar2 = FUN_004113d0(uVar4,&PTR_FUN_0061c2b8);
    puVar1 = local_70;
    if ((cVar2 != '\0') &&
       (lVar5 = (**(code **)(*param_1 + 0xd0))(param_1), puVar1 = local_70,
       *(char *)(lVar5 + 0xd8) != '\0')) {
      cVar2 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar2 != '\0') {
        local_b8 = CONCAT44(local_b8._4_4_,*(int *)((longlong)param_1 + 0x9c) + -1);
        FUN_004238d0(local_40,*param_2 + -1,1,*param_2 + 0x14);
        lVar5 = FUN_01c03e40(param_1[0x6d]);
        FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
        (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_40);
        uVar4 = FUN_01c07120(param_1);
        lVar5 = FUN_01c03e40(uVar4);
        FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x84));
        FUN_005fdf50(param_1[0x62],local_40);
      }
      uVar4 = FUN_01c07120(param_1);
      lVar5 = FUN_01c03e40(uVar4);
      FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x9c));
      local_50 = param_2[1] + 3;
      local_54 = *param_2 + 6;
      local_4c = local_50;
      FUN_00635ce0(param_1[0x62],&local_54,2,1);
      return;
    }
  }
  local_70 = puVar1;
  cVar2 = (**(code **)(*param_1 + 0x228))(param_1);
  if (cVar2 != '\0') {
    local_b8 = CONCAT44(local_b8._4_4_,*(int *)((longlong)param_1 + 0x9c) + -1);
    FUN_004238d0(local_40,*param_2 + -1,1,*param_2 + 0x14);
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x84));
    FUN_005fdf50(param_1[0x62],local_40);
  }
  local_60 = *(longlong *)(param_1[0x62] + 0x80);
  local_28 = *(undefined4 *)(*(longlong *)(local_60 + 0x18) + 0x28);
  if (((*(char *)((longlong)param_1 + 0x344) == '\0') ||
      (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 == '\0')) &&
     ((*(char *)((longlong)param_1 + 0x344) == '\0' || ((char)param_1[0x6e] != '\0')))) {
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xa4));
  }
  else {
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
  }
  local_30 = *(undefined8 *)param_2;
  if (((*(char *)((longlong)param_1 + 0x344) == '\0') ||
      (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), cVar2 == '\0')) ||
     (cVar2 = (**(code **)(*(longlong *)param_1[100] + 0x70))((longlong *)param_1[100]),
     cVar2 == '\0')) {
    local_30 = CONCAT44(local_30._4_4_ + 1,(int)local_30 + 2);
    FUN_01c04950(param_1,&local_30);
  }
  else {
    local_68 = *(longlong *)(param_1[0x62] + 0x80);
    local_24 = *(undefined4 *)(*(longlong *)(local_68 + 0x18) + 0x28);
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_48 = (**(code **)(*param_1 + 0x218))(param_1,0,*(undefined4 *)(param_1[100] + 0xa0));
    if (local_48 != 0) {
      lVar5 = FUN_01c03e40(param_1[0x6d]);
      uVar3 = FUN_00635930(*(undefined4 *)(lVar5 + 0xb4),0xffffffce);
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
      (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)(local_48 + 0x94));
      (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)(local_48 + 0x94));
      plVar6 = (longlong *)FUN_00609e10(local_20);
      plVar7 = (longlong *)FUN_00609e10(local_20);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_80);
      (**(code **)(*plVar6 + 0xa8))(plVar6,local_80);
      if (*(char *)(local_48 + 0xe0) == '\x01') {
        uVar4 = FUN_00609e10(local_20);
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1[100] + 0xa0));
        local_b0 = CONCAT31(local_b0._1_3_,2);
        local_a8 = CONCAT31(local_a8._1_3_,1);
        local_a0 = CONCAT31(local_a0._1_3_,1);
        FUN_007d6cc0(local_48,uVar4,0,0);
      }
      else {
        uVar4 = FUN_00609e10(local_20);
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1[100] + 0xa0));
        local_b0 = CONCAT31(local_b0._1_3_,1);
        FUN_007d6c70(local_48,uVar4,0,0);
      }
      uVar4 = FUN_005ffa40(param_1[0x62]);
      uVar8 = FUN_005fdb10(*(undefined8 *)(param_1[0x62] + 0x80));
      uVar9 = (**(code **)(*local_20 + 0xe8))(local_20);
      local_b8 = 0;
      local_b0 = (int)local_30 + 3;
      local_a8 = local_30._4_4_ + 2;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0x84;
      thunk_FUN_03abf120(uVar4,uVar8,0,uVar9);
    }
    FUN_00410f20(local_20);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),local_24);
    local_30 = CONCAT44(local_30._4_4_,(int)local_30 + 1);
    FUN_01c04950(param_1,&local_30);
  }
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),local_28);
  return;
}

