/* Ghidra address: 0060a540 */
/* Ghidra symbol: FUN_0060a540 */


void FUN_0060a540(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x80);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(param_2 + 0x48);
  return;
}

