/* Ghidra address: 018b9460 */
/* Ghidra symbol: FUN_018b9460 */


void FUN_018b9460(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x20) + 0x1a8);
  if ((*(char *)(lVar2 + 0x30) != '\0') &&
     (*(int *)(lVar2 + 0xc) * 0x100000 < *(int *)(*(longlong *)(param_1 + 0x60) + 0xa0))) {
    iVar1 = FUN_01803a10(*(undefined8 *)(param_1 + 0x38));
    iVar1 = iVar1 + -2;
    if (-1 < iVar1) {
      do {
        lVar2 = FUN_018039f0(*(undefined8 *)(param_1 + 0x38),iVar1);
        if (*(char *)(lVar2 + 0x18) == '\0') break;
        uVar3 = FUN_018039f0(*(undefined8 *)(param_1 + 0x38),iVar1);
        FUN_018047a0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x98),uVar3);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xa0) = 0;
  }
  return;
}

