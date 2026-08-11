/* Ghidra address: 0049f320 */
/* Ghidra symbol: FUN_0049f320 */


undefined8 FUN_0049f320(longlong param_1)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (cVar1 = FUN_004e6930(*(longlong *)(param_1 + 8)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

