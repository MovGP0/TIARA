/* Ghidra address: 01566510 */
/* Ghidra symbol: FUN_01566510 */


void FUN_01566510(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = FUN_01566240();
  if (lVar3 != 0) {
    uVar1 = (**(code **)(*param_2 + 0x1c8))(param_2);
    iVar2 = FUN_00b905f0(uVar1,*(undefined4 *)(lVar3 + 0x10));
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar1 = (**(code **)(*param_2 + 0x210))(param_2,iVar5);
        lVar4 = FUN_004aeac0(lVar3,iVar5);
        *(undefined4 *)(lVar4 + 0xc) = uVar1;
        lVar4 = FUN_004aeac0(lVar3,iVar5);
        (**(code **)(*param_2 + 0x208))(param_2,iVar5,*(undefined4 *)(lVar4 + 8),0);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

