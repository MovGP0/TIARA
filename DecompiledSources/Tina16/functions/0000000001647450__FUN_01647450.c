/* Ghidra address: 01647450 */
/* Ghidra symbol: FUN_01647450 */


void FUN_01647450(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      if (*(longlong *)(lVar1 + 0x88) == 0) {
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x80),lVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004aec30(*(undefined8 *)(param_1 + 0x18),0,*(undefined8 *)(param_1 + 0x20));
  return;
}

