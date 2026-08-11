/* Ghidra address: 00af1860 */
/* Ghidra symbol: FUN_00af1860 */


void FUN_00af1860(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  if (*(longlong *)(param_1 + 0x960) == 0) {
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      (**(code **)(param_1 + 0x5a8))(*(undefined8 *)(param_1 + 0x5b0));
    }
  }
  else {
    *param_4 = *(longlong *)(param_1 + 0x960);
  }
  return;
}

