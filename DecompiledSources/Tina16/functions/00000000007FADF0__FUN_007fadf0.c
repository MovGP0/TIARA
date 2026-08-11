/* Ghidra address: 007fadf0 */
/* Ghidra symbol: FUN_007fadf0 */


undefined8 FUN_007fadf0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0xae) == '\0') &&
     ((*(char *)(param_1 + 0x393) == '\0' || (*(char *)(param_1 + 0x392) == '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

