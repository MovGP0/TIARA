/* Ghidra address: 008fdde0 */
/* Ghidra symbol: FUN_008fdde0 */


undefined8 FUN_008fdde0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_008fde70(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_008fde10(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

