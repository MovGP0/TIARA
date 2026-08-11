/* Ghidra address: 006ebec0 */
/* Ghidra symbol: FUN_006ebec0 */


void FUN_006ebec0(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    (**(code **)(param_1 + 0x4c0))(*(undefined8 *)(param_1 + 0x4c8),param_1,param_2);
  }
  return;
}

