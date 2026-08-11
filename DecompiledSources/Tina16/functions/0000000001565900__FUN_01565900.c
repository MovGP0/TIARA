/* Ghidra address: 01565900 */
/* Ghidra symbol: FUN_01565900 */


void FUN_01565900(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong local_90;
  ushort local_3a [5];
  
  iVar6 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar6);
      plVar2 = *(longlong **)(lVar5 + 8);
      iVar1 = *(int *)(lVar5 + 0x14);
      FUN_01d03160(plVar2);
      if (*(char *)(*(longlong *)(lVar5 + 0x88) + 8) == '\0') {
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_01d3f210(*(undefined8 *)(*(longlong *)(lVar5 + 0x88) + 0x10));
      }
      if (cVar3 != '\0') {
        lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x88) + 0x10) + 0x1a8);
        if (*(int *)(lVar5 + 0x158) == iVar1) {
          uVar4 = (**(code **)(*plVar2 + 0x210))(plVar2,0);
          *(undefined4 *)(lVar5 + 0x160) = uVar4;
        }
        else if (*(int *)(lVar5 + 0x15c) == iVar1) {
          uVar4 = (**(code **)(*plVar2 + 0x210))(plVar2,0);
          *(undefined4 *)(lVar5 + 0x164) = uVar4;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar6);
      plVar2 = *(longlong **)(lVar5 + 8);
      if (*(char *)(*(longlong *)(lVar5 + 0x88) + 8) == '\0') {
        cVar3 = '\0';
      }
      else {
        cVar3 = FUN_01d3f210(*(undefined8 *)(*(longlong *)(lVar5 + 0x88) + 0x10));
      }
      if ((cVar3 != '\0') &&
         (lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x88) + 0x10) + 0x1a8),
         *(int *)(lVar5 + 0x16c) == 1)) {
        local_3a[0] = 0;
        FUN_01d3d920(plVar2,9,0,local_3a);
        if ((*(int *)(lVar5 + 0x15c) != -1) && (*(int *)(lVar5 + 0x164) != -1)) {
          (**(code **)(*plVar2 + 0x2d0))(plVar2,local_3a[0]);
          *(undefined2 *)(local_90 + 0x1f) = *(undefined2 *)(lVar5 + 0x164);
        }
        if ((*(int *)(lVar5 + 0x158) != -1) && (*(int *)(lVar5 + 0x160) != -1)) {
          FUN_01d3d920(plVar2,9,local_3a[0] + 1,local_3a);
          (**(code **)(*plVar2 + 0x2d0))(plVar2,local_3a[0]);
          *(undefined2 *)(local_90 + 0x1f) = *(undefined2 *)(lVar5 + 0x160);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

