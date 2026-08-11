/* Ghidra address: 01428550 */
/* Ghidra symbol: FUN_01428550 */


undefined8 FUN_01428550(double param_1,double param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = 0;
  dVar2 = (double)FUN_0040c850(param_1);
  if (dVar2 <= 1e-19) {
    dVar2 = (double)FUN_0040c850(param_2 - param_1);
    if (dVar2 < 1e-20) {
      uVar1 = 1;
    }
  }
  else {
    dVar2 = (double)FUN_0040c850((param_2 - param_1) / param_1);
    if (dVar2 * 100.0 < 0.001) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

