/* Ghidra address: 006199c0 */
/* Ghidra symbol: FUN_006199c0 */


void FUN_006199c0(undefined8 param_1,longlong param_2)

{
  *(longlong *)(param_2 + 0x88) = *(longlong *)(param_2 + 0xb0) + 0x14;
  LOCK();
  **(int **)(param_2 + 0x88) = **(int **)(param_2 + 0x88) + -1;
  UNLOCK();
  return;
}

