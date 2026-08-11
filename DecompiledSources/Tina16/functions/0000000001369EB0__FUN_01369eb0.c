/* Ghidra address: 01369eb0 */
/* Ghidra symbol: FUN_01369eb0 */


undefined2 FUN_01369eb0(longlong param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

