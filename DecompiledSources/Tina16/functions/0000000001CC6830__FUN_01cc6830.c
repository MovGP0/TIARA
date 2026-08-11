/* Ghidra address: 01cc6830 */
/* Ghidra symbol: FUN_01cc6830 */


void FUN_01cc6830(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(int *)(*(longlong *)(param_1 + 8) + 0x450) + param_2);
  puVar1 = (undefined8 *)(lVar2 + 0x48 + (longlong)param_3 * 0x11);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(lVar2 + 0xd0 + (longlong)param_3 * 0x10) = *(undefined8 *)(lVar2 + 0x168);
  puVar1 = (undefined8 *)(lVar2 + 0x48 + (longlong)(param_3 + 1) * 0x11);
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined8 *)(lVar2 + 0xd0 + (longlong)(param_3 + 1) * 0x10) = *(undefined8 *)(lVar2 + 0x168);
  return;
}

