/* Ghidra address: 00949080 */
/* Ghidra symbol: FUN_00949080 */


void FUN_00949080(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(int *)(*(longlong *)(param_1 + 0x110) + 0x10) - 1;
  while (-1 < (int)uVar3) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    if (*(uint *)(lVar2 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8);
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    FUN_00599670(*(longlong *)(param_1 + 0x110) + 8,uVar3,5);
    uVar3 = uVar3 - 1;
    FUN_00410f20(lVar2);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x110) + 0x10);
    if (iVar1 <= (int)uVar3) {
      uVar3 = iVar1 - 1;
    }
  }
  return;
}

