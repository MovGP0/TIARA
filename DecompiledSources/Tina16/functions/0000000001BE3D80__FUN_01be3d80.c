/* Ghidra address: 01be3d80 */
/* Ghidra symbol: FUN_01be3d80 */


void FUN_01be3d80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_2 + 0xb8) + 0x78) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x3c0))(*(undefined8 *)(param_2 + 0xe0));
  }
  return;
}

