/* Ghidra address: 00ea4c90 */
/* Ghidra symbol: FUN_00ea4c90 */


undefined1 FUN_00ea4c90(undefined8 param_1)

{
  char cVar1;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_00ea4860(param_1);
  if (cVar1 == '\0') {
    local_11 = 0;
  }
  else {
    local_11 = 1;
    do {
      FUN_00ea4b30(param_1,&local_10);
      cVar1 = FUN_00ea4940(param_1);
    } while (cVar1 != '\0');
  }
  FUN_00414480(&local_10);
  return local_11;
}

