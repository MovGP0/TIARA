/* Ghidra address: 01c00da0 */
/* Ghidra symbol: FUN_01c00da0 */


void FUN_01c00da0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    (**(code **)(param_1 + 0x4c8))(*(undefined8 *)(param_1 + 0x4d0),param_1,param_2);
  }
  return;
}

