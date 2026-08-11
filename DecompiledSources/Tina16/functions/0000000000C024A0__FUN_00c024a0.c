/* Ghidra address: 00c024a0 */
/* Ghidra symbol: FUN_00c024a0 */


void FUN_00c024a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x830) != 0) {
    (**(code **)(param_1 + 0x830))(*(undefined8 *)(param_1 + 0x838),param_2);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4f0) + 0x88))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x90),param_2);
  return;
}

