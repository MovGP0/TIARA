/* Ghidra address: 004d4ed0 */
/* Ghidra symbol: FUN_004d4ed0 */


void FUN_004d4ed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x10);
  uVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x78);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      if (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) == param_2) {
        *(undefined8 *)(param_2 + 0x18) = 0;
        FUN_00599670(*(longlong *)(param_1 + 0x78) + 8,uVar2,5);
        return;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

