/* Ghidra address: 00727b70 */
/* Ghidra symbol: FUN_00727b70 */


void FUN_00727b70(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x138) != 0) {
    (**(code **)(param_1 + 0x138))(*(undefined8 *)(param_1 + 0x140),param_1,param_2);
  }
  return;
}

