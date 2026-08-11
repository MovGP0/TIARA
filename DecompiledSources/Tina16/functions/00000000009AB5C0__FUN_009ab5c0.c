/* Ghidra address: 009ab5c0 */
/* Ghidra symbol: FUN_009ab5c0 */


void FUN_009ab5c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1,param_2,param_3);
  }
  return;
}

