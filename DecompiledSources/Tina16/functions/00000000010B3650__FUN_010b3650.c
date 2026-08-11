/* Ghidra address: 010b3650 */
/* Ghidra symbol: FUN_010b3650 */


undefined8 FUN_010b3650(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int *)(param_1 + 8) == 3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

