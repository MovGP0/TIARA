/* Ghidra address: 00c5c160 */
/* Ghidra symbol: FUN_00c5c160 */


char FUN_00c5c160(char param_1)

{
  if (param_1 == '\0') {
    param_1 = '\x01';
  }
  else if (param_1 == '\x01') {
    param_1 = '\0';
  }
  return param_1;
}

