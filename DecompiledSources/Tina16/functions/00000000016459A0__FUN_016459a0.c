/* Ghidra address: 016459a0 */
/* Ghidra symbol: FUN_016459a0 */


void FUN_016459a0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),0);
  while ((iVar2 <= *(int *)(param_1 + 0x20) && (*(int *)(lVar1 + 0x60) == -1))) {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),iVar2);
    iVar2 = iVar2 + 1;
  }
  *(undefined4 *)(param_3 + 0x8c) = *(undefined4 *)(lVar1 + 0x60);
  return;
}

