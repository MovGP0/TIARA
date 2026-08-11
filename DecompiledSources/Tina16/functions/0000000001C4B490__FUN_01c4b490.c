/* Ghidra address: 01c4b490 */
/* Ghidra symbol: FUN_01c4b490 */


void FUN_01c4b490(longlong param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4e0);
  if ((param_2 < iVar2 + -1) && (iVar2 = iVar2 + -2, param_2 <= iVar2)) {
    iVar4 = (param_2 - iVar2) + -1;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x6b0);
      uVar3 = FUN_0084e3c0(uVar1,iVar2);
      FUN_0084e4d0(uVar1,iVar2 + 1,uVar3);
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  return;
}

