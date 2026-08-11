/* Ghidra address: 0084b5c0 */
/* Ghidra symbol: FUN_0084b5c0 */


longlong FUN_0084b5c0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = param_2 >> (*(byte *)(param_1 + 0x16) & 0x1f);
  if (uVar3 < *(uint *)(param_1 + 0x10)) {
    lVar1 = *(longlong *)(param_1 + 8);
  }
  else {
    lVar1 = FUN_0084b310(*(undefined8 *)(param_1 + 8),param_1 + 0x10,uVar3 + 1);
  }
  *(longlong *)(param_1 + 8) = lVar1;
  lVar2 = *(longlong *)(lVar1 + (ulonglong)uVar3 * 8);
  if (lVar2 == 0) {
    lVar2 = FUN_0084b370(uVar3,*(undefined2 *)(param_1 + 0x1c));
    *(longlong *)(lVar1 + (ulonglong)uVar3 * 8) = lVar2;
  }
  if (*(int *)(param_1 + 0x18) < (int)param_2) {
    *(uint *)(param_1 + 0x18) = param_2;
  }
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  return lVar2 + (int)((param_2 & *(ushort *)(param_1 + 0x14)) * 8);
}

