/* Ghidra address: 018b7d70 */
/* Ghidra symbol: FUN_018b7d70 */


void FUN_018b7d70(longlong param_1)

{
  FUN_01888910(*(undefined8 *)(param_1 + 0x80),
               *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x220) + 0x29));
  FUN_018888f0(*(undefined8 *)(param_1 + 0x80),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1a8) + 0x28));
  FUN_00414ad0(*(longlong *)(param_1 + 0x98) + 0x10,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x1a8) + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 600))(*(longlong **)(param_1 + 0x20),0);
  return;
}

