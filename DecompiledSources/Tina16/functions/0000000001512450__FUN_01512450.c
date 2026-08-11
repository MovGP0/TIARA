/* Ghidra address: 01512450 */
/* Ghidra symbol: FUN_01512450 */


void FUN_01512450(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xed8);
  FUN_0150eee0(lVar1);
  FUN_0150f200(lVar1);
  FUN_0064de00(*(undefined8 *)(param_1 + 0xd68),*(undefined8 *)(lVar1 + 0x30));
  return;
}

