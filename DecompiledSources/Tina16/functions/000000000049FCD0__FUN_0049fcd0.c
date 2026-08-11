/* Ghidra address: 0049fcd0 */
/* Ghidra symbol: FUN_0049fcd0 */


longlong FUN_0049fcd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong local_30;
  
  local_30 = 0;
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      if (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x20) !=
          '\0') {
        lVar1 = *(longlong *)(param_1 + 8);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        local_30 = FUN_0049f000(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8)
                                ,param_2);
      }
      if (local_30 != 0) {
        return local_30;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return local_30;
}

