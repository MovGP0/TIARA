/* Ghidra address: 00cb9680 */
/* Ghidra symbol: FUN_00cb9680 */


undefined8 FUN_00cb9680(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00cb9a40(param_1);
  if (((cVar1 == '\0') || (cVar1 = FUN_00caef00(param_1), cVar1 == '\0')) &&
     (cVar1 = FUN_00cb0720(param_1), cVar1 != '\0')) {
    return 0;
  }
  return 1;
}

