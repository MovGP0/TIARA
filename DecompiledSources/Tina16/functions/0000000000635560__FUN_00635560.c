/* Ghidra address: 00635560 */
/* Ghidra symbol: FUN_00635560 */


undefined8 FUN_00635560(undefined8 param_1,double param_2)

{
  undefined8 uVar1;
  
  if (param_2 <= 255.0) {
    uVar1 = FUN_0040c770(param_2);
  }
  else {
    uVar1 = 0xff;
  }
  return uVar1;
}

