/* Ghidra address: 018be110 */
/* Ghidra symbol: FUN_018be110 */


void FUN_018be110(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  double dVar3;
  
  lVar2 = FUN_0040c840(*(double *)(param_1 + 0x48) / *(double *)(param_1 + 0x58));
  dVar3 = (double)FUN_0040c850((double)lVar2 * *(double *)(param_1 + 0x58) -
                               *(double *)(param_1 + 0x48));
  if (11.0 <= dVar3) {
    **(int **)(param_1 + 0x68) = (int)lVar2 + 1;
  }
  else {
    uVar1 = FUN_0040c770(*(double *)(param_1 + 0x48) / *(double *)(param_1 + 0x58));
    **(undefined4 **)(param_1 + 0x68) = uVar1;
  }
  lVar2 = FUN_0040c840(*(double *)(param_1 + 0x50) / *(double *)(param_1 + 0x60));
  dVar3 = (double)FUN_0040c850((double)lVar2 * *(double *)(param_1 + 0x60) -
                               *(double *)(param_1 + 0x50));
  if (11.0 <= dVar3) {
    **(int **)(param_1 + 0x70) = (int)lVar2 + 1;
  }
  else {
    uVar1 = FUN_0040c770(*(double *)(param_1 + 0x50) / *(double *)(param_1 + 0x60));
    **(undefined4 **)(param_1 + 0x70) = uVar1;
  }
  return;
}

