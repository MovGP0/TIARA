/* Ghidra address: 015f3110 */
/* Ghidra symbol: FUN_015f3110 */


void FUN_015f3110(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xe8) != 0) {
    FUN_00e08170(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x10) + 8));
  }
  if (*(longlong *)(param_2 + 0xe8) != 0) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0xe8));
  }
  *(undefined8 *)(param_2 + 0xe0) = *(undefined8 *)(param_2 + 0xd8);
  return;
}

