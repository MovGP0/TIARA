/* Ghidra address: 00954830 */
/* Ghidra symbol: FUN_00954830 */


void FUN_00954830(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_40 [2];
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      if (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x28) !=
          '\0') {
        lVar1 = *(longlong *)(param_1 + 0x80);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
        local_40[0] = 0;
        FUN_005952e0(*(longlong *)(param_1 + 0x80) + 8,local_40,uVar2);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_009a1200(*(undefined8 *)(param_1 + 0x80));
  lVar1 = *(longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(lVar1 + 0x10);
  if (iVar3 < *(int *)(lVar1 + 0x10)) {
    FUN_0059b550(lVar1 + 8,iVar3);
  }
  FUN_0059b400(lVar1 + 8,(longlong)iVar3);
  return;
}

