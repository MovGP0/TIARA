/* Ghidra address: 01cbfd00 */
/* Ghidra symbol: FUN_01cbfd00 */


undefined8 FUN_01cbfd00(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,*(longlong *)(param_1 + 8));
  }
  return param_2;
}

