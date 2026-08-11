/* Ghidra address: 018cf660 */
/* Ghidra symbol: FUN_018cf660 */


double FUN_018cf660(longlong *param_1)

{
  double dVar1;
  
  if ((param_1[0x25] == 0) || (*(char *)(param_1[0x25] + 0x1a1) == '\0')) {
    dVar1 = (double)FUN_01978a10(param_1);
  }
  else {
    dVar1 = (double)(**(code **)(*param_1 + 0x98))(param_1);
    dVar1 = (double)param_1[0x12] + dVar1;
  }
  return dVar1;
}

