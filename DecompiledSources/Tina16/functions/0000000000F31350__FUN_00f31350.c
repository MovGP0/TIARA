/* Ghidra address: 00f31350 */
/* Ghidra symbol: FUN_00f31350 */


undefined8 FUN_00f31350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = FUN_00f309b0(&LAB_00f23b78,1);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  uVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(uint *)(lVar1 + 0x10) <= uVar4) {
        FUN_00594f90();
      }
      uVar3 = FUN_00f301d0(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar4 * 8));
      FUN_00f30e00(uVar2,uVar3);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar2;
}

