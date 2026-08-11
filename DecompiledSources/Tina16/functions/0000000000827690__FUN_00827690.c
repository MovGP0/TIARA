/* Ghidra address: 00827690 */
/* Ghidra symbol: FUN_00827690 */


void FUN_00827690(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0x110) == 0)) {
    FUN_004aee50(*(undefined8 *)(param_1 + 8),param_2,0);
    FUN_00410f20(param_2);
  }
  return;
}

