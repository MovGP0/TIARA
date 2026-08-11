/* Ghidra address: 01365360 */
/* Ghidra symbol: FUN_01365360 */


void FUN_01365360(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10) + -1;
  if (-1 < iVar2) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),iVar2);
      FUN_004095f0(uVar1);
      FUN_004ae870(*(undefined8 *)(param_1 + 0x28),iVar2);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  FUN_004aee80(*(undefined8 *)(param_1 + 0x28));
  return;
}

