/* Ghidra address: 01a5f250 */
/* Ghidra symbol: FUN_01a5f250 */


void FUN_01a5f250(longlong param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  iVar3 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
  *(double *)(param_1 + 0x60) =
       (double)iVar3 / (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14));
  iVar3 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
  *(double *)(param_1 + 0x68) =
       (double)iVar3 / (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18));
  uVar2 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
  *(undefined2 *)(param_1 + 0x70) = uVar2;
  return;
}

