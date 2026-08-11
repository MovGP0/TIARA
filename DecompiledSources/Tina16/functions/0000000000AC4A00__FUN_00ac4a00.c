/* Ghidra address: 00ac4a00 */
/* Ghidra symbol: FUN_00ac4a00 */


void FUN_00ac4a00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_00410f20(*(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18) + 0x68));
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x18);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x310) = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(lVar1 + 0x30a) = *(undefined1 *)(param_2 + 0x37);
  *(undefined1 *)(lVar1 + 0x309) = *(undefined1 *)(param_2 + 0x36);
  return;
}

