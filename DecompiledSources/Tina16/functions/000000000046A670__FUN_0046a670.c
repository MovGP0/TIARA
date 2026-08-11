/* Ghidra address: 0046a670 */
/* Ghidra symbol: FUN_0046a670 */


undefined8 FUN_0046a670(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 < param_2) {
    uVar1 = 0;
  }
  else if (param_2 < param_1) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

