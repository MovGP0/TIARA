/* Ghidra address: 00c02350 */
/* Ghidra symbol: FUN_00c02350 */


void FUN_00c02350(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(longlong *)(param_1 + 0x800) != 0) {
    (**(code **)(param_1 + 0x800))(*(undefined8 *)(param_1 + 0x808),param_2,param_3,param_4);
  }
  (**(code **)(*(longlong *)(param_1 + 0x4f0) + 0xa8))
            (*(undefined8 *)(*(longlong *)(param_1 + 0x4f0) + 0xb0),param_2,param_3,param_4);
  return;
}

