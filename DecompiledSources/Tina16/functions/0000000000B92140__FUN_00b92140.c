/* Ghidra address: 00b92140 */
/* Ghidra symbol: FUN_00b92140 */


double FUN_00b92140(double param_1)

{
  uint uVar1;
  double dVar2;
  
  dVar2 = 0.0;
  if (DAT_01e9473c != '\0') {
    uVar1 = FUN_00427dd0(0);
    dVar2 = (double)uVar1 / 1000.0 - param_1;
  }
  return dVar2;
}

