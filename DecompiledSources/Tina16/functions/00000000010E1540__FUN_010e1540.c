/* Ghidra address: 010e1540 */
/* Ghidra symbol: FUN_010e1540 */


undefined8 FUN_010e1540(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (((*(longlong *)PTR_DAT_02004e40 != 0) && (lVar1 = *(longlong *)PTR_DAT_02004e40, lVar1 != 0))
     && (*(longlong *)(lVar1 + 0x2780) != 0)) {
    iVar4 = *(int *)(*(longlong *)(lVar1 + 0x2780) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x2780),iVar3);
        if (*(longlong *)(param_1 + 0x8c8) == *(longlong *)(lVar2 + 0x10)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

