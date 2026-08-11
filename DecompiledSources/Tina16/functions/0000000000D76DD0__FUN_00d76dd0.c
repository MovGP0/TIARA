/* Ghidra address: 00d76dd0 */
/* Ghidra symbol: FUN_00d76dd0 */


void FUN_00d76dd0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = 0;
  iVar2 = FUN_00416db0(param_1[0x17],&LAB_00d77204);
  if (iVar2 == 0) {
    FUN_00d77cb0(param_1,&local_28);
    iVar2 = FUN_004230c0(&local_28);
    FUN_00423b10(&local_28,0xfffffffd,-(iVar2 / 2 + -1));
    local_1c = local_24 + 1;
    lVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    FUN_00d57cd0(param_2,&local_28,*(undefined4 *)(lVar5 + 0x28));
    goto LAB_00d771cf;
  }
  if (param_1[0x17] != 0) {
    bVar1 = *(byte *)(param_1 + 0x18);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        uVar7 = 0x25;
      }
      else if (bVar1 == 0) {
        uVar7 = 0x20;
      }
      else if (bVar1 == 1) {
        uVar7 = 0x21;
      }
      else if (bVar1 == 2) {
        uVar7 = 0x22;
      }
      else {
        if (bVar1 != 3) goto LAB_00d76f21;
        uVar7 = 0x24;
      }
    }
    else if (bVar1 == 5) {
      uVar7 = 0x26;
    }
    else if (bVar1 == 6) {
      uVar7 = 0x28;
    }
    else if (bVar1 == 7) {
      uVar7 = 0x29;
    }
    else if (bVar1 == 8) {
      uVar7 = 0x2a;
    }
    else {
LAB_00d76f21:
      uVar7 = 0x25;
    }
    FUN_00d77cb0(param_1,&local_28);
    local_28 = local_28 + (int)param_1[0x19];
    local_20 = local_20 - *(int *)((longlong)param_1 + 0xc4);
    local_24 = local_24 + *(int *)((longlong)param_1 + 0xcc);
    FUN_005ff880(param_2,param_1[0x23]);
    if ((char)param_1[0x1c] == '\0') {
      FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0x808080);
    }
    if (*(char *)((longlong)param_1 + 0x79) == '\x03') {
      uVar6 = FUN_005ffa40(param_2);
      FUN_00d57fd0(&local_30,uVar6,param_1[0x17],
                   (*(int *)((longlong)param_1 + 0x84) - (int)param_1[0x19]) -
                   *(int *)((longlong)param_1 + 0xc4));
    }
    else {
      FUN_00414b50(&local_30,param_1[0x17]);
    }
    uVar3 = FUN_00d75df0(param_1,uVar7);
    uVar3 = uVar3 | 0x800;
    if ((char)param_1[0x1a] == '\0') {
      FUN_00d57750(param_2,local_30,&local_28,uVar3);
    }
    else if ((char)param_1[0x1a] == '\x01') {
      uVar4 = *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x28);
      FUN_005fc860(*(longlong *)(param_2 + 0x70),0x808080);
      FUN_00423b50(&local_28,1,1);
      FUN_00d57750(param_2,local_30,&local_28,uVar3);
      FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar4);
      FUN_00423b50(&local_28,0xffffffff,0xffffffff);
      FUN_00d57750(param_2,local_30,&local_28,uVar3);
    }
  }
  if (param_1[0x1b] == 0) goto LAB_00d771cf;
  bVar1 = *(byte *)(param_1 + 0x18);
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      uVar4 = 0x25;
    }
    else if (bVar1 == 0) {
      uVar4 = 0x22;
    }
    else if (bVar1 == 1) {
      uVar4 = 0x21;
    }
    else if (bVar1 == 2) {
      uVar4 = 0x20;
    }
    else {
      if (bVar1 != 3) goto LAB_00d77158;
      uVar4 = 0x26;
    }
  }
  else if (bVar1 == 5) {
    uVar4 = 0x24;
  }
  else if (bVar1 == 6) {
    uVar4 = 0x2a;
  }
  else if (bVar1 == 7) {
    uVar4 = 0x29;
  }
  else if (bVar1 == 8) {
    uVar4 = 0x28;
  }
  else {
LAB_00d77158:
    uVar4 = 0x25;
  }
  FUN_00d77cb0(param_1,&local_28);
  local_28 = local_28 + (int)param_1[0x19];
  local_20 = local_20 - *(int *)((longlong)param_1 + 0xc4);
  local_24 = local_24 + *(int *)((longlong)param_1 + 0xcc);
  if (param_1[0x14] != 0) {
    uVar4 = FUN_006520b0(param_1[0x14],uVar4);
  }
  FUN_00d57750(param_2,param_1[0x1b],&local_28,uVar4);
LAB_00d771cf:
  FUN_00414480(&local_30);
  return;
}

