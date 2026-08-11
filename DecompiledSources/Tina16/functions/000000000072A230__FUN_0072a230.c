/* Ghidra address: 0072a230 */
/* Ghidra symbol: FUN_0072a230 */


undefined8 FUN_0072a230(longlong param_1,undefined8 param_2)

{
  if ((*(longlong *)(param_1 + 0x38) == 0) ||
     (((*(uint *)(*(longlong *)(param_1 + 0x20) + 200) & 0x10) == 0 &&
      ((*(uint *)(*(longlong *)(param_1 + 0x20) + 200) & 0x20) == 0)))) {
    FUN_00729ef0(param_1,param_2);
  }
  else {
    FUN_00416cd0(param_2,3,*(undefined8 *)(param_1 + 0x18),&LAB_0072a2a8,
                 *(undefined8 *)(param_1 + 0x38));
  }
  return param_2;
}

