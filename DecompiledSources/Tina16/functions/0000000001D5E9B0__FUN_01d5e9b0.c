/* Ghidra address: 01d5e9b0 */
/* Ghidra symbol: FUN_01d5e9b0 */


double FUN_01d5e9b0(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)FUN_0040c850(param_1);
  if (3.75 <= dVar1) {
    dVar2 = 3.75 / dVar1;
    dVar3 = (double)FUN_00c42a20(dVar1);
    dVar1 = (double)FUN_0040c760(dVar1);
    dVar1 = ((dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * (0.01787654 -
                                                                            dVar2 * 0.00420059) +
                                                                   -0.02895312) + 0.02282967) +
                                                 -0.01031555) + 0.00163801) + -0.00362018) +
                      -0.03988024) + 0.39894228) * dVar3) / dVar1;
  }
  else {
    dVar2 = (param_1 / 3.75) * (param_1 / 3.75);
    dVar1 = dVar1 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * (dVar2 * 0.00032411 + 0.00301532) +
                                                        0.02658733) + 0.15084934) + 0.51498869) +
                             0.87890594) + 0.5);
  }
  if (param_1 < 0.0) {
    dVar1 = -dVar1;
  }
  return dVar1;
}

