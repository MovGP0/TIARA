/* Ghidra address: 00d3a5c0 */
/* Ghidra symbol: FUN_00d3a5c0 */


undefined8 FUN_00d3a5c0(longlong param_1,undefined8 param_2)

{
  FUN_004238d0(param_2,0,0,0,0);
  if ((*(longlong *)(param_1 + 0x18) != 0) && (-1 < *(int *)(param_1 + 8))) {
    thunk_FUN_040e16aa(0,*(longlong *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),param_2);
  }
  return param_2;
}

