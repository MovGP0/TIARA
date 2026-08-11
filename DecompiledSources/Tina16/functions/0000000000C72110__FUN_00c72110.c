/* Ghidra address: 00c72110 */
/* Ghidra symbol: FUN_00c72110 */


void FUN_00c72110(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0x110) == 0)) {
    FUN_004aee30(*(undefined8 *)(param_1 + 8),param_2);
    FUN_00410f20(param_2);
  }
  return;
}

