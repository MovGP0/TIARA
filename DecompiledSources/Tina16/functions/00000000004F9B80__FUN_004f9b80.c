/* Ghidra address: 004f9b80 */
/* Ghidra symbol: FUN_004f9b80 */


undefined8 FUN_004f9b80(longlong param_1,undefined8 param_2)

{
  FUN_0041b840(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) +
                        (longlong)*(int *)(param_1 + 0x10) * 8));
  return param_2;
}

