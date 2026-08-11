/* Ghidra address: 008fc2b0 */
/* Ghidra symbol: FUN_008fc2b0 */


undefined8 FUN_008fc2b0(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_008fc350(param_1);
  if ((cVar1 == '\0') && (cVar1 = FUN_008fc2e0(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

