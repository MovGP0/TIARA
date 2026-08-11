/* Ghidra address: 01615d20 */
/* Ghidra symbol: FUN_01615d20 */


undefined8 FUN_01615d20(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_01615d00(param_1);
  if ((cVar1 == '\0') && ((char)param_1 != '\x0e')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

