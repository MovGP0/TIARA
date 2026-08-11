/* Ghidra address: 00b9c200 */
/* Ghidra symbol: FUN_00b9c200 */


void FUN_00b9c200(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_00b9c140(param_1);
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

