/* Ghidra address: 00a94830 */
/* Ghidra symbol: FUN_00a94830 */


undefined8 FUN_00a94830(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x19) == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else if (*(char *)(param_1 + 0x19) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

