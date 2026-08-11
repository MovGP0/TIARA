/* Ghidra address: 016f1b60 */
/* Ghidra symbol: FUN_016f1b60 */


void FUN_016f1b60(longlong param_1,undefined1 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x4f0) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      if ((param_3 == 0xffffffff) || (uVar2 != param_3)) {
        lVar1 = *(longlong *)(param_1 + 0x4f0);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x20) =
             param_2;
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x4f0);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x20) =
             1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

