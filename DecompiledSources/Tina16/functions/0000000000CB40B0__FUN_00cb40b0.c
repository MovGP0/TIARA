/* Ghidra address: 00cb40b0 */
/* Ghidra symbol: FUN_00cb40b0 */


void FUN_00cb40b0(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_res10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res10 = param_2;
  if (param_2 == -1) {
    local_res10 = -2;
  }
  local_20 = FUN_00cb4660(&PTR_FUN_00cb3ec8,1,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x158)
                         );
  cVar1 = FUN_00c8c9b0(&PTR_FUN_00c8c438);
  if (cVar1 == '\0') {
    local_24 = 0x7d;
  }
  else {
    local_24 = FUN_008764d0(*(undefined4 *)(*(longlong *)PTR_DAT_02005b88 + 0x7c),0x7d);
  }
  if (local_res10 == -2) {
    while (*(char *)(local_20 + 0x1a) == '\0') {
      FUN_008766a0(local_24);
      FUN_00c8c8a0(&PTR_FUN_00c8c438,1,0);
    }
  }
  else {
    while ((0 < local_res10 && (*(char *)(local_20 + 0x1a) == '\0'))) {
      uVar2 = FUN_008764d0(local_res10,local_24);
      FUN_008766a0(uVar2);
      FUN_00c8c8a0(&PTR_FUN_00c8c438,1,0);
      iVar3 = FUN_008764d0(local_res10,local_24);
      local_res10 = local_res10 - iVar3;
    }
  }
  if (*(char *)(local_20 + 0x1a) == '\0') {
    FUN_004d1f00(local_20);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x120))(*(longlong **)(param_1 + 0x70));
    FUN_004d1f40(local_20);
    FUN_0041ddd0(&local_38,PTR_PTR_02003bc0);
    uVar4 = FUN_0086dfd0(&PTR_FUN_00ca6cb8,1,local_38);
    FUN_004134c0(uVar4);
  }
  else if (*(char *)(local_20 + 0x60) != '\0') {
    if (*(int *)(local_20 + 0x50) != 0) {
      uVar4 = FUN_0089b950(&PTR_FUN_00897e68,1,*(int *)(local_20 + 0x50),
                           *(undefined8 *)(local_20 + 0x58));
      FUN_004134c0(uVar4);
    }
    uVar4 = FUN_0086dfd0(&PTR_FUN_00ca6df8,1,*(undefined8 *)(local_20 + 0x58));
    FUN_004134c0(uVar4);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

