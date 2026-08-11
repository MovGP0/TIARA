/* Ghidra address: 005fdcb0 */
/* Ghidra symbol: FUN_005fdcb0 */


void FUN_005fdcb0(longlong param_1,char param_2)

{
  undefined1 local_38 [8];
  undefined4 local_30;
  char local_20;
  
  if ((param_2 != *(char *)(*(longlong *)(param_1 + 0x18) + 0x38)) ||
     ((param_2 == '\x01' && (*(int *)(*(longlong *)(param_1 + 0x18) + 0x28) != 0xffffff)))) {
    FUN_005fd9b0(param_1,local_38);
    if (param_2 == '\x01') {
      local_30 = 0xffffff;
    }
    local_20 = param_2;
    FUN_005fd9e0(param_1,local_38);
  }
  return;
}

