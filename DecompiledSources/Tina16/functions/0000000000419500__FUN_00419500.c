/* Ghidra address: 00419500 */
/* Ghidra symbol: FUN_00419500 */


void FUN_00419500(longlong param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -0xc))) {
    LOCK();
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
    UNLOCK();
  }
  return;
}

