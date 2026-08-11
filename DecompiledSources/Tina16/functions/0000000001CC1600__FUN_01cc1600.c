/* Ghidra address: 01cc1600 */
/* Ghidra symbol: FUN_01cc1600 */


undefined8 FUN_01cc1600(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x40) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,*(longlong *)(param_1 + 0x40));
  }
  return param_2;
}

