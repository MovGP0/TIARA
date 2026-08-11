/* Ghidra address: 00aa73c0 */
/* Ghidra symbol: FUN_00aa73c0 */


void FUN_00aa73c0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x168) = param_2;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    (**(code **)(param_1 + 0x178))(*(undefined8 *)(param_1 + 0x180),param_1);
  }
  return;
}

