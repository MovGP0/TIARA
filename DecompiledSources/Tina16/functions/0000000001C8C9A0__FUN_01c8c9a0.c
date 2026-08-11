/* Ghidra address: 01c8c9a0 */
/* Ghidra symbol: FUN_01c8c9a0 */


void FUN_01c8c9a0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if ((*(char *)(param_1 + 0x57) == '\0') &&
     ((((*(longlong *)(param_2 + 0x28) == 0 || (*(longlong *)(param_2 + 0x20) == 0)) ||
       (*(char *)(*(longlong *)(param_2 + 0x20) + 0x70) != '\x02')) ||
      ((*(longlong *)(param_2 + 0x20) != *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2768) ||
       (*(char *)(param_2 + 0x978) != '\0')))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x57) = uVar4;
  if ((*(char *)(param_1 + 0x56) == '\0') &&
     ((((*(longlong *)(param_2 + 0x28) == 0 || (*(longlong *)(param_2 + 0x20) == 0)) ||
       ((cVar1 = *(char *)(*(longlong *)(param_2 + 0x20) + 0x70), cVar1 != '\x03' &&
        (cVar1 != '\x04')))) ||
      ((*(longlong *)(param_2 + 0x20) != *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2768) ||
       (*(char *)(param_2 + 0x978) != '\0')))))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x56) = uVar4;
  iVar2 = *(int *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x2780),param_2);
  FUN_004aee80(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x2780));
  FUN_00418590(param_2,&DAT_01c4d1b0);
  if (-1 < iVar2) {
    plVar5 = (longlong *)FUN_006d6380(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x1350));
    (**(code **)(*plVar5 + 0x98))(plVar5,iVar2);
    iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x2780) + 0x10);
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        lVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x2780),iVar7);
        if (iVar2 < *(int *)(lVar6 + 0x38)) {
          *(int *)(lVar6 + 0x38) = *(int *)(lVar6 + 0x38) + -1;
        }
        if (iVar2 == *(int *)(lVar6 + 0x3c)) {
          *(undefined4 *)(lVar6 + 0x3c) = uVar3;
        }
        if (iVar2 < *(int *)(lVar6 + 0x3c)) {
          *(int *)(lVar6 + 0x3c) = *(int *)(lVar6 + 0x3c) + -1;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

