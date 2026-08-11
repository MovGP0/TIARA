/* Ghidra address: 0049fc40 */
/* Ghidra symbol: FUN_0049fc40 */


undefined8 FUN_0049fc40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  uVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      if (*(uint *)(lVar1 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      uVar2 = FUN_0049ee10(&DAT_004984f8,
                           *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8),
                           uVar2,param_2);
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar2;
}

