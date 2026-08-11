/* Ghidra address: 01369e80 */
/* Ghidra symbol: FUN_01369e80 */


undefined2 FUN_01369e80(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

