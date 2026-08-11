/* Ghidra address: 00c023c0 */
/* Ghidra symbol: FUN_00c023c0 */


void FUN_00c023c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(longlong *)(param_1 + 0x810) != 0) {
    (**(code **)(param_1 + 0x810))(*(undefined8 *)(param_1 + 0x818),param_2,param_3,param_4);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4f0) + 0xb8))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0xc0),param_2,param_3,param_4);
  return;
}

