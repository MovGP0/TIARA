/* Ghidra address: 00c43de0 */
/* Ghidra symbol: FUN_00c43de0 */


undefined8 FUN_00c43de0(double param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_1 < 1.0) {
    if (-1.0 < param_1) {
      if ((1e-30 < param_1) || (param_1 < -1e-30)) {
        dVar2 = (double)FUN_0040c760(1.0 - param_1 * param_1);
        uVar1 = FUN_0040c660(dVar2 / param_1);
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0x400921fb54442d18;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

