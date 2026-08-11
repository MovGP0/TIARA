/* Ghidra address: 004be8e0 */
/* Ghidra symbol: FUN_004be8e0 */


void FUN_004be8e0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
    uVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x60);
        if (*(uint *)(lVar1 + 0x10) <= uVar2) {
          FUN_00594f90();
        }
        FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8));
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}

