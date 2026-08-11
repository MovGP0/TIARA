/* Ghidra address: 008b8510 */
/* Ghidra symbol: FUN_008b8510 */


void FUN_008b8510(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1;
    while (-1 < iVar3) {
      lVar2 = FUN_008b8440(param_1,iVar3);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      FUN_00599670(*(longlong *)(param_1 + 8) + 8,iVar3,5);
      iVar3 = iVar3 + -1;
      FUN_00410f20(lVar2);
      if (*(longlong *)(param_1 + 8) == 0) {
        return;
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
      if (iVar1 <= iVar3) {
        iVar3 = iVar1 + -1;
      }
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

