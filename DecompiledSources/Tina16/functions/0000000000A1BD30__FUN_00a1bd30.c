/* Ghidra address: 00a1bd30 */
/* Ghidra symbol: FUN_00a1bd30 */


void FUN_00a1bd30(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x48))(param_1,1);
    if (*(int *)(param_1 + 0x20) == 0) {
      *(undefined4 *)(param_1 + 0x24) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = 200;
      *(undefined8 *)(param_1 + 400) = 0;
    }
  }
  return;
}

