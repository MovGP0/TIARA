/* Ghidra address: 00527300 */
/* Ghidra symbol: FUN_00527300 */


bool FUN_00527300(undefined8 param_1,double param_2)

{
  double dVar1;
  
  if (param_2 == 0.0) {
    param_2 = 1e-12;
  }
  dVar1 = (double)FUN_0040c850();
  return dVar1 <= param_2;
}

