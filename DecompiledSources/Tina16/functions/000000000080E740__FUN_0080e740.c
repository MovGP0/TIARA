/* Ghidra address: 0080e740 */
/* Ghidra symbol: FUN_0080e740 */


void FUN_0080e740(longlong param_1)

{
  undefined1 local_20 [16];
  
  FUN_0080e550(param_1);
  if (*(char *)(param_1 + 0x109) == '\0') {
    thunk_FUN_03cc0d62(local_20);
    FUN_0080ec80(param_1,local_20);
  }
  else if (*(char *)(param_1 + 0x109) == '\x01') {
    FUN_0080e790(param_1);
  }
  return;
}

