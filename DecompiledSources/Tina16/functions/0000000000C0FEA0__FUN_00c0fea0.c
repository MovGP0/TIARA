/* Ghidra address: 00c0fea0 */
/* Ghidra symbol: FUN_00c0fea0 */


void FUN_00c0fea0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x680) != 0) {
    (**(code **)(param_1 + 0x680))(*(undefined8 *)(param_1 + 0x688),param_1);
  }
  return;
}

