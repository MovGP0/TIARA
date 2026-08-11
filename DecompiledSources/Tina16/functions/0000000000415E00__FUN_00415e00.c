/* Ghidra address: 00415e00 */
/* Ghidra symbol: FUN_00415e00 */


void FUN_00415e00(longlong *param_1,longlong param_2)

{
  longlong local_10;
  
  LOCK();
  local_10 = *param_1;
  *param_1 = param_2;
  UNLOCK();
  if (local_10 != 0) {
    FUN_00414520(&local_10);
  }
  return;
}

