/* Ghidra address: 0040d1c0 */
/* Ghidra symbol: FUN_0040d1c0 */


char FUN_0040d1c0(longlong param_1)

{
  char local_19 [9];
  
  if (*(char *)(param_1 + 0x2ea) == '\0') {
    FUN_0040d420(param_1,local_19);
    if (local_19[0] == '\0') {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  else {
    local_19[0] = '\0';
  }
  return local_19[0];
}

