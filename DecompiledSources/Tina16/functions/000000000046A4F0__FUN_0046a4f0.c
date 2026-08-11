/* Ghidra address: 0046a4f0 */
/* Ghidra symbol: FUN_0046a4f0 */


undefined8 FUN_0046a4f0(char param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_1 == '\x01') {
    if (param_2 == '\x01') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

