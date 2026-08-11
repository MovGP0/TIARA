/* Ghidra address: 0161c2e0 */
/* Ghidra symbol: FUN_0161c2e0 */


undefined8 FUN_0161c2e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 8);
  puVar4 = (undefined4 *)FUN_004095c0(0xd0);
  FUN_0040d200(puVar4,0xd0,0);
  *puVar4 = 0x104;
  *(undefined8 *)(puVar4 + 2) = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(longlong *)(puVar4 + 0x26) = param_1;
  puVar4[0x12] = *(undefined4 *)(param_1 + 0xc);
  *(longlong *)(puVar4 + 0x28) = lVar2;
  *(longlong *)(puVar4 + 0x2a) = lVar1;
  *(undefined1 *)(puVar4 + 0x2c) = 1;
  uVar5 = FUN_0161bc10(*(undefined4 *)(lVar1 + 0x5bc),*(undefined8 *)(lVar2 + 0x48));
  FUN_01636fd0(uVar5,local_30,*(undefined4 *)(param_1 + 0xc));
  iVar3 = 0;
  if (local_30[0] != 0) {
    iVar3 = *(int *)(local_30[0] + -4);
  }
  uVar5 = FUN_00409570((longlong)(iVar3 + 1));
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  FUN_00415dd0(local_40,local_30[0],0);
  FUN_004425e0(uVar5,local_40[0]);
  uVar5 = FUN_01615c90(puVar4);
  FUN_004144d0(local_40);
  FUN_00414480(local_30);
  return uVar5;
}

