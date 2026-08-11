/* Ghidra address: 00b50950 */
/* Ghidra symbol: FUN_00b50950 */


undefined4 FUN_00b50950(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

