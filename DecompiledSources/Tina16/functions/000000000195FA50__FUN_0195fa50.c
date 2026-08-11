/* Ghidra address: 0195fa50 */
/* Ghidra symbol: FUN_0195fa50 */


double FUN_0195fa50(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x2e0) * 2.0;
  lVar1 = *(longlong *)(param_1 + 0x1c0);
  if ((*(byte *)(lVar1 + 0x3d) & 1) != 0) {
    dVar2 = dVar2 + (*(double *)(lVar1 + 0x40) - 1.0) / 2.0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x1c0) + 0x3d) & 2) != 0) {
    dVar2 = dVar2 + *(double *)(lVar1 + 0x40) / 2.0;
  }
  if (*(char *)(lVar1 + 0x2c) != '\0') {
    dVar2 = dVar2 + *(double *)(lVar1 + 0x30);
  }
  return dVar2;
}

