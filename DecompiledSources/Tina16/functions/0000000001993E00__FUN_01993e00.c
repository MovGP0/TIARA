/* Ghidra address: 01993e00 */
/* Ghidra symbol: FUN_01993e00 */


undefined8 FUN_01993e00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) || (*(char *)(param_2 + 10) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

