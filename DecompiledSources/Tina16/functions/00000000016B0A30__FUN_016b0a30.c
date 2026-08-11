/* Ghidra address: 016b0a30 */
/* Ghidra symbol: FUN_016b0a30 */


void FUN_016b0a30(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 8));
  }
  FUN_016a94d0(*(undefined8 *)(param_1 + 0x10),0);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

