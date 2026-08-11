/* Ghidra address: 00c43d50 */
/* Ghidra symbol: FUN_00c43d50 */


undefined8 FUN_00c43d50(double param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  if (param_1 < 1.0) {
    if (-1.0 < param_1) {
      dVar2 = (double)FUN_0040c760(1.0 - param_1 * param_1);
      uVar1 = FUN_0040c660(param_1 / dVar2);
    }
    else {
      uVar1 = 0xbff921fb54442d18;
    }
  }
  else {
    uVar1 = 0x3ff921fb54442d18;
  }
  return uVar1;
}

