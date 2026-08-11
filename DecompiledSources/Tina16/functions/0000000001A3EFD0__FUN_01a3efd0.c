/* Ghidra address: 01a3efd0 */
/* Ghidra symbol: FUN_01a3efd0 */


void FUN_01a3efd0(longlong param_1,int param_2)

{
  if (((param_2 == 2) || (param_2 == 3)) && (*(int *)(*(longlong *)(param_1 + 0x2968) + 0x5c) == 0))
  {
    *(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x5c) = 1;
  }
  return;
}

