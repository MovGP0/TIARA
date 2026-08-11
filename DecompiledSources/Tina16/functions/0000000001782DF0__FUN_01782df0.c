/* Ghidra address: 01782df0 */
/* Ghidra symbol: FUN_01782df0 */


void FUN_01782df0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_004b3260(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a0));
  iVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0068bd10(*(undefined8 *)(param_1 + 0x6d0),iVar2,1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x4a0));
  return;
}

