/* Ghidra address: 00ea8e10 */
/* Ghidra symbol: FUN_00ea8e10 */


void FUN_00ea8e10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x60) + 0x20);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = *(longlong *)(param_2 + 0x60);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}

