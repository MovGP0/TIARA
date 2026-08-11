/* Ghidra address: 01d30db0 */
/* Ghidra symbol: FUN_01d30db0 */


ulonglong FUN_01d30db0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
  lVar2 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
  FUN_01d31a90(param_1);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar2 <= lVar1) & 0xffffffff;
}

