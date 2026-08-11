/* Ghidra address: 009a9e50 */
/* Ghidra symbol: FUN_009a9e50 */


undefined4 * FUN_009a9e50(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
              (longlong)*(int *)(param_1 + 0x10) * 0x18);
  FUN_00417c40(param_2 + 2,
               *(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
               (longlong)*(int *)(param_1 + 0x10) * 0x18,&DAT_009427f8);
  return param_2;
}

