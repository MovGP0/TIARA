/* Ghidra address: 01d71770 */
/* Ghidra symbol: FUN_01d71770 */


undefined8 FUN_01d71770(char param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  if (((param_1 == '\x01') && (param_2 == '\0')) ||
     ((param_1 == '\0' && ((param_2 == '\0' && (param_3 == '\x01')))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

