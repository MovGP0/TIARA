/* Ghidra address: 01898330 */
/* Ghidra symbol: FUN_01898330 */


undefined1 FUN_01898330(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x6e0) == '\0') {
    uVar1 = FUN_006e3e50();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

