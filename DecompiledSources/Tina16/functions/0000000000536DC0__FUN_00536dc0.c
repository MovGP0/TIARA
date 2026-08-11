/* Ghidra address: 00536dc0 */
/* Ghidra symbol: FUN_00536dc0 */


undefined8 FUN_00536dc0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_005360d0(param_1);
  if ((cVar1 == '\0') && (*(char *)*param_1 != '\a')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

