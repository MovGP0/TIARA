/* Ghidra address: 01831860 */
/* Ghidra symbol: FUN_01831860 */


void FUN_01831860(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x88) == 0) {
    *(longlong *)(param_1 + 0x88) = param_2;
  }
  else if (*(longlong *)(param_1 + 0x90) == 0) {
    *(longlong *)(param_1 + 0x90) = param_2;
  }
  if (param_2 != 0) {
    *(longlong *)(param_2 + 0x98) = param_1;
  }
  return;
}

