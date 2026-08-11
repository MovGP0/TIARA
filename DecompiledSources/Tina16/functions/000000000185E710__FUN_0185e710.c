/* Ghidra address: 0185e710 */
/* Ghidra symbol: FUN_0185e710 */


void FUN_0185e710(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_3c [3];
  
  FUN_0185e8f0(param_1);
  FUN_0185eaa0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x48);
  iVar3 = FUN_0185eb30(param_1);
  bVar2 = false;
  iVar6 = iVar3;
  while ((iVar3 != (int)plVar1[0x1203] && (!bVar2))) {
    if (iVar3 == *(int *)((longlong)plVar1 + 0x9014)) {
      *(int *)(plVar1 + 0x1204) = *(int *)(*plVar1 + 0x20) + 1;
      *(int *)((longlong)plVar1 + 0x902c) = (int)plVar1[0x1203] + 1;
      *(int *)(plVar1 + 0x1206) = 1 << (*(byte *)(plVar1 + 0x1204) & 0x1f);
      while (iVar3 == *(int *)((longlong)plVar1 + 0x9014)) {
        iVar3 = FUN_0185eb30(param_1);
      }
      if (iVar3 == (int)plVar1[0x1203]) {
        FUN_01860ba0(0xd);
      }
      if (*(int *)((longlong)plVar1 + 0x902c) <= iVar3) {
        iVar3 = 0;
      }
      FUN_0185ecd0(param_1,iVar3);
      iVar6 = iVar3;
    }
    else {
      local_3c[0] = iVar3;
      if (iVar3 < *(int *)((longlong)plVar1 + 0x902c)) {
        FUN_0185ecf0(param_1,local_3c);
        if (*(int *)((longlong)plVar1 + 0x902c) <= (int)plVar1[0x1206]) {
          FUN_0185ef90(param_1,iVar6,local_3c[0]);
          iVar6 = iVar3;
        }
        FUN_0185f0f0(param_1);
      }
      else {
        iVar7 = iVar6;
        if (iVar3 != *(int *)((longlong)plVar1 + 0x902c)) {
          FUN_01860ba0(0xd);
        }
        for (; *(int *)((longlong)plVar1 + 0x901c) < iVar7;
            iVar7 = *(int *)((longlong)plVar1 + (longlong)iVar7 * 4 + 0x10)) {
        }
        if (*(int *)((longlong)plVar1 + 0x902c) <= (int)plVar1[0x1206]) {
          FUN_0185ef90(param_1,iVar6,iVar7);
        }
        FUN_0185f0f0(param_1);
        FUN_0185ecf0(param_1,local_3c);
        iVar6 = iVar3;
      }
    }
    FUN_0185f130(param_1);
    lVar4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
    lVar5 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
    if (lVar4 < lVar5) {
      iVar3 = FUN_0185eb30(param_1);
    }
    else {
      bVar2 = true;
    }
    *(undefined1 *)((longlong)plVar1 + 0x9034) = 0;
  }
  FUN_0185ea70(param_1);
  return;
}

