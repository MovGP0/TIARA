/* Ghidra address: 0164bf30 */
/* Ghidra symbol: FUN_0164bf30 */


void FUN_0164bf30(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  FUN_004095f0(*(undefined8 *)(param_1 + 0x28));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x38));
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18));
  }
  FUN_016a95b0(*(undefined8 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xa8));
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0xb0));
  }
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    uVar1 = FUN_004095f0(*(longlong *)(param_1 + 0xb8));
  }
  if (*(char *)(param_1 + 0xc) == '\x04') {
    uVar1 = FUN_016a95b0(*(undefined8 *)(param_1 + 0x58));
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(byte *)(param_1 + 0xc) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (*(byte *)(param_1 + 0xc) & 0x1f) &
              0xfcU) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      iVar3 = *(int *)(param_1 + 4);
      iVar2 = 1;
      if (0 < iVar3) {
        do {
          FUN_016a95b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar2 + -1) * 8));
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return;
}

