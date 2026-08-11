/* Ghidra address: 01c8a190 */
/* Ghidra symbol: FUN_01c8a190 */


void FUN_01c8a190(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x27a8) + 0x98) =
       *(undefined1 *)(*(longlong *)(param_1 + 0xca8) + 0x80);
  FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x498),0);
  FUN_007fa6c0(*(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x4b0),0);
  (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
  return;
}

