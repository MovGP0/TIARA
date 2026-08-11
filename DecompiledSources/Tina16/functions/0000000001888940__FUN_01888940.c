/* Ghidra address: 01888940 */
/* Ghidra symbol: FUN_01888940 */


void FUN_01888940(longlong param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x40) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_1,param_2);
  }
  return;
}

