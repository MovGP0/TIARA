/* Ghidra address: 0156c550 */
/* Ghidra symbol: FUN_0156c550 */


void FUN_0156c550(longlong param_1,undefined8 param_2)

{
  if ((*(uint *)(param_1 + 0x7e8) != 0) && ((*(uint *)(param_1 + 0x7e8) & 0x20) == 0)) {
    _DoneSystemCSimulation(param_2);
  }
  return;
}

