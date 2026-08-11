/* Ghidra address: 008f81a0 */
/* Ghidra symbol: FUN_008f81a0 */


void FUN_008f81a0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + -4) >> 1;
  }
  while (*(int *)(param_1 + 0xc) < (int)(*(int *)(param_1 + 8) + uVar3)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0xc) / 4;
    FUN_00416660(param_1 + 0x10,*(undefined4 *)(param_1 + 0xc));
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar3;
  iVar1 = 1;
  for (uVar2 = uVar3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined2 *)
     (*(longlong *)(param_1 + 0x10) + -2 +
     (longlong)(int)((*(int *)(param_1 + 8) - uVar3) + iVar1) * 2) =
         *(undefined2 *)(param_2 + -2 + (longlong)iVar1 * 2);
    iVar1 = iVar1 + 1;
  }
  return;
}

