/* Ghidra address: 010b30a0 */
/* Ghidra symbol: FUN_010b30a0 */


void FUN_010b30a0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      FUN_010af2a0(uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

