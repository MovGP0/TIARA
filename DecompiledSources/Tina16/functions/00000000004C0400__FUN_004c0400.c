/* Ghidra address: 004c0400 */
/* Ghidra symbol: FUN_004c0400 */


double FUN_004c0400(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  double local_20 [2];
  
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 == '\x11') {
    FUN_004bea90(param_1,local_20,8);
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + -1;
    lVar2 = FUN_004c0750(param_1);
    local_20[0] = (double)lVar2;
  }
  return local_20[0];
}

