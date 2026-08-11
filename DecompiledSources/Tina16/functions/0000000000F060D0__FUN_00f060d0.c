/* Ghidra address: 00f060d0 */
/* Ghidra symbol: FUN_00f060d0 */


undefined8 FUN_00f060d0(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0.0) {
    uVar1 = 0xfffffc18;
  }
  else {
    FUN_0040c850();
    FUN_00c43d10();
    uVar1 = FUN_00f05450();
  }
  return uVar1;
}

