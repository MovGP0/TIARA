/* Ghidra address: 010e7bd0 */
/* Ghidra symbol: FUN_010e7bd0 */


void FUN_010e7bd0(longlong param_1,byte param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xf8);
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0xf0);
  }
  if (lVar2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 200 + (ulonglong)param_2 * 0x20);
    *puVar1 = *(undefined4 *)(lVar2 + 0x60);
    puVar1[1] = *(undefined4 *)(lVar2 + 100);
    puVar1[2] = *(undefined4 *)(lVar2 + 0x68);
  }
  return;
}

