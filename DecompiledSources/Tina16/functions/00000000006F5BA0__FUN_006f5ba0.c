/* Ghidra address: 006f5ba0 */
/* Ghidra symbol: FUN_006f5ba0 */


void FUN_006f5ba0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x610) != 0) {
    (**(code **)(param_1 + 0x610))(*(undefined8 *)(param_1 + 0x618),param_1,param_2);
  }
  return;
}

