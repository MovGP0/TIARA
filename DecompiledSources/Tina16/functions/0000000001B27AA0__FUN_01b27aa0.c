/* Ghidra address: 01b27aa0 */
/* Ghidra symbol: FUN_01b27aa0 */


undefined8 * FUN_01b27aa0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
              (longlong)*(int *)(param_1 + 0x10) * 0x18);
  FUN_00414ad0(param_2 + 1,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
                (longlong)*(int *)(param_1 + 0x10) * 0x18));
  return param_2;
}

