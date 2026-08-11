/* Ghidra address: 01c8a3c0 */
/* Ghidra symbol: FUN_01c8a3c0 */


longlong FUN_01c8a3c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x2788);
  }
  if (*(longlong *)(param_1 + 0x2780) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2);
        if ((param_2 == *(longlong *)(lVar1 + 0x10)) &&
           (lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2),
           *(char *)(lVar1 + 0x978) != '\0')) {
          return lVar1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return 0;
}

