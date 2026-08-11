/* Ghidra address: 008080d0 */
/* Ghidra symbol: FUN_008080d0 */


void FUN_008080d0(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0xe8) != *(longlong *)(param_1 + 0xd0)) &&
     (*(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xd0),
     *(longlong *)(param_1 + 0x140) != 0)) {
    (**(code **)(param_1 + 0x140))(*(undefined8 *)(param_1 + 0x148),param_1);
  }
  if ((*(longlong *)(param_1 + 0xe0) != *(longlong *)(param_1 + 200)) &&
     (*(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 200),
     *(longlong *)(param_1 + 0x130) != 0)) {
    (**(code **)(param_1 + 0x130))(*(undefined8 *)(param_1 + 0x138),param_1);
  }
  return;
}

