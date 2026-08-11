/* Ghidra address: 01966b80 */
/* Ghidra symbol: FUN_01966b80 */


void FUN_01966b80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x2c8);
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x50);
  *(code **)(lVar1 + 0x20) = FUN_01966ec0;
  return;
}

