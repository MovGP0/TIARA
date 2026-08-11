/* Ghidra address: 01c0b220 */
/* Ghidra symbol: FUN_01c0b220 */


void FUN_01c0b220(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int local_20;
  int local_1c;
  
  FUN_01be9b40(param_1);
  lVar1 = *(longlong *)(param_1 + 0x310);
  lVar2 = FUN_01c03e40(*(undefined8 *)(param_1 + 0x368));
  FUN_005fd4e0(*(undefined8 *)(lVar1 + 0x78),*(undefined4 *)(lVar2 + 0x9c));
  FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),
               *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + 0x78) + 0x18) + 0x28));
  local_20 = *(int *)(param_1 + 0x98) + -0xb;
  local_1c = *(int *)(param_1 + 0x9c) / 2 + -3;
  FUN_00635a10(*(undefined8 *)(param_1 + 0x310),
               CONCAT71((uint7)((ulonglong)((longlong)*(int *)(param_1 + 0x9c) % 2) >> 8) & 0xffffff
                        ,1),&local_20,3);
  return;
}

