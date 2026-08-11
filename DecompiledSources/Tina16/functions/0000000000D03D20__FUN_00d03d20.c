/* Ghidra address: 00d03d20 */
/* Ghidra symbol: FUN_00d03d20 */


void FUN_00d03d20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x7f) != '\0') {
    FUN_004b8ba0(*(undefined8 *)(param_2 + 0x70),
                 *(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x118),0);
    FUN_00410f20(*(undefined8 *)(param_2 + 0x68));
    *(undefined8 *)(*(longlong *)(param_2 + 0xd0) + 0x118) = *(undefined8 *)(param_2 + 0x70);
  }
  return;
}

