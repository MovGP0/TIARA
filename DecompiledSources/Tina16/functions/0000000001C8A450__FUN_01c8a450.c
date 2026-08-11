/* Ghidra address: 01c8a450 */
/* Ghidra symbol: FUN_01c8a450 */


longlong FUN_01c8a450(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x2788);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x2780) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
      iVar2 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),iVar2);
          if (*(longlong *)(lVar1 + 0x28) == 0) {
            return *(longlong *)(lVar1 + 8);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}

