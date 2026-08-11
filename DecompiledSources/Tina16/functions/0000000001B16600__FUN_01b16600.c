/* Ghidra address: 01b16600 */
/* Ghidra symbol: FUN_01b16600 */


undefined8 FUN_01b16600(longlong param_1,undefined8 param_2)

{
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x20));
  return param_2;
}

