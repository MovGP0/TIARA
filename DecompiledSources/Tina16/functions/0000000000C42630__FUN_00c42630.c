/* Ghidra address: 00c42630 */
/* Ghidra symbol: FUN_00c42630 */


undefined8 FUN_00c42630(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0.0) {
    uVar1 = 0;
  }
  else if (0.0 <= param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

