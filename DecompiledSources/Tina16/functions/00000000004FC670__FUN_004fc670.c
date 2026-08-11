/* Ghidra address: 004fc670 */
/* Ghidra symbol: FUN_004fc670 */


undefined8 FUN_004fc670(longlong param_1,undefined8 param_2)

{
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 8));
  return param_2;
}

