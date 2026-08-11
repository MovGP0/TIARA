/* Ghidra address: 00c403e0 */
/* Ghidra symbol: FUN_00c403e0 */


void FUN_00c403e0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      FUN_00c3fe50(uVar1);
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      FUN_00410f20(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

