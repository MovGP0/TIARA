/* Ghidra address: 016e5620 */
/* Ghidra symbol: FUN_016e5620 */


double FUN_016e5620(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_2 + 0x20);
  dVar2 = *(double *)(param_2 + 0x28);
  if (*(double *)(param_2 + 0x10) < *(double *)(param_2 + 8)) {
    dVar1 = *(double *)(param_2 + 0x28);
    dVar2 = *(double *)(param_2 + 0x20);
  }
  return *(double *)(param_1 + 0x20) * *(double *)(param_2 + 0x18) +
         *(double *)(param_1 + 0x98) * dVar1 + *(double *)(param_1 + 0xa0) * dVar2;
}

