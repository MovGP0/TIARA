/* Ghidra address: 013662d0 */
/* Ghidra symbol: FUN_013662d0 */


void FUN_013662d0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  
  *(undefined1 *)((longlong)param_1 + 0x23) = 0;
  (**(code **)(*param_1 + 0x68))(param_1,0x3f4e);
  lVar1 = *(longlong *)(param_1[2] + 0x27a8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  local_30 = lVar1;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar4);
      FUN_01366230(auStack_58,uVar3);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined1 *)(local_30 + 0xd1) = 1;
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,uVar2);
  return;
}

