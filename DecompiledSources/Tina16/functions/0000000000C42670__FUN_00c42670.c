/* Ghidra address: 00c42670 */
/* Ghidra symbol: FUN_00c42670 */


undefined8 FUN_00c42670(double param_1,double param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)FUN_0040c850(param_1);
  if (dVar1 <= 0.0) {
    if ((param_1 == 0.0) && (param_2 == 0.0)) {
      uVar2 = 0x3ff0000000000000;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    FUN_0040c850(param_1);
    dVar1 = (double)FUN_0040c2f0();
    if (param_2 * dVar1 <= 300.0) {
      if (-300.0 <= param_2 * dVar1) {
        uVar2 = FUN_0040af80();
      }
      else {
        uVar2 = FUN_0040af80(0xc072c00000000000);
      }
    }
    else {
      uVar2 = FUN_0040af80(0x4072c00000000000);
    }
  }
  return uVar2;
}

