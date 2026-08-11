/* Ghidra address: 018887e0 */
/* Ghidra symbol: FUN_018887e0 */


void FUN_018887e0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = FUN_01803bf0(param_2,L"picturecache");
  FUN_01887690(*(undefined8 *)(param_1 + 0x18),uVar2);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x48) + 8);
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x48) >> 8),1) <<
               (bVar1 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if (*(char *)(*(longlong *)(param_1 + 0x48) + 8) == '\x03') {
        FUN_01887fe0(param_1);
      }
      uVar2 = FUN_01803bf0(param_2,L"thumbnailcache");
      FUN_01887690(*(undefined8 *)(param_1 + 0x20),uVar2);
    }
  }
  return;
}

