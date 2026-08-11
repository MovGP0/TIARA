/* Ghidra address: 00bbafb0 */
/* Ghidra symbol: FUN_00bbafb0 */


void FUN_00bbafb0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x58)) {
    *(int *)(param_1 + 0x58) = param_2;
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      *(undefined1 *)(param_1 + 0x25) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_1);
    }
  }
  return;
}

