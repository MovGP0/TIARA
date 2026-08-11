/* Ghidra address: 010b21e0 */
/* Ghidra symbol: FUN_010b21e0 */


void FUN_010b21e0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x38) = param_2;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      *(undefined1 *)(lVar1 + 0x48) = param_2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

