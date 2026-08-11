/* Ghidra address: 004c4990 */
/* Ghidra symbol: FUN_004c4990 */


longlong FUN_004c4990(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x60) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x60);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == param_2) {
        bVar6 = true;
      }
      else if ((lVar2 == 0) || (param_2 == 0)) {
        bVar6 = false;
      }
      else {
        iVar3 = FUN_0043e420(lVar2,param_2);
        bVar6 = iVar3 == 0;
      }
      if (bVar6) {
        return lVar1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

