/* Ghidra address: 00ea8fa0 */
/* Ghidra symbol: FUN_00ea8fa0 */


void FUN_00ea8fa0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x20);
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  lVar1 = *(longlong *)(param_2 + 0x70);
  *(undefined8 *)(lVar1 + 8) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}

