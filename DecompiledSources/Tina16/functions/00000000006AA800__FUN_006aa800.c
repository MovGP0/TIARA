/* Ghidra address: 006aa800 */
/* Ghidra symbol: FUN_006aa800 */


void FUN_006aa800(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x140) != 0) {
    (**(code **)(param_1 + 0x140))(*(undefined8 *)(param_1 + 0x148),param_1);
  }
  return;
}

