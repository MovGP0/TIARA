/* Ghidra address: 01888710 */
/* Ghidra symbol: FUN_01888710 */


void FUN_01888710(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_01888970(param_1);
  iVar1 = FUN_01803b80(param_2,L"picturecache");
  if (-1 < iVar1) {
    uVar2 = FUN_018039f0(param_2,iVar1);
    FUN_01887480(*(undefined8 *)(param_1 + 0x18),uVar2);
  }
  iVar1 = FUN_01803b80(param_2,L"thumbnailcache");
  if (-1 < iVar1) {
    uVar2 = FUN_018039f0(param_2,iVar1);
    FUN_01887480(*(undefined8 *)(param_1 + 0x20),uVar2);
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 8) == '\0') {
      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 8) = 1;
    }
  }
  return;
}

