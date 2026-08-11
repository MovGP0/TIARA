/* Ghidra address: 01497dd0 */
/* Ghidra symbol: FUN_01497dd0 */


void FUN_01497dd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_30;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 3000) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 3000),iVar3);
      plVar1 = *(longlong **)(lVar2 + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2d0))(plVar1,*(undefined4 *)(lVar2 + 0x18),&local_30);
        if (*(char *)(lVar2 + 0x1c) == '\x03') {
          FUN_01d3a010(local_30,3,*(undefined8 *)(lVar2 + 0x20));
        }
        if (*(char *)(lVar2 + 0x1c) == '\x06') {
          FUN_01d3a010(local_30,6,*(undefined8 *)(lVar2 + 0x20));
        }
        FUN_01d0a340(*(undefined8 *)(lVar2 + 8),0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

