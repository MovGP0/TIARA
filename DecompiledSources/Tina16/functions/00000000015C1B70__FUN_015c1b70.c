/* Ghidra address: 015c1b70 */
/* Ghidra symbol: FUN_015c1b70 */


bool FUN_015c1b70(longlong param_1)

{
  undefined1 local_9;
  
  if (*(int *)(param_1 + 0x10) == -1) {
    local_9 = *(char *)(param_1 + 8) == '\x01';
  }
  else {
    local_9 = *(int *)(param_1 + 0xc) == *(int *)(param_1 + 0x10);
  }
  return local_9;
}

