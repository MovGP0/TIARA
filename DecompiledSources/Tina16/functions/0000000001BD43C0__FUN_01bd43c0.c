/* Ghidra address: 01bd43c0 */
/* Ghidra symbol: FUN_01bd43c0 */


void FUN_01bd43c0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [12];
  undefined8 local_28;
  longlong local_20;
  
  local_70 = auStack_98;
  if (*(byte *)((longlong)param_1 + 0x36c) < 2) {
    local_50 = (int)param_1[0x13] / 2 - (int)param_1[0x6d] / 2;
    uStack_4c = 3;
    local_28 = CONCAT44(3,local_50);
    local_48 = local_50;
  }
  else if ((byte)(*(byte *)((longlong)param_1 + 0x36c) - 2) < 2) {
    local_44 = (int)param_1[0x13] / 2 - (int)param_1[0x6d];
    uStack_40 = 3;
    local_28 = CONCAT44(3,local_44);
    local_3c = local_44;
  }
  local_20 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  uVar3 = FUN_005ffa40(param_1[0x62]);
  FUN_005ffb10(local_20,uVar3);
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') {
      uVar3 = FUN_01c07120(param_1);
      lVar5 = FUN_01c03e40(uVar3);
      FUN_005fd4e0(*(undefined8 *)(local_20 + 0x78),*(undefined4 *)(lVar5 + 0x94));
    }
    else {
      uVar3 = FUN_01c07120(param_1);
      lVar5 = FUN_01c03e40(uVar3);
      FUN_005fd4e0(*(undefined8 *)(local_20 + 0x78),*(undefined4 *)(lVar5 + 0x9c));
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 0x200))(plVar4,local_34,5);
    }
    else if (*(char *)((longlong)param_1 + 0x361) == '\0') {
      if (*(char *)((longlong)param_1 + 0x363) == '\0') {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 0x200))(plVar4,local_34,2);
      }
      else {
        plVar4 = (longlong *)FUN_00781840();
        (**(code **)(*plVar4 + 0x200))(plVar4,local_34,3);
      }
    }
    else {
      plVar4 = (longlong *)FUN_00781840();
      (**(code **)(*plVar4 + 0x200))(plVar4,local_34,4);
    }
    uVar3 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar3,local_34,2,&local_38);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_00781840();
        local_38 = FUN_007793c0(uVar3,0xff000011);
      }
      else {
        uVar3 = FUN_00781840();
        local_38 = FUN_007793c0(uVar3,0xff000012);
      }
    }
    FUN_005fd4e0(*(undefined8 *)(local_20 + 0x78),local_38);
  }
  lVar5 = param_1[0xf];
  cVar1 = FUN_004113d0(lVar5,&PTR_FUN_01bd2b58);
  if (cVar1 != '\0') {
    iVar2 = FUN_01bd7140(lVar5);
    if (0 < iVar2) {
      FUN_00635c00(local_20,*(undefined1 *)((longlong)param_1 + 0x36c),&local_28,(int)param_1[0x6d])
      ;
    }
  }
  local_60 = (int)param_1[0x13] / 2 - (int)param_1[0x6d];
  local_5c = *(int *)((longlong)param_1 + 0x9c) + -8;
  local_58 = local_5c;
  local_54 = local_60;
  FUN_00635a10(local_20,(&DAT_01fe0388)[*(byte *)((longlong)param_1 + 0xad)],&local_60,2);
  FUN_005ffb10(local_20,0);
  FUN_00410f20(local_20);
  return;
}

