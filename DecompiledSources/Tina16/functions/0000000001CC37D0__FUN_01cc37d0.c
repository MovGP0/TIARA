/* Ghidra address: 01cc37d0 */
/* Ghidra symbol: FUN_01cc37d0 */


undefined8 FUN_01cc37d0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x458) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_004167d0(param_2,*(longlong *)(param_1 + 0x458));
  }
  return param_2;
}

