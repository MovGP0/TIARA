/* Ghidra address: 0161c600 */
/* Ghidra symbol: FUN_0161c600 */


undefined8 FUN_0161c600(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0161c060(param_1,param_2);
  if (((cVar1 == '\0') && (cVar1 = FUN_0161bbd0(param_1), cVar1 == '\0')) &&
     (cVar1 = FUN_0161c0b0(param_1,param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

