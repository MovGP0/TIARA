/* Ghidra address: 005fcc80 */
/* Ghidra symbol: FUN_005fcc80 */


void FUN_005fcc80(longlong param_1,int param_2)

{
  undefined1 local_b0 [8];
  int local_a8;
  
  if (param_2 != *(int *)(*(longlong *)(param_1 + 0x18) + 0x28)) {
    FUN_005fc7d0(param_1,local_b0);
    local_a8 = param_2;
    FUN_005fc7f0(param_1,local_b0);
  }
  return;
}

