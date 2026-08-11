/* Ghidra address: 016ed780 */
/* Ghidra symbol: FUN_016ed780 */


double FUN_016ed780(longlong param_1,char param_2)

{
  double dVar1;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    dVar1 = *(double *)(param_1 + 0x390) + *(double *)(param_1 + 0x10);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

