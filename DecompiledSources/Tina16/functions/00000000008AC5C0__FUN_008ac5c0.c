/* Ghidra address: 008ac5c0 */
/* Ghidra symbol: FUN_008ac5c0 */


bool FUN_008ac5c0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  longlong local_20 [2];
  char local_9;
  
  local_20[0] = 0;
  cVar1 = FUN_00879090(param_1,&LAB_008ac664);
  if (cVar1 == '\0') {
    local_9 = '\0';
    FUN_00875380(param_1,&local_9);
    if (local_9 != '\0') {
      FUN_008759b0(local_20,param_1);
      local_9 = local_20[0] == 0;
    }
    bVar2 = local_9 != '\0';
  }
  else {
    bVar2 = false;
  }
  FUN_00414480(local_20);
  return bVar2;
}

