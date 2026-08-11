/* Ghidra address: 01951150 */
/* Ghidra symbol: FUN_01951150 */


undefined8 FUN_01951150(longlong param_1)

{
  double *pdVar1;
  double dVar2;
  undefined8 uVar3;
  
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x68) + 0x10);
  if ((((*pdVar1 <= *(double *)(param_1 + 0x38) && *(double *)(param_1 + 0x38) != *pdVar1) ||
       (*(double *)(param_1 + 0x30) <= **(double **)(param_1 + 0x68) &&
        **(double **)(param_1 + 0x68) != *(double *)(param_1 + 0x30))) ||
      (pdVar1 = (double *)(*(longlong *)(param_1 + 0x68) + 0x18),
      *pdVar1 <= *(double *)(param_1 + 0x28) && *(double *)(param_1 + 0x28) != *pdVar1)) ||
     (dVar2 = *(double *)(*(longlong *)(param_1 + 0x68) + 8),
     *(double *)(param_1 + 0x20) <= dVar2 && dVar2 != *(double *)(param_1 + 0x20))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x68) >> 8),1);
  }
  return uVar3;
}

