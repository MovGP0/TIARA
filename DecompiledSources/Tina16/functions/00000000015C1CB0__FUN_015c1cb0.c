/* Ghidra address: 015c1cb0 */
/* Ghidra symbol: FUN_015c1cb0 */


undefined1 FUN_015c1cb0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_9;
  
  cVar1 = FUN_015c1b70(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_015c1b10(param_1);
    if (cVar1 == '\0') {
      if (*(int *)(param_1 + 0xc) < 0) {
        local_9 = *(char *)(param_1 + 8) == *(char *)(param_2 + 8);
      }
      else {
        local_9 = *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
      }
    }
    else {
      local_9 = FUN_015c1b10(param_2);
    }
  }
  else {
    local_9 = FUN_015c1b70(param_2);
  }
  return local_9;
}

