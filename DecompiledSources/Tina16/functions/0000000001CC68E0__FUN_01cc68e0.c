/* Ghidra address: 01cc68e0 */
/* Ghidra symbol: FUN_01cc68e0 */


void FUN_01cc68e0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(int *)(*(longlong *)(param_1 + 8) + 0x450) + param_2);
  lVar1 = lVar2 + 0x48 + (longlong)param_3 * 0x11;
  *(undefined8 *)(lVar1 + 8) = param_4;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar2 + (longlong)param_3 * 0x10 + 0xd8) = *(undefined8 *)(lVar2 + 0x168);
  lVar1 = lVar2 + 0x48 + (longlong)(param_3 + 1) * 0x11;
  *(undefined8 *)(lVar1 + 8) = param_5;
  *(undefined1 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar2 + (longlong)(param_3 + 1) * 0x10 + 0xd8) = *(undefined8 *)(lVar2 + 0x168);
  return;
}

