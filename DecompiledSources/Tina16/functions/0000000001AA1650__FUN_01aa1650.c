/* Ghidra address: 01aa1650 */
/* Ghidra symbol: FUN_01aa1650 */


undefined8 FUN_01aa1650(char param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  if ((((param_1 == '\x04') && (param_2 == '\0')) && (param_3 == '\x01')) ||
     (((param_1 == '\x03' && (param_2 == '\x01')) && (param_3 == '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

