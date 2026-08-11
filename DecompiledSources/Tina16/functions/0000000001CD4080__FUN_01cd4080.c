/* Ghidra address: 01cd4080 */
/* Ghidra symbol: FUN_01cd4080 */


void FUN_01cd4080(undefined8 param_1,double param_2,int param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_00c43d20((double)param_3);
  param_2 = param_2 / dVar1;
  FUN_0040af40(param_2);
  dVar1 = (double)FUN_0040c850();
  if ((0.0999999999 < dVar1) && (dVar1 < 0.9999999999)) {
    param_2 = param_2 * 10.0;
  }
  FUN_00f05410(param_2);
  return;
}

