/* Ghidra address: 01d474f0 */
/* Ghidra symbol: FUN_01d474f0 */


undefined8 FUN_01d474f0(char param_1,char param_2,char param_3,char param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == '\0') && (param_3 == '\x01')) ||
     ((param_1 == '\x01' && (((param_2 == '\x01' && (param_3 == '\x01')) && (param_4 == '\x01'))))))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

