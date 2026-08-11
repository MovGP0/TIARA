/* Ghidra address: 004d0aa0 */
/* Ghidra symbol: FUN_004d0aa0 */


void FUN_004d0aa0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(*(longlong *)(param_2 + 0x60) + 0x20);
  *(undefined1 *)(param_2 + 0x3b) = *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0x1c);
  (**(code **)**(undefined8 **)(param_2 + 0x60))(*(undefined8 *)(param_2 + 0x60));
  *(undefined1 *)(*(longlong *)(param_2 + 0x60) + 0x1d) = 1;
  FUN_004d06e0();
  if (*(char *)(param_2 + 0x3b) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x60));
  }
  FUN_00414320(*(undefined4 *)(param_2 + 0x3c));
  return;
}

