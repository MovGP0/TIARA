/* Ghidra address: 01cc0ae0 */
/* Ghidra symbol: FUN_01cc0ae0 */


undefined8 FUN_01cc0ae0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,*(longlong *)(param_1 + 0x10));
  }
  return param_2;
}

