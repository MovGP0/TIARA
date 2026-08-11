/* Ghidra address: 016da930 */
/* Ghidra symbol: FUN_016da930 */


double FUN_016da930(longlong param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6)

{
  double dVar1;
  undefined8 uVar2;
  
  param_2 = param_2 / param_6;
  param_4 = param_4 / param_6;
  dVar1 = (double)FUN_00b90650(param_2,param_4);
  uVar2 = FUN_00b90620(*(undefined8 *)(param_1 + 0x380),dVar1 * 0.0625);
  if ((param_3 + param_4) - *(double *)(param_1 + 0x380) < param_5 + param_2) {
    param_2 = (double)FUN_00b90620((param_3 + param_4 + *(double *)(param_1 + 0x380)) - param_5,
                                   uVar2);
  }
  return param_2;
}

