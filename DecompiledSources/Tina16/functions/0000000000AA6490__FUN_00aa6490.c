/* Ghidra address: 00aa6490 */
/* Ghidra symbol: FUN_00aa6490 */


void FUN_00aa6490(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 700) == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x188);
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_00a438f8);
    cVar3 = '\0';
    iVar5 = 0;
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x18);
      cVar3 = *(char *)(lVar2 + 0x9b);
      iVar5 = 0;
      if (cVar3 != '\0') {
        iVar5 = *(int *)(lVar2 + 0x8c);
      }
    }
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x1c0) + 0x10);
    iVar4 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x1c0),iVar4);
        cVar1 = FUN_004113d0(lVar2,&PTR_FUN_00a438f8);
        if ((cVar1 != '\0') && (*(char *)(*(longlong *)(lVar2 + 0x18) + 0xcc) != '\0')) {
          FUN_00a08900(*(longlong *)(lVar2 + 0x18),*(undefined8 *)(param_1 + 0xc0));
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if ((cVar3 != '\0') &&
       (iVar5 != *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x18) + 0x8c))) {
      (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x180))(*(longlong **)(param_1 + 0xc0));
    }
    FUN_00742ed0(*(undefined8 *)(param_1 + 0x228),0x28);
  }
  return;
}

