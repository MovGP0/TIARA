/* Ghidra address: 01cc8000 */
/* Ghidra symbol: FUN_01cc8000 */


void FUN_01cc8000(longlong param_1)

{
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x438),
               *(undefined8 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 100);
  return;
}

