/* Ghidra address: 01c11950 */
/* Ghidra symbol: FUN_01c11950 */


void FUN_01c11950(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  int local_2c;
  
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 == '\0') goto LAB_01c11b23;
  FUN_004238d0(local_38,*param_2 + -1,0,*param_2 + 0x12,*(undefined4 *)((longlong)param_1 + 0x9c));
  if (*(char *)((longlong)param_1 + 0x344) == '\0') {
LAB_01c119ae:
    if ((*(char *)((longlong)param_1 + 0x344) == '\0') || ((char)param_1[0x6e] != '\0')) {
      cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar1 == '\0') goto LAB_01c11b23;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') goto LAB_01c119ae;
  }
  local_34 = local_34 +
             *(int *)(&DAT_01fe4648 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 2) != 0) * 4);
  local_2c = local_2c -
             *(int *)(&DAT_01fe4648 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 8) != 0) * 4);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    uVar3 = FUN_005ffa40(param_1[0x62]);
    uVar4 = (**(code **)(*param_1 + 0x228))(param_1);
    thunk_FUN_03998bad(uVar3,local_38,*(undefined4 *)(&DAT_01fe4640 + (uVar4 & 0xff) * 4),
                       (&DAT_01fe4638)[*(byte *)((longlong)param_1 + 0x35c)] | 0xf);
  }
  if (*(char *)((longlong)param_1 + 0x35c) == '\0') {
    if (*(char *)((longlong)param_1 + 0x344) == '\0') {
      lVar5 = FUN_01c03e40(param_1[0x6d]);
      lVar6 = FUN_01c03e40(param_1[0x6d]);
      uVar2 = FUN_00635840(*(undefined4 *)(lVar6 + 0xc0),0x13);
      uVar3 = FUN_0060f4c0(*(undefined4 *)(lVar5 + 0xc0),uVar2);
      FUN_005fda60(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
    }
    else {
      lVar5 = FUN_01c03e40(param_1[0x6d]);
      FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar5 + 0xc0));
    }
    FUN_00423b10(local_38,0xffffffff,0xffffffff);
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
  }
LAB_01c11b23:
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
    if (cVar1 != '\0') {
      lVar5 = FUN_01c03e40(param_1[0x6d]);
      FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar5 + 0x9c));
      local_3c = param_2[1] + 4;
      local_40 = *param_2 + 4;
      FUN_00635ce0(param_1[0x62],&local_40,2,1);
    }
  }
  FUN_01c04950(param_1,param_2);
  cVar1 = FUN_01be7540(param_1);
  if (cVar1 != '\0') {
    FUN_004238d0(local_38,1,0,0x12,*(undefined4 *)((longlong)param_1 + 0x9c));
    local_34 = local_34 +
               *(int *)(&DAT_01fe4648 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 2) != 0) * 4);
    local_2c = local_2c -
               *(int *)(&DAT_01fe4648 + (ulonglong)((*(byte *)(param_1 + 0x6c) & 8) != 0) * 4);
    if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
      uVar3 = FUN_005ffa40(param_1[0x62]);
      thunk_FUN_03998bad(uVar3,local_38,DAT_01fe4644,DAT_01fe4638 | 0xf);
    }
    if (*(char *)((longlong)param_1 + 0x35c) == '\0') {
      if (*(char *)((longlong)param_1 + 0x344) == '\0') {
        lVar5 = FUN_01c03e40(param_1[0x6d]);
        lVar6 = FUN_01c03e40(param_1[0x6d]);
        uVar2 = FUN_00635840(*(undefined4 *)(lVar6 + 0xc0),0x13);
        uVar3 = FUN_0060f4c0(*(undefined4 *)(lVar5 + 0xc0),uVar2);
        FUN_005fda60(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
      }
      else {
        lVar5 = FUN_01c03e40(param_1[0x6d]);
        uVar2 = FUN_00635840(*(undefined4 *)(lVar5 + 0xc0),0x13);
        FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar2);
      }
      FUN_00423b10(local_38,0xffffffff,0xffffffff);
      (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_38);
    }
    local_44 = *(int *)((longlong)param_1 + 0x9c) / 2 + 1;
    local_48 = 6;
    FUN_00635ce0(param_1[0x62],&local_48,2,1);
  }
  return;
}

