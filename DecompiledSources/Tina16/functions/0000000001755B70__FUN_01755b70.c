/* Ghidra address: 01755b70 */
/* Ghidra symbol: FUN_01755b70 */


void FUN_01755b70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

