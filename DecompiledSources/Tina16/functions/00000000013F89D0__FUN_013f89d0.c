/* Ghidra address: 013f89d0 */
/* Ghidra symbol: FUN_013f89d0 */


void FUN_013f89d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  lVar2 = *(longlong *)(param_1 + 0x750);
  FUN_01d3aad0(lVar2,0,0);
  FUN_013f76a0(param_1);
  if (*(int *)(param_1 + 0x778) <= *(int *)(lVar2 + 0x10) * 2 + -1) {
    FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + 2);
  }
  local_40[0] = FUN_01d3aab0(lVar2,*(short *)(lVar2 + 0x10) + -1);
  iVar6 = (*(int *)(lVar2 + 0x10) + -1) * 2;
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
            (*(longlong **)(param_1 + 0x770),local_50,iVar6);
  uVar3 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_40[0],0);
  FUN_00b0ab70(lVar1,local_50[0],uVar3);
  FUN_00b909d0(local_40,8);
  lVar4 = FUN_01d3aab0(lVar2,*(short *)(lVar2 + 0x10) + -1);
  puVar5 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,lVar4 + 8,0);
  (**(code **)*puVar5)(puVar5,*(undefined8 *)(param_1 + 0x768));
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
            (*(longlong **)(param_1 + 0x770),&local_58,iVar6 + 1);
  FUN_00b0ab70(lVar1,local_58,puVar5);
  iVar6 = *(int *)(lVar2 + 0x10) * 2;
  iVar7 = *(int *)(lVar1 + 0x4e0) + -1;
  if (iVar6 <= iVar7) {
    iVar7 = iVar7 + *(int *)(lVar2 + 0x10) * -2 + 1;
    do {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_60,0x46a);
      FUN_0084e3e0(lVar1,0,iVar6,local_60);
      FUN_0084e3e0(lVar1,1,iVar6,&LAB_013f8be8);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_60,3);
  return;
}

