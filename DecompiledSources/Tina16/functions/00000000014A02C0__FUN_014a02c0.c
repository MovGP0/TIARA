/* Ghidra address: 014a02c0 */
/* Ghidra symbol: FUN_014a02c0 */


void FUN_014a02c0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(longlong *)(param_1 + 0x760) == 0) ||
     (cVar3 = FUN_01773f40(*(longlong *)(param_1 + 0x760),0x400), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    lVar1 = *(longlong *)(param_1 + 0x730);
    iVar4 = FUN_006decb0();
    iVar6 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar5 = FUN_006df500(*(undefined8 *)(lVar1 + 0x550),iVar6);
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          FUN_00410f20(*(undefined8 *)(lVar5 + 0x18));
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x760) + 0x180) = 0;
  }
  *param_3 = 2;
  return;
}

