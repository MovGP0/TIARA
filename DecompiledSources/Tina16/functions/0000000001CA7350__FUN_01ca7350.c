/* Ghidra address: 01ca7350 */
/* Ghidra symbol: FUN_01ca7350 */


undefined8 * FUN_01ca7350(longlong param_1,undefined8 *param_2)

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

