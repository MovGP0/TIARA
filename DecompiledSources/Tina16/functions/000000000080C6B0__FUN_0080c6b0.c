/* Ghidra address: 0080c6b0 */
/* Ghidra symbol: FUN_0080c6b0 */


void FUN_0080c6b0(longlong param_1,longlong param_2)

{
  code *local_28;
  longlong local_20;
  
  if ((*(char *)(param_1 + 0x158) == '\0') && (param_2 != *(longlong *)(param_1 + 0x2d0))) {
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      local_28 = FUN_0080b170;
      local_20 = param_1;
      FUN_0080cd50(param_1,&local_28);
    }
    *(longlong *)(param_1 + 0x2d0) = param_2;
    if (param_2 != 0) {
      local_28 = FUN_0080b170;
      local_20 = param_1;
      FUN_0080ccd0(param_1,&local_28);
    }
  }
  return;
}

