/* Ghidra address: 01c0d550 */
/* Ghidra symbol: FUN_01c0d550 */


void FUN_01c0d550(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined1 *local_80;
  int local_74;
  int local_70;
  int local_6c;
  longlong local_68;
  longlong local_60;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48;
  int local_40 [4];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_80 = auStack_d8;
  plVar1 = (longlong *)param_1[100];
  puVar2 = auStack_d8;
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0x70))(plVar1);
    puVar2 = local_80;
    if (cVar3 == '\0') {
      uVar4 = (**(code **)(*param_1 + 0xd0))(param_1);
      cVar3 = FUN_004113d0(uVar4,&PTR_FUN_0061c2b8);
      puVar2 = local_80;
      if (cVar3 != '\0') {
        lVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
        puVar2 = local_80;
        if (*(char *)(lVar5 + 0xd8) != '\0') {
          cVar3 = (**(code **)(*param_1 + 0x228))(param_1);
          if (cVar3 != '\0') {
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
          lVar5 = FUN_01c03e40(param_1[0x6d]);
          FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x9c));
          local_50 = param_2[1] + 3;
          local_54 = *param_2 + 6;
          local_4c = local_50;
          FUN_00635ce0(param_1[0x62],&local_54,2,1);
          goto LAB_01c0dbae;
        }
      }
    }
  }
  local_80 = puVar2;
  cVar3 = (**(code **)(*param_1 + 0x228))(param_1);
  if (cVar3 != '\0') {
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
  if (*(char *)((longlong)param_1 + 0x344) == '\0') {
LAB_01c0d898:
    if ((*(char *)((longlong)param_1 + 0x344) != '\0') && ((char)param_1[0x6e] == '\0'))
    goto LAB_01c0d8b8;
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0x80));
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar3 == '\0') goto LAB_01c0d898;
LAB_01c0d8b8:
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
  }
  local_30 = *(undefined8 *)param_2;
  if (*(char *)((longlong)param_1 + 0x344) == '\0') {
LAB_01c0db6a:
    local_30 = CONCAT44(local_30._4_4_ + 1,(int)local_30 + 2);
    FUN_01c04950(param_1,&local_30);
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar3 == '\0') goto LAB_01c0db6a;
    cVar3 = (**(code **)(*(longlong *)param_1[100] + 0x70))((longlong *)param_1[100]);
    if (cVar3 == '\0') goto LAB_01c0db6a;
    local_68 = *(longlong *)(param_1[0x62] + 0x80);
    local_24 = *(undefined4 *)(*(longlong *)(local_68 + 0x18) + 0x28);
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),0xff000010);
    local_48 = (**(code **)(*param_1 + 0x218))(param_1,0,*(undefined4 *)(param_1[100] + 0xa0));
    cVar3 = FUN_007d5cb0(local_48,*(undefined4 *)(param_1[100] + 0xa0),local_20);
    if (cVar3 != '\0') {
      (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)(local_48 + 0x94));
      (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)(local_48 + 0x94));
      uVar4 = FUN_005ffa40(param_1[0x62]);
      uVar6 = FUN_005fdb10(*(undefined8 *)(param_1[0x62] + 0x80));
      uVar7 = (**(code **)(*local_20 + 0xe8))(local_20);
      local_b8 = 0;
      local_b0 = (int)local_30 + 3;
      local_a8 = local_30._4_4_ + 2;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0x84;
      thunk_FUN_03abf120(uVar4,uVar6,0,uVar7);
    }
    FUN_00410f20(local_20);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),local_24);
    local_30 = CONCAT44(local_30._4_4_,(int)local_30 + 1);
    FUN_01c04950(param_1,&local_30);
  }
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),local_28);
LAB_01c0dbae:
  cVar3 = FUN_01be7540(param_1);
  if (cVar3 != '\0') {
    local_b8 = CONCAT44(local_b8._4_4_,*(int *)((longlong)param_1 + 0x9c) + -1);
    FUN_004238d0(local_40,1,1,0x12);
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xb4));
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_40);
    uVar4 = FUN_01c07120(param_1);
    lVar5 = FUN_01c03e40(uVar4);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x84));
    FUN_005fdf50(param_1[0x62],local_40);
    lVar5 = FUN_01c03e40(param_1[0x6d]);
    FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x9c));
    local_70 = *(int *)((longlong)param_1 + 0x9c) / 2 + -1;
    local_74 = local_40[0] + 5;
    local_6c = local_70;
    FUN_00635ce0(param_1[0x62],&local_74,2,1);
  }
  return;
}

