/* Ghidra address: 0064d660 */
/* Ghidra symbol: FUN_0064d660 */


void FUN_0064d660(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_2c;
  
  if (param_2 != param_3) {
    *(float *)(param_1 + 0x61) = (*(float *)(param_1 + 0x61) * (float)param_2) / (float)param_3;
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      bVar2 = (**(code **)(*param_1 + 0x110))(param_1);
    }
    else {
      bVar2 = *(byte *)((longlong)param_1 + 0xfc);
    }
    if ((bVar2 & 1) == 0) {
      local_2c = (int)param_1[0x12];
    }
    else {
      local_2c = thunk_FUN_03f3ed25((int)param_1[0x12],param_2,param_3);
    }
    if ((bVar2 & 2) == 0) {
      iVar3 = *(int *)((longlong)param_1 + 0x94);
    }
    else {
      iVar3 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x94),param_2,param_3);
    }
    if (((bVar2 & 4) == 0) || ((*(uint *)(param_1 + 0x14) & 0x100) != 0)) {
      iVar4 = (int)param_1[0x13];
    }
    else if ((bVar2 & 1) == 0) {
      iVar4 = thunk_FUN_03f3ed25((int)param_1[0x13],param_2,param_3);
    }
    else {
      iVar4 = thunk_FUN_03f3ed25((int)param_1[0x12] + (int)param_1[0x13],param_2,param_3);
      iVar4 = iVar4 - local_2c;
    }
    if (((bVar2 & 8) == 0) || ((*(uint *)(param_1 + 0x14) & 0x200) != 0)) {
      iVar5 = *(int *)((longlong)param_1 + 0x9c);
    }
    else if ((bVar2 & 2) == 0) {
      iVar5 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x9c),param_2,param_3);
    }
    else {
      iVar5 = thunk_FUN_03f3ed25(*(int *)((longlong)param_1 + 0x94) +
                                 *(int *)((longlong)param_1 + 0x9c),param_2,param_3);
      iVar5 = iVar5 - iVar3;
    }
    FUN_0064d230(param_1,param_2,param_3);
    FUN_0064d2e0(param_1,param_2,param_3);
    (**(code **)(*param_1 + 400))(param_1,local_2c,iVar3,iVar4,iVar5);
    if ((*(char *)((longlong)param_1 + 0xab) == '\0') && ((bVar2 & 0x10) != 0)) {
      lVar1 = param_1[0x17];
      uVar6 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),param_2,param_3
                                );
      FUN_005fcc80(lVar1,uVar6);
    }
    if ((bVar2 & 5) != 0) {
      uVar6 = thunk_FUN_03f3ed25((int)param_1[0x5d],param_2,param_3);
      *(undefined4 *)(param_1 + 0x5d) = uVar6;
    }
    if ((bVar2 & 10) != 0) {
      uVar6 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x2ec),param_2,param_3);
      *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar6;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  if (param_4 != '\0') {
    *(int *)((longlong)param_1 + 0x2cc) = param_2;
  }
  return;
}

