/* Ghidra address: 00f120b0 */
/* Ghidra symbol: FUN_00f120b0 */


undefined8 FUN_00f120b0(double param_1,double param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  if (param_1 <= 0.0) {
    uVar2 = 0;
  }
  else {
    dVar1 = (double)FUN_0040c2f0();
    uVar2 = FUN_0040af80(param_2 * dVar1);
  }
  return uVar2;
}

