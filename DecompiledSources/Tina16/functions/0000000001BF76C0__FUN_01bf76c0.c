/* Ghidra address: 01bf76c0 */
/* Ghidra symbol: FUN_01bf76c0 */


void FUN_01bf76c0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  FUN_004d3040(param_1);
  if (*(char *)(param_1 + 0x150) == '\0') {
    plVar3 = (longlong *)FUN_01bf6e30(param_1);
    *(longlong **)(param_1 + 0x120) = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 0xe0));
    if ((((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(longlong *)(param_1 + 0x128) != 0)) &&
       (cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0x128),1), cVar2 != '\0')) {
      FUN_01bf73c0(param_1,*(undefined8 *)(param_1 + 0x128));
    }
    else {
      FUN_01bf7e10(param_1,*(undefined8 *)(param_1 + 0xe0));
    }
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0xe0) + 0x48);
      *piVar1 = *piVar1 + 1;
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x10) + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        lVar4 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar6);
        if (*(longlong *)(lVar4 + 0x18) != 0) {
          lVar4 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar6);
          lVar4 = FUN_01c03e40(*(undefined8 *)(lVar4 + 0x18));
          lVar5 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar6);
          if (lVar4 == *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x528)) {
            lVar4 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0xe0),iVar6);
            (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x318))(*(longlong **)(lVar4 + 0x18),0);
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}

