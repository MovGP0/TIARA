/* Ghidra address: 0199ec70 */
/* Ghidra symbol: FUN_0199ec70 */


void FUN_0199ec70(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  local_30 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  (**(code **)(*param_2 + 0x1f0))(param_2,0,&local_34,&local_38);
  FUN_0199eb40(auStack_58,local_34,local_38);
  iVar5 = *(int *)(local_30 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(local_30,iVar4);
      uVar2 = FUN_0198d430(param_1);
      (**(code **)(*plVar1 + 0xa8))(plVar1,uVar2);
      lVar3 = FUN_004aeac0(local_30,iVar4);
      FUN_00416910(lVar3 + 0x2d8,param_3,0xff);
      plVar1 = (longlong *)FUN_004aeac0(local_30,iVar4);
      uVar2 = FUN_0198d430(param_1);
      (**(code **)(*plVar1 + 0xa0))(plVar1,uVar2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(local_30);
  return;
}

