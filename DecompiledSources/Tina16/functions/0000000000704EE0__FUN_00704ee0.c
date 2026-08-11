/* Ghidra address: 00704ee0 */
/* Ghidra symbol: FUN_00704ee0 */


void FUN_00704ee0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) == 0) {
    thunk_FUN_0416269d(*(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x548),param_2 + 0x70);
  }
  FUN_005ffb10(*(undefined8 *)(param_2 + 0x68),0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
  return;
}

