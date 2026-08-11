/* Ghidra address: 018769c0 */
/* Ghidra symbol: FUN_018769c0 */


char FUN_018769c0(undefined8 param_1,byte param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  for (; param_2 != 0; param_2 = param_2 & param_2 - 1) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}

