/* Ghidra address: 00c487e0 */
/* Ghidra symbol: FUN_00c487e0 */


void FUN_00c487e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x30) + 0x30) = 0;
  uVar1 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x40));
  *(undefined8 *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0x30) + 8) = uVar1;
  return;
}

