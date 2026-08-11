/* Ghidra address: 013f7aa0 */
/* Ghidra symbol: FUN_013f7aa0 */


void FUN_013f7aa0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x6e0);
  lVar2 = *(longlong *)(param_1 + 0x750);
  FUN_00848790(uVar1,1);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,local_50,0x468);
  FUN_0084e3e0(uVar1,0,0,local_50[0]);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_58,0x469);
  FUN_0084e3e0(uVar1,1,0,local_58);
  local_40[0] = FUN_01d3aab0(lVar2,0);
  FUN_00b909d0(local_40,8);
  puVar4 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,local_40[0],0);
  (**(code **)*puVar4)(puVar4,*(undefined8 *)(param_1 + 0x768));
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
            (*(longlong **)(param_1 + 0x770),&local_60,1);
  FUN_00b0ab70(uVar1,local_60,puVar4);
  local_7c = 2;
  iVar6 = *(int *)(lVar2 + 0x10) + -1;
  local_80 = 1;
  if (0 < iVar6) {
    do {
      local_40[0] = FUN_01d3aab0(lVar2,local_80);
      (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
                (*(longlong **)(param_1 + 0x770),&local_68,local_7c);
      uVar3 = FUN_014313c0(&PTR_FUN_0142bf08,1,local_40[0],0);
      FUN_00b0ab70(uVar1,local_68,uVar3);
      FUN_00b909d0(local_40,8);
      lVar5 = FUN_01d3aab0(lVar2,local_80);
      puVar4 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,lVar5 + 8);
      (**(code **)*puVar4)(puVar4,*(undefined8 *)(param_1 + 0x768));
      (**(code **)(**(longlong **)(param_1 + 0x770) + 0x18))
                (*(longlong **)(param_1 + 0x770),&local_70,local_7c + 1);
      FUN_00b0ab70(uVar1,local_70,puVar4);
      local_7c = local_7c + 2;
      local_80 = local_80 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0) < local_7c) {
    FUN_00848a70(*(longlong *)(param_1 + 0x6e0),local_7c);
  }
  local_80 = *(int *)(lVar2 + 0x10) * 2;
  iVar6 = *(int *)(param_1 + 0x778) + -1;
  if (local_80 <= iVar6) {
    iVar6 = iVar6 + *(int *)(lVar2 + 0x10) * -2 + 1;
    do {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_78,0x46a);
      FUN_0084e3e0(uVar1,0,local_80,local_78);
      FUN_0084e3e0(uVar1,1,local_80,&LAB_013f7db8);
      local_80 = local_80 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_78,6);
  return;
}

