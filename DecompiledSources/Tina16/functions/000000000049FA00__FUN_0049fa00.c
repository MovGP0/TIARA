/* Ghidra address: 0049fa00 */
/* Ghidra symbol: FUN_0049fa00 */


void FUN_0049fa00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(longlong *)(param_1 + 0x10) != param_2) {
    *(longlong *)(param_1 + 0x10) = param_2;
    iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
    uVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 8);
        if (*(uint *)(lVar1 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
        uVar2 = FUN_0049f120(lVar1,param_2);
        *(undefined1 *)(lVar1 + 0x20) = uVar2;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

