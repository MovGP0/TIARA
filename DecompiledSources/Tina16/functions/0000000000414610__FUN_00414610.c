/* Ghidra address: 00414610 */
/* Ghidra symbol: FUN_00414610 */


longlong FUN_00414610(longlong param_1)

{
  if ((param_1 != 0) && (-1 < *(int *)(param_1 + -8))) {
    LOCK();
    *(int *)(param_1 + -8) = *(int *)(param_1 + -8) + 1;
    UNLOCK();
  }
  return param_1;
}

