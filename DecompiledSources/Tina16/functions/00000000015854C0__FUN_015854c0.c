/* Ghidra address: 015854c0 */
/* Ghidra symbol: FUN_015854c0 */


undefined1 * FUN_015854c0(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
              (longlong)*(int *)(param_1 + 0x10) * 0x18);
  FUN_00417c40(param_2 + 8,
               *(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
               (longlong)*(int *)(param_1 + 0x10) * 0x18,&DAT_01577948);
  return param_2;
}

