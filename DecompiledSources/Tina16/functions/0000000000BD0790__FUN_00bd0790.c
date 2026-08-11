/* Ghidra address: 00bd0790 */
/* Ghidra symbol: FUN_00bd0790 */


void FUN_00bd0790(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 != *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = param_2;
    uVar3 = FUN_00bcc1d0();
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x40);
    iVar2 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28;
        *(undefined4 *)(lVar1 + 0x18) = 0xffffffff;
        *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & 0xfd;
        *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) | 4;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

