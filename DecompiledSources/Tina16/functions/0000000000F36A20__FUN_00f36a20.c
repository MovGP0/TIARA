/* Ghidra address: 00f36a20 */
/* Ghidra symbol: FUN_00f36a20 */


undefined4 * FUN_00f36a20(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
              (longlong)*(int *)(param_1 + 0x10) * 0x10);
  FUN_00414ad0(param_2 + 2,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                (longlong)*(int *)(param_1 + 0x10) * 0x10));
  return param_2;
}

