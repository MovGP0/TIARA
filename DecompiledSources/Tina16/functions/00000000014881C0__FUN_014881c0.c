/* Ghidra address: 014881c0 */
/* Ghidra symbol: FUN_014881c0 */


longlong FUN_014881c0(longlong param_1,longlong param_2)

{
  FUN_00414ad0(param_2,*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x18));
  *(undefined1 *)(param_2 + 8) =
       *(undefined1 *)
        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
        (longlong)*(int *)(param_1 + 0x10) * 0x18);
  return param_2;
}

