/* Ghidra address: 00c25570 */
/* Ghidra symbol: FUN_00c25570 */


undefined8 FUN_00c25570(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x48) == '\0') || (*(int *)(param_1 + 0x44) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

