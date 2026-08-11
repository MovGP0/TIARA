/* Ghidra address: 01d5e7b0 */
/* Ghidra symbol: FUN_01d5e7b0 */


double FUN_01d5e7b0(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_0040c850(param_1);
  if (3.75 <= dVar1) {
    dVar3 = 3.75 / dVar1;
    dVar2 = (double)FUN_00c42a20(dVar1);
    dVar1 = (double)FUN_0040c760(dVar1);
    dVar1 = (dVar2 / dVar1) *
            (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * (dVar3 * 0.00392377 +
                                                                           -0.01647633) + 0.02635537
                                                                  ) + -0.02057706) + 0.00916281) +
                                       -0.00157565) + 0.00225319) + 0.01328592) + 0.39894228);
  }
  else {
    dVar1 = (param_1 / 3.75) * (param_1 / 3.75);
    dVar1 = dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * 0.0045813 + 0.0360768) + 0.2659732)
                                      + 1.2067492) + 3.0899424) + 3.5156229) + 1.0;
  }
  return dVar1;
}

