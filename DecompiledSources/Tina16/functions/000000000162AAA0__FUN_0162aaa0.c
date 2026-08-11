/* Ghidra address: 0162aaa0 */
/* Ghidra symbol: FUN_0162aaa0 */


void FUN_0162aaa0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x78),iVar3);
      if ((*(char *)(param_3 + 10) != '\0') &&
         (cVar1 = FUN_016262d0(param_3,*(undefined8 *)(lVar2 + 0x18)), cVar1 != '\0')) {
        if (*(int *)(lVar2 + 8) == 0) {
          *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 8) = param_2;
        }
        if (*(int *)(lVar2 + 8) != 1) {
          return;
        }
        *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x10) = param_2;
        return;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

