/* Ghidra address: 01c05af0 */
/* Ghidra symbol: FUN_01c05af0 */


void FUN_01c05af0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 local_60 [2];
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  
  local_68 = 0;
  local_60[0] = 0;
  (**(code **)(*param_1 + 0xe0))(param_1,local_38);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) {
    if ((*(char *)((longlong)param_1 + 0x35c) == '\0') ||
       (*(char *)((longlong)param_1 + 0x344) != '\0')) {
      lVar3 = 0;
    }
    else {
      lVar3 = 1;
    }
    FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),(&DAT_01fe3c14)[lVar3]);
  }
  else {
    FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),
                 (&DAT_01fe3c14)[*(byte *)((longlong)param_1 + 0x35c)]);
  }
  lVar3 = param_1[100];
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x48) == 0x20000000)) {
    uVar5 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar5);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0x8c));
  }
  else {
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),*(undefined4 *)(lVar3 + 0x48));
  }
  (**(code **)(*param_1 + 0x1f0))(param_1,local_38);
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x208))(param_1,2);
    goto LAB_01c05f2f;
  }
  cVar1 = (**(code **)(*param_1 + 0x1c0))(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_01c06f30(param_1);
    if (cVar1 == '\0') goto LAB_01c05c7c;
  }
  else {
LAB_01c05c7c:
    local_4c = FUN_006520b0(param_1,0);
    local_4c = local_4c | 0x100;
    local_48 = *(undefined8 *)((longlong)param_1 + 0x34c);
    uStack_40 = *(undefined8 *)((longlong)param_1 + 0x354);
    FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),1);
    uVar5 = FUN_01c07120(param_1);
    lVar3 = FUN_01c03e40(uVar5);
    FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),*(undefined4 *)(lVar3 + 0x9c));
    plVar4 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1[0x62] + 0x70) + 0x10))
                (*(longlong **)(param_1[0x62] + 0x70),param_1[0x17]);
    }
    plVar4 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
        if ((cVar1 != '\0') || (*(char *)((longlong)param_1 + 0x344) == '\0')) goto LAB_01c05dec;
      }
      if (*(char *)((longlong)param_1 + 0x344) != '\0') {
        uVar5 = FUN_01c07120(param_1);
        lVar3 = FUN_01c03e40(uVar5);
        FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),*(undefined4 *)(lVar3 + 0xb0));
      }
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        uVar5 = FUN_01c07120(param_1);
        lVar3 = FUN_01c03e40(uVar5);
        FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),*(undefined4 *)(lVar3 + 0x94));
      }
    }
LAB_01c05dec:
    plVar4 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
        if ((cVar1 != '\0') || (*(char *)((longlong)param_1 + 0x344) == '\0')) {
          FUN_0064dd90(param_1,&local_68);
          uVar5 = FUN_01c07120(param_1);
          lVar3 = FUN_01c03e40(uVar5);
          uVar5 = FUN_01c07120(param_1);
          lVar2 = FUN_01c03e40(uVar5);
          (**(code **)(*param_1 + 0x200))
                    (param_1,&local_48,local_4c,local_68,*(undefined4 *)(lVar3 + 0x94),
                     *(undefined4 *)(lVar2 + 0x98));
          goto LAB_01c05ecb;
        }
      }
    }
    FUN_0064dd90(param_1,local_60);
    (**(code **)(*param_1 + 0x1f8))(param_1,&local_48,&local_4c,local_60[0]);
  }
LAB_01c05ecb:
  uVar5 = FUN_01c07120(param_1);
  cVar1 = FUN_01c019e0(uVar5);
  if (cVar1 != '\0') {
    uVar5 = FUN_01c07120(param_1);
    lVar3 = FUN_01c019a0(uVar5);
    if (*(char *)(lVar3 + 0x49) == '\0') {
      (**(code **)(*param_1 + 0x1e8))(param_1,(longlong)param_1 + 0x32c);
    }
    else {
      (**(code **)(*param_1 + 0x1e0))(param_1,(longlong)param_1 + 0x32c);
    }
  }
LAB_01c05f2f:
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    lVar3 = FUN_01c07120(param_1);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FUN_01c07120(param_1);
      cVar1 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0xe0))(param_1,local_38);
        FUN_00423b50(local_38,1,1);
        local_30 = local_30 + -1;
        local_2c = local_2c + -1;
        FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),1);
        uVar5 = FUN_01c07120(param_1);
        lVar3 = FUN_01c03e40(uVar5);
        FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),*(undefined4 *)(lVar3 + 0xbc));
        FUN_005fd6d0(*(undefined8 *)(param_1[0x62] + 0x78),2);
        cVar1 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8);
        if (cVar1 == '\0') {
          (**(code **)(*param_1 + 0x1d0))(param_1,local_38);
        }
      }
    }
  }
  if ((char)param_1[0x65] != '\0') {
    (**(code **)(*param_1 + 0x1d8))(param_1);
  }
  FUN_00414560(&local_68,2);
  return;
}

