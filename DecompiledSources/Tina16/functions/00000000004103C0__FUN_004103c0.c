/* Ghidra address: 004103c0 */
/* Ghidra symbol: FUN_004103c0 */


double FUN_004103c0(undefined8 param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = (double)((ulonglong)param_2 & 0xfffffffffc000000);
  param_2 = param_2 - dVar1;
  if (param_4 == 0.0) {
    dVar1 = dVar1 * param_3 + param_2 * param_3;
  }
  else {
    dVar1 = param_2 * param_4 + dVar1 * param_4 + param_2 * param_3 + dVar1 * param_3;
  }
  return dVar1;
}

