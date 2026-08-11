/* Ghidra address: 00dde5f0 */
/* Ghidra symbol: FUN_00dde5f0 */


void FUN_00dde5f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x490);
  if (*(longlong *)(lVar1 + 0x68) != 0) {
    iVar4 = *(int *)(*(longlong *)(lVar1 + 0x68) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x68),iVar3);
        FUN_00410f20(uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(*(undefined8 *)(lVar1 + 0x68));
    *(undefined8 *)(lVar1 + 0x68) = 0;
  }
  return;
}

