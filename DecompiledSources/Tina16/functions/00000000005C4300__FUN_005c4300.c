/* Ghidra address: 005c4300 */
/* Ghidra symbol: FUN_005c4300 */


undefined2 * FUN_005c4300(longlong param_1,undefined2 *param_2)

{
  *param_2 = *(undefined2 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
              (longlong)*(int *)(param_1 + 0x10) * 0x38);
  FUN_00417c40(param_2 + 4,
               *(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
               (longlong)*(int *)(param_1 + 0x10) * 0x38,&DAT_005bc4e0);
  return param_2;
}

