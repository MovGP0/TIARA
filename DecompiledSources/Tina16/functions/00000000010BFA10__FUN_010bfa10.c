/* Ghidra address: 010bfa10 */
/* Ghidra symbol: FUN_010bfa10 */


undefined8 FUN_010bfa10(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 <= 2147483647.0) {
    if (-2147483647.0 <= param_1) {
      uVar1 = FUN_0040c770();
    }
    else {
      uVar1 = 0x80000001;
    }
  }
  else {
    uVar1 = 0x7fffffff;
  }
  return uVar1;
}

