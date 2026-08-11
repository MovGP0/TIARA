/* Ghidra address: 00c43f80 */
/* Ghidra symbol: FUN_00c43f80 */


double FUN_00c43f80(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = 1.0 / (param_1 * 0.3275911 + 1.0);
  dVar1 = (double)FUN_0040af80(-param_1 * param_1);
  return (dVar2 * (dVar2 * (dVar2 * (dVar2 * 1.061405429 + -1.453152027) + 1.421413741) +
                  -0.284496736) + 0.254829592) * dVar1 * dVar2;
}

