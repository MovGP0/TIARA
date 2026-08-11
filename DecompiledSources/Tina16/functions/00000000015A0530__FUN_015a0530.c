/* Ghidra address: 015a0530 */
/* Ghidra symbol: FUN_015a0530 */


uint FUN_015a0530(uint *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *param_1;
  local_14 = 0;
  while ((local_14 < param_3 && (local_18 < 4))) {
    if (local_18 < 2) {
      cVar1 = '\0';
    }
    else {
      cVar1 = -1;
    }
    if (*(char *)(param_2 + (ulonglong)local_14) == cVar1) {
      local_18 = local_18 + 1;
    }
    else if (*(char *)(param_2 + (ulonglong)local_14) == '\0') {
      local_18 = 4 - local_18;
    }
    else {
      local_18 = 0;
    }
    local_14 = local_14 + 1;
  }
  *param_1 = local_18;
  return local_14;
}

