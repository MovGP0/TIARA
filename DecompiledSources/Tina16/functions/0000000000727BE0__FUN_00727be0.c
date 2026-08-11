/* Ghidra address: 00727be0 */
/* Ghidra symbol: FUN_00727be0 */


void FUN_00727be0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined8 *)(param_1 + 0x160),param_1,param_2);
  }
  return;
}

