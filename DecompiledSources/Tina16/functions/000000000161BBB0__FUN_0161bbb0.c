/* Ghidra address: 0161bbb0 */
/* Ghidra symbol: FUN_0161bbb0 */


undefined8 FUN_0161bbb0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 10) == '\0') || (*(char *)(param_1 + 8) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

