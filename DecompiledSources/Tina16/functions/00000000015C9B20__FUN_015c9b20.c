/* Ghidra address: 015c9b20 */
/* Ghidra symbol: FUN_015c9b20 */


undefined1 FUN_015c9b20(longlong param_1)

{
  undefined8 local_18;
  undefined1 local_9;
  
  local_18 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x111) == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x85) == '\0') {
      local_9 = FUN_015c3a30(param_1,param_1 + 0x84,&local_18,0x6054141);
    }
    else {
      local_9 = FUN_015c3a30(param_1,param_1 + 0x84,&local_18,0x6054b50);
    }
  }
  else {
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x85) == '\0') {
      FUN_015c3a30(param_1,param_1 + 0x84,&local_18,0x6054141);
    }
    else {
      FUN_015c3a30(param_1,param_1 + 0x84,&local_18,0x6054b50);
    }
    local_9 = 1;
  }
  return local_9;
}

