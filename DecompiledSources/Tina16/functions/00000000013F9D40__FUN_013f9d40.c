/* Ghidra address: 013f9d40 */
/* Ghidra symbol: FUN_013f9d40 */


void FUN_013f9d40(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x6d0);
  FUN_00848790(uVar1,1);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,local_40,0x474);
  FUN_0084e3e0(uVar1,0,0,local_40[0]);
  uVar3 = FUN_00b89270();
  FUN_00b8e520(uVar3,&local_48,0x475);
  FUN_0084e3e0(uVar1,1,0,local_48);
  lVar2 = *(longlong *)(param_1 + 0x708);
  iVar5 = *(int *)(lVar2 + 0x10);
  local_64 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_01d3c000(lVar2,local_64);
      uVar3 = FUN_01d3c000(lVar2,local_64);
      puVar4 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,uVar3,0);
      (**(code **)*puVar4)(puVar4,*(undefined8 *)(param_1 + 0x718));
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0x18))
                (*(longlong **)(param_1 + 0x720),&local_50,local_64);
      FUN_00b0ab70(uVar1,local_50,puVar4);
      local_64 = local_64 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  lVar2 = *(longlong *)(param_1 + 0x710);
  iVar5 = *(int *)(lVar2 + 0x10);
  local_64 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_01d3c000(lVar2,local_64);
      uVar3 = FUN_01d3c000(lVar2,local_64);
      puVar4 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,uVar3,0);
      (**(code **)*puVar4)(puVar4,*(undefined8 *)(param_1 + 0x718));
      (**(code **)(**(longlong **)(param_1 + 0x720) + 0x18))
                (*(longlong **)(param_1 + 0x720),&local_58,
                 *(int *)(*(longlong *)(param_1 + 0x708) + 0x10) + local_64);
      FUN_00b0ab70(uVar1,local_58,puVar4);
      local_64 = local_64 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_64 = *(int *)(*(longlong *)(param_1 + 0x708) + 0x10) +
             *(int *)(*(longlong *)(param_1 + 0x710) + 0x10) + 1;
  iVar5 = *(int *)(param_1 + 0x728) + -1;
  if (local_64 <= iVar5) {
    iVar5 = (iVar5 - local_64) + 1;
    do {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_60,0x476);
      FUN_0084e3e0(uVar1,0,local_64,local_60);
      FUN_0084e3e0(uVar1,1,local_64,&LAB_013fa028);
      local_64 = local_64 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_60,5);
  return;
}

