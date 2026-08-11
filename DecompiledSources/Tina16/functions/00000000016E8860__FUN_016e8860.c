/* Ghidra address: 016e8860 */
/* Ghidra symbol: FUN_016e8860 */


void FUN_016e8860(longlong param_1,int param_2,int param_3)

{
  double dVar1;
  undefined1 auStack_58 [32];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  do {
    dVar1 = *(double *)
             (*(longlong *)(param_1 + 0x70) + (longlong)(int)(param_2 + param_3 & 0xfffffffe) * 8);
    local_38 = param_3;
    local_30 = param_2;
    do {
      local_2c = local_30 * 2;
      local_34 = local_38 * 2;
      while (*(double *)(*(longlong *)(param_1 + 0x70) + (longlong)local_2c * 8) - dVar1 < 0.0) {
        local_30 = local_30 + 1;
        local_2c = local_2c + 2;
      }
      while (0.0 < *(double *)(*(longlong *)(param_1 + 0x70) + (longlong)local_34 * 8) - dVar1) {
        local_38 = local_38 + -1;
        local_34 = local_34 + -2;
      }
      if (local_30 <= local_38) {
        if (local_30 != local_38) {
          FUN_016e85d0(auStack_58);
        }
        local_30 = local_30 + 1;
        local_38 = local_38 + -1;
      }
    } while (local_30 <= local_38);
    if (param_2 < local_38) {
      FUN_016e8860(param_1,param_2,local_38);
    }
    param_2 = local_30;
  } while (local_30 < param_3);
  return;
}

