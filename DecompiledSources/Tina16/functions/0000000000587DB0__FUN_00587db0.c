/* Ghidra address: 00587db0 */
/* Ghidra symbol: FUN_00587db0 */


undefined8 FUN_00587db0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)*param_1;
  if ((cVar1 == *(char *)*param_2) &&
     (cVar1 = FUN_0043e2c0((char *)*param_1,(char *)*param_2,cVar1), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

