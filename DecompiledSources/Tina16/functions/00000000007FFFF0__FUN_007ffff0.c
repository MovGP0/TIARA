/* Ghidra address: 007ffff0 */
/* Ghidra symbol: FUN_007ffff0 */


void FUN_007ffff0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x518) != param_2) {
    *(longlong *)(param_1 + 0x518) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
    FUN_007fff00(param_1);
  }
  return;
}

