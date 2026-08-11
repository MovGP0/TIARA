/* Ghidra address: 006f9800 */
/* Ghidra symbol: FUN_006f9800 */


void FUN_006f9800(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_0064c5a0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x330)) {
      FUN_006fa430(param_1,0);
    }
    else if (param_2 == *(longlong *)(param_1 + 0x328)) {
      FUN_006fa5f0(param_1,0);
    }
  }
  return;
}

