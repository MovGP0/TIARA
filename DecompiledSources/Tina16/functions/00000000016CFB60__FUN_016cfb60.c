/* Ghidra address: 016cfb60 */
/* Ghidra symbol: FUN_016cfb60 */


void FUN_016cfb60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  
  if (param_2 != 0) {
    FUN_016c52d0(param_2,*(undefined8 *)(param_2 + 0x9e8),*(undefined8 *)(param_2 + 0x9f8),0);
    iVar5 = *(int *)(*(longlong *)(param_2 + 0xdb8) + 0x10);
    uVar3 = 0;
    if (iVar5 - 1U < 0x80000000) {
      do {
        lVar1 = *(longlong *)(param_2 + 0xdb8);
        if (*(uint *)(lVar1 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        local_38 = *(undefined8 *)(param_2 + 0x9f8);
        FUN_016cf7c0(auStack_58,*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8)
                     ,*(undefined8 *)(param_2 + 0x9e8),0);
        uVar3 = uVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x9b8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_01d347d0(*(undefined8 *)(param_2 + 0x9b8),iVar4);
        FUN_016cf990(auStack_58,uVar2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

