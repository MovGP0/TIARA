/* Ghidra address: 008fff10 */
/* Ghidra symbol: FUN_008fff10 */


undefined8 FUN_008fff10(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_008ffd10(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_008ffae0(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

