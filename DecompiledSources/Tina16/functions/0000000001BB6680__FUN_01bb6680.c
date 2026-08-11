/* Ghidra address: 01bb6680 */
/* Ghidra symbol: FUN_01bb6680 */


void FUN_01bb6680(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))(*(longlong **)(param_1 + 0x6e8));
  if (0 < iVar1) {
    local_30 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x30))
                         (*(longlong **)(param_1 + 0x6e8),
                          *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4ac) -
                          *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4c0));
    uVar3 = FUN_017ff620(local_30);
    iVar1 = FUN_01c8a290(*(undefined8 *)PTR_DAT_02004e40,uVar3,0);
    iVar2 = FUN_006d5120(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1350));
    if (iVar1 != iVar2) {
      uVar3 = FUN_017ff620(local_30);
      FUN_01c8ab30(*(undefined8 *)PTR_DAT_02004e40,uVar3,0);
    }
    if ((*(longlong *)(param_1 + 0x6f0) != 0) &&
       (lVar4 = FUN_0198d430(*(longlong *)(param_1 + 0x6f0)), lVar4 != 0)) {
      FUN_01994230(*(undefined8 *)(param_1 + 0x6f0));
      FUN_01993f30(*(undefined8 *)(param_1 + 0x6f0),local_30,1,0);
      lVar4 = *(longlong *)(param_1 + 0x6f0);
      iVar1 = *(int *)(lVar4 + 0x10);
      iVar2 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar3 = FUN_00b94e60(lVar4,iVar2);
          FUN_01bb6550(auStack_58,uVar3);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}

