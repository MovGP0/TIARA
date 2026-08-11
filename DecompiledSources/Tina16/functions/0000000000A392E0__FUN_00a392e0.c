/* Ghidra address: 00a392e0 */
/* Ghidra symbol: FUN_00a392e0 */


undefined8 FUN_00a392e0(double param_1,double param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_2 == 0.0) {
    uVar1 = 0x3ff0000000000000;
  }
  else if ((param_1 == 0.0) || (param_2 == 0.0)) {
    uVar1 = 0;
  }
  else {
    dVar2 = (double)FUN_0040c2f0();
    uVar1 = FUN_0040af80(param_2 * dVar2);
  }
  return uVar1;
}

