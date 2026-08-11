/* Ghidra address: 00978130 */
/* Ghidra symbol: FUN_00978130 */


void FUN_00978130(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 200),param_1,param_2,param_3);
  }
  return;
}

