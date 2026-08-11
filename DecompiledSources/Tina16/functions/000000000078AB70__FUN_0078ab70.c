/* Ghidra address: 0078ab70 */
/* Ghidra symbol: FUN_0078ab70 */


void FUN_0078ab70(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1,param_2,param_3);
  }
  return;
}

