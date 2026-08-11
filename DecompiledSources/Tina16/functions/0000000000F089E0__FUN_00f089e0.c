/* Ghidra address: 00f089e0 */
/* Ghidra symbol: FUN_00f089e0 */


void FUN_00f089e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  FUN_00f07ca0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(lVar1 + 0x965),
               *(undefined8 *)(lVar1 + 0x96d),*(undefined2 *)(lVar1 + 0x963),
               *(undefined1 *)(lVar1 + 0x975),*(undefined2 *)(lVar1 + 0x976));
  FUN_0064cf60(param_1,0x44d);
  return;
}

