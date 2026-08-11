/* Ghidra address: 00f4b4d0 */
/* Ghidra symbol: FUN_00f4b4d0 */


void FUN_00f4b4d0(longlong param_1)

{
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6c0),
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468) + 0x10)
              );
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x6c0),
               *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468)
                       + 0x10) * 0x10 + 0x13);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x6c8),
               *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468)
                       + 0x10) * 0x10 + 0x45);
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x6b0),
               *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468)
                       + 0x10) * 0x10 + 0x6e);
  FUN_0064cc50(param_1,*(int *)(*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468) +
                               0x10) * 0x10 + 0x89);
  return;
}

