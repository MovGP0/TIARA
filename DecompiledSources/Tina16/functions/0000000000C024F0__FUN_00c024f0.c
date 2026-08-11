/* Ghidra address: 00c024f0 */
/* Ghidra symbol: FUN_00c024f0 */


void FUN_00c024f0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x840) != 0) {
    (**(code **)(param_1 + 0x840))(*(undefined8 *)(param_1 + 0x848),param_2);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4f0) + 0x78))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0x80),param_2);
  return;
}

