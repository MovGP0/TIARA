/* Ghidra address: 007e6a70 */
/* Ghidra symbol: FUN_007e6a70 */


void FUN_007e6a70(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
  }
  *(longlong *)(param_1 + 0xa0) = param_2;
  if (param_2 != 0) {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x98));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0xa0),param_1);
  }
  FUN_007e5850(param_1);
  return;
}

