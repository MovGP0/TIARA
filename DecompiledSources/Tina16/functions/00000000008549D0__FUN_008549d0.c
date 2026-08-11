/* Ghidra address: 008549d0 */
/* Ghidra symbol: FUN_008549d0 */


longlong FUN_008549d0(longlong param_1,longlong param_2)

{
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x18));
  FUN_00414ad0(param_2 + 8,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
                (longlong)*(int *)(param_1 + 0x10) * 0x18));
  return param_2;
}

