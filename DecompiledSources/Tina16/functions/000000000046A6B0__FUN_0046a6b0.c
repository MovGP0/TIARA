/* Ghidra address: 0046a6b0 */
/* Ghidra symbol: FUN_0046a6b0 */


undefined8 FUN_0046a6b0(double param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 <= param_1) {
    if (param_1 <= param_2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

