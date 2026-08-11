/* Ghidra address: 013c0d70 */
/* Ghidra symbol: FUN_013c0d70 */


undefined8 FUN_013c0d70(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_01b215c0(param_1,1);
  if ((cVar1 == '\0') && (cVar1 = FUN_01b215f0(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

