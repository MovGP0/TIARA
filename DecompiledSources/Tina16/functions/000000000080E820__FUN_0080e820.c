/* Ghidra address: 0080e820 */
/* Ghidra symbol: FUN_0080e820 */


void FUN_0080e820(longlong param_1)

{
  longlong lVar1;
  
  LOCK();
  lVar1 = *(longlong *)(param_1 + 0xd8);
  *(longlong *)(param_1 + 0xd8) = 0;
  UNLOCK();
  if (lVar1 != 0) {
    FUN_0080e790(param_1);
    *(undefined1 *)(param_1 + 0xd0) = 0;
    FUN_008098a0();
    FUN_0080e550(param_1);
  }
  return;
}

