/* Ghidra address: 00a37660 */
/* Ghidra symbol: FUN_00a37660 */


bool FUN_00a37660(longlong param_1,longlong *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 local_res18 [4];
  undefined8 local_80;
  uint local_78;
  uint local_74;
  undefined1 local_70 [104];
  
  local_80 = 0;
  local_res18[0] = param_3;
  uVar3 = FUN_00a33e20(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x160),0);
  lVar4 = FUN_004113f0(uVar3,&PTR_FUN_00a30a98);
  *(longlong *)(param_1 + 0x28) = lVar4;
  if (*(char *)(lVar4 + 0x40) != '\0') {
    FUN_00a35ba0(param_1);
  }
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x488);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x48c);
  local_78 = FUN_00a32ea0(0xffffffff,local_res18,4);
  FUN_00a399f0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x38,param_1 + 0x3c);
  FUN_00a33290(local_70,param_2);
  iVar2 = FUN_004b6da0(param_2);
  *(int *)(param_1 + 0x84) = iVar2 + param_4;
  uVar3 = FUN_004095c0(*(int *)(param_1 + 0x38) + 1);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  uVar3 = FUN_004095c0(*(int *)(param_1 + 0x38) + 1);
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  FUN_0040d200(*(undefined8 *)(param_1 + 0x70),*(int *)(param_1 + 0x38) + 1,0);
  *(undefined1 *)(param_1 + 0x80) = 1;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x158);
  if (cVar1 == '\0') {
    FUN_00a36fb0(param_1,param_2,local_70,param_4,&local_78);
  }
  else if (cVar1 == '\x01') {
    FUN_00a366d0(param_1,param_2,local_70,param_4,&local_78);
  }
  FUN_00a33370(local_70);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x70),*(int *)(param_1 + 0x38) + 1);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x78),*(int *)(param_1 + 0x38) + 1);
  (**(code **)(*param_2 + 0x18))(param_2,&local_74,4);
  local_78 = ~local_78;
  local_74 = FUN_00a32f80(local_74);
  bVar5 = local_74 == local_78;
  if (!bVar5) {
    FUN_0041ddd0(&local_80,PTR_PTR_02004d00);
    FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d170,local_80);
  }
  FUN_00414480(&local_80);
  return bVar5;
}

