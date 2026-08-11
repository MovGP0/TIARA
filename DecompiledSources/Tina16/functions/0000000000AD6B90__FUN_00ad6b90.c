/* Ghidra address: 00ad6b90 */
/* Ghidra symbol: FUN_00ad6b90 */


ulonglong FUN_00ad6b90(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RSI;
  
  iVar3 = FUN_009f4440(param_2);
  if (iVar3 != -1) {
    uVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0xe8),
                         *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1);
    FUN_00a53800(uVar4,iVar3);
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = FUN_004aeac0(*(longlong *)(param_1 + 0xe8),
                         *(int *)(*(longlong *)(param_1 + 0xe8) + 0x10) + -1);
    uVar1 = *(undefined4 *)(lVar5 + 0x70);
    if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
      if (*(longlong *)(lVar2 + 0x28) == 0) {
        FUN_00a02aa0(lVar2,uVar1,uVar1);
      }
      else {
        FUN_00a02aa0(lVar2,uVar1,*(undefined4 *)(*(longlong *)(lVar2 + 0x28) + 0x1c));
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar3 != -1) & 0xffffffff;
}

