/* Ghidra address: 00605670 */
/* Ghidra symbol: FUN_00605670 */


void FUN_00605670(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_040d2fd9(*(longlong *)(param_1 + 0x10));
  }
  FUN_005fb100(*(undefined8 *)(param_1 + 0x20));
  FUN_00607b30(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

