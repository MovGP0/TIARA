/* Ghidra address: 00bd0b20 */
/* Ghidra symbol: FUN_00bd0b20 */


void FUN_00bd0b20(longlong param_1,char param_2)

{
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x80),param_1);
    }
  }
  else if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x90),param_1);
  }
  return;
}

