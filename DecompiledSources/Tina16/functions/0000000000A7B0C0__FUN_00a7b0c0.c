/* Ghidra address: 00a7b0c0 */
/* Ghidra symbol: FUN_00a7b0c0 */


void FUN_00a7b0c0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0xa8) = 0;
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb8));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xb0) + 0x10) + -1;
    uVar2 = FUN_00a7b020(param_1,iVar1);
    FUN_00410f20(uVar2);
    FUN_004ae870(*(undefined8 *)(param_1 + 0xb0),iVar1);
  }
  return;
}

