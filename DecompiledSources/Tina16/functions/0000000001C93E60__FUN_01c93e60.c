/* Ghidra address: 01c93e60 */
/* Ghidra symbol: FUN_01c93e60 */


void FUN_01c93e60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = FUN_01c87d20(param_1);
  if (cVar1 == '\0') {
    FUN_01c93e10(param_1,param_2);
  }
  else if (*(char *)(param_1 + 0x1890) == '\0') {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar4);
        iVar2 = FUN_006d5120(*(undefined8 *)(param_1 + 0x1350));
        if (*(int *)(lVar3 + 0x38) == iVar2) {
          FUN_01c8ab30(param_1,*(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x10));
          return;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

