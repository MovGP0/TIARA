/* Ghidra address: 017b2340 */
/* Ghidra symbol: FUN_017b2340 */


void FUN_017b2340(longlong *param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  param_3 = param_3 & 0xffffffff;
  if (param_2 == 0) {
    return;
  }
  uVar2 = FUN_017ad600(*(undefined4 *)((longlong)param_1 + 0x5c));
  FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar2);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)((longlong)param_1 + 0x54));
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),(int)param_1[0xb]);
  if ((int)param_1[0xb] == -2) {
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
  }
  else {
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
  }
  FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
  lVar4 = FUN_017ae270(&DAT_017ad878,1,param_2);
  *(longlong *)(lVar4 + 0x14) = param_1[3];
  *(undefined1 *)(lVar4 + 0x1c) = 0;
  *(undefined1 *)(lVar4 + 0x1d) = 0;
  cVar1 = (char)param_1[10];
  if (cVar1 == '\0') {
    FUN_017aecd0(lVar4,0,0,(int)param_1[9] - (int)param_1[3],
                 *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c));
  }
  else if (cVar1 == '\x01') {
    FUN_017ae620(lVar4,0,0,(int)param_1[9] - (int)param_1[3],
                 *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c));
  }
  else if (cVar1 == '\x02') {
    uVar6 = (uint)((int)param_1[9] < (int)param_1[3]);
    if (*(int *)((longlong)param_1 + 0x4c) < *(int *)((longlong)param_1 + 0x1c)) {
      uVar6 = uVar6 + 2;
    }
    if (uVar6 - 1 != 0xffffffff) {
      if (uVar6 - 1 < 2) {
        if ((int)param_1[0xb] != -2) {
          FUN_005fd670(*(undefined8 *)(param_2 + 0x78),5);
          uVar2 = FUN_017ad600(0);
          FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar2);
          iVar3 = (int)param_1[9] - (int)param_1[3];
          iVar5 = *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c);
          FUN_017ae880(lVar4,-iVar3,0,iVar3,iVar5 * 2,0,0,iVar3,iVar5);
          FUN_005fd670(*(undefined8 *)(param_2 + 0x78),0);
          uVar2 = FUN_017ad600(*(undefined4 *)((longlong)param_1 + 0x5c));
          FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar2);
        }
        iVar3 = (int)param_1[9] - (int)param_1[3];
        iVar5 = *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c);
        FUN_017ae720(lVar4,-iVar3,0,iVar3,iVar5 * 2,0,0,iVar3,iVar5);
        goto LAB_017b26aa;
      }
      if (uVar6 != 3) goto LAB_017b26aa;
    }
    if ((int)param_1[0xb] != -2) {
      FUN_005fd670(*(undefined8 *)(param_2 + 0x78),5);
      uVar2 = FUN_017ad600(0);
      FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar2);
      iVar3 = (int)param_1[9] - (int)param_1[3];
      iVar5 = *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c);
      FUN_017ae880(lVar4,-iVar3,0,iVar3,iVar5 * 2,iVar3,iVar5,0,0);
      FUN_005fd670(*(undefined8 *)(param_2 + 0x78),0);
      uVar2 = FUN_017ad600(*(undefined4 *)((longlong)param_1 + 0x5c));
      FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar2);
    }
    iVar3 = (int)param_1[9] - (int)param_1[3];
    iVar5 = *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c);
    FUN_017ae720(lVar4,-iVar3,0,iVar3,iVar5 * 2,iVar3,iVar5,0,0);
  }
LAB_017b26aa:
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    if ((char)param_3 != '\x01') {
      param_3 = CONCAT71((int7)(param_3 >> 8),0xf);
    }
    FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),0x808080);
    uVar2 = FUN_017ad600(0);
    FUN_005fd6d0(*(undefined8 *)(param_2 + 0x78),uVar2);
    FUN_005fd640(*(undefined8 *)(param_2 + 0x78),param_3);
    FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),0x808080);
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
    iVar3 = -1;
    local_30 = (**(code **)(*param_1 + 0x88))(param_1,0xffffffff);
    while ((int)local_30 != -0x2b67) {
      local_40[0] = FUN_00498310((int)local_30 - (int)param_1[3],
                                 local_30._4_4_ - *(int *)((longlong)param_1 + 0x1c));
      FUN_017afa90(lVar4,local_40);
      iVar3 = iVar3 + 1;
      local_30 = (**(code **)(*param_1 + 0x88))(param_1,iVar3);
    }
  }
  FUN_00410f20(lVar4);
  return;
}

