/* Ghidra address: 010a56d0 */
/* Ghidra symbol: FUN_010a56d0 */


undefined8 FUN_010a56d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(double *)(param_1 + 0xa38) == -1.0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78),
     *(double *)(lVar1 + 0x13a20) < *(double *)(param_1 + 0xa38))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

