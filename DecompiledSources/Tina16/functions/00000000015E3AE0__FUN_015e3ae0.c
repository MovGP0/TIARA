/* Ghidra address: 015e3ae0 */
/* Ghidra symbol: FUN_015e3ae0 */


undefined1 FUN_015e3ae0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  char local_50 [64];
  int local_10;
  undefined1 local_9;
  
  if (*(short *)(param_1 + 0x1c0) == 1) {
    local_9 = param_3 != *(int *)(param_2 + 0x10);
  }
  else {
    FUN_015948e0(param_1 + 0x18,local_50);
    iVar1 = *(int *)(param_1 + 0x1c4);
    local_10 = 0;
    if (-1 < iVar1 + -1) {
      do {
        if (local_50[local_10] != *(char *)(*(longlong *)(param_1 + 0x1b0) + (longlong)local_10)) {
          return 1;
        }
        local_9 = 0;
        local_10 = local_10 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return local_9;
}

