/* Ghidra address: 00c02430 */
/* Ghidra symbol: FUN_00c02430 */


void FUN_00c02430(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(longlong *)(param_1 + 0x820) != 0) {
    (**(code **)(param_1 + 0x820))(*(undefined8 *)(param_1 + 0x828),param_2,param_3,param_4);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4f0) + 200))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0xd0),param_2,param_3,param_4);
  return;
}

