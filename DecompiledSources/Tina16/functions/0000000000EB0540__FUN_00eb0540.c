/* Ghidra address: 00eb0540 */
/* Ghidra symbol: FUN_00eb0540 */


undefined8 FUN_00eb0540(longlong param_1,undefined8 param_2)

{
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x18));
  return param_2;
}

