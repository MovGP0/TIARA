/* Ghidra address: 00c02300 */
/* Ghidra symbol: FUN_00c02300 */


void FUN_00c02300(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    (**(code **)(param_1 + 0x7f0))(*(undefined8 *)(param_1 + 0x7f8),param_2);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4f0) + 0x98))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0xa0),param_2);
  return;
}

