/* Ghidra address: 005fdab0 */
/* Ghidra symbol: FUN_005fdab0 */


void FUN_005fdab0(longlong param_1,int param_2)

{
  char cVar1;
  undefined1 local_38 [8];
  int local_30;
  char local_20;
  
  if (param_2 == *(int *)(*(longlong *)(param_1 + 0x18) + 0x28)) {
    cVar1 = FUN_005fdca0(param_1);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = FUN_005fdca0(param_1);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_005fd9b0(param_1,local_38);
  if (local_20 == '\x01') {
    local_20 = '\0';
  }
  local_30 = param_2;
  FUN_005fd9e0(param_1,local_38);
  return;
}

