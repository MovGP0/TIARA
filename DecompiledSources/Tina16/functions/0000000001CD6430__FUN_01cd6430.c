/* Ghidra address: 01cd6430 */
/* Ghidra symbol: FUN_01cd6430 */


undefined8 FUN_01cd6430(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0xd8));
  }
  else {
    FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0xd8),&LAB_01cd6498,
                 *(undefined8 *)(param_1 + 0xe0));
  }
  return param_2;
}

