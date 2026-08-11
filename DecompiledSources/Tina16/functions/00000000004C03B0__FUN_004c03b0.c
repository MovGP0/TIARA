/* Ghidra address: 004c03b0 */
/* Ghidra symbol: FUN_004c03b0 */


longlong FUN_004c03b0(longlong param_1)

{
  char cVar1;
  longlong local_20 [2];
  
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 == '\x10') {
    FUN_004bea90(param_1,local_20,8);
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    local_20[0] = FUN_004c0750(param_1);
    local_20[0] = local_20[0] * 10000;
  }
  return local_20[0];
}

