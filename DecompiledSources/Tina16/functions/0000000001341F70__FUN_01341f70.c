/* Ghidra address: 01341f70 */
/* Ghidra symbol: FUN_01341f70 */


void FUN_01341f70(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)PTR_DAT_02004a28 == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x68) + 0x1418);
  }
  else {
    iVar1 = *(int *)(*(longlong *)PTR_DAT_02004a28 + 0x24);
  }
  if (((*(double *)(*(longlong *)(param_1 + 0x68) + 0x390) - *(double *)(param_1 + 0x38) <
        *(double *)(param_1 + 0x30) / (double)*(int *)(*(longlong *)(param_1 + 0x68) + 0x1464)) ||
      (iVar1 <= *(int *)(param_1 + 0x20) + 1)) ||
     (*(double *)(*(longlong *)(param_1 + 0x68) + 0x390) < *(double *)(param_1 + 0x28))) {
    FUN_013417f0();
  }
  else {
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}

