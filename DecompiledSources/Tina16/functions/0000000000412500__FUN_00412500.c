/* Ghidra address: 00412500 */
/* Ghidra symbol: FUN_00412500 */


void FUN_00412500(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (1 < DAT_020060b0) {
    lVar1 = FUN_004121f0();
    LOCK();
    *(undefined4 *)(lVar1 + 0x18) = param_2;
    UNLOCK();
  }
  return;
}

