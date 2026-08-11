/* Ghidra address: 01400ba0 */
/* Ghidra symbol: FUN_01400ba0 */


undefined8 FUN_01400ba0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_01400b40(param_1,param_2);
  if ((cVar1 == '\0') && (cVar1 = FUN_01400ae0(param_1,param_2), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

