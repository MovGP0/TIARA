/* Ghidra address: 00820c60 */
/* Ghidra symbol: FUN_00820c60 */


void FUN_00820c60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0xc0);
  *(undefined8 *)(lVar1 + 0x4f8) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar1 + 0x500) = *(undefined8 *)(param_2 + 0x88);
  return;
}

