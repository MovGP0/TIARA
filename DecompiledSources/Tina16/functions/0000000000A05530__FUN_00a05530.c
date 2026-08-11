/* Ghidra address: 00a05530 */
/* Ghidra symbol: FUN_00a05530 */


void FUN_00a05530(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  char local_1d;
  uint local_1c;
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
  }
  pcVar4 = (char *)FUN_004095c0(0x38);
  if (pcVar4 == (char *)0x0) {
    FUN_0044d470();
  }
  FUN_0040d200(pcVar4,0x38,0);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),pcVar4);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),&local_1d,1);
  *pcVar4 = local_1d;
  cVar1 = *pcVar4;
  if (cVar1 == DAT_01e6e057) {
    FUN_00a05950(param_1,1,pcVar4 + 8);
    if (*(int *)(pcVar4 + 8) != 4) {
      FUN_00a074d0(5);
    }
    FUN_00a05950(param_1,1,&local_1c);
    *(uint *)(pcVar4 + 0xc) = local_1c >> 2 & 7;
    pcVar4[0x10] = (local_1c & 2) != 0;
    pcVar4[0x11] = (local_1c & 1) != 0;
    FUN_00a05950(param_1,2,pcVar4 + 0x14);
    FUN_00a05950(param_1,1,pcVar4 + 0x18);
    FUN_00a05950(param_1,1,&local_1c);
    if (local_1c != 0) {
      FUN_00a074d0(7);
    }
  }
  else if (cVar1 == DAT_01e6e058) {
    uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(pcVar4 + 8) = uVar3;
    FUN_00a05480(param_1,uVar3);
  }
  else if (cVar1 == DAT_01e6e059) {
    FUN_00a05950(param_1,1,pcVar4 + 8);
    if (*(int *)(pcVar4 + 8) != 0xc) {
      FUN_00a074d0(5);
    }
    FUN_00a05950(param_1,2,pcVar4 + 0xc);
    FUN_00a05950(param_1,2,pcVar4 + 0x10);
    FUN_00a05950(param_1,2,pcVar4 + 0x14);
    FUN_00a05950(param_1,2,pcVar4 + 0x18);
    FUN_00a05950(param_1,1,pcVar4 + 0x1c);
    FUN_00a05950(param_1,1,pcVar4 + 0x20);
    FUN_00a05950(param_1,1,pcVar4 + 0x24);
    FUN_00a05950(param_1,1,pcVar4 + 0x28);
    uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(pcVar4 + 0x30) = uVar3;
    FUN_00a05480(param_1,uVar3);
  }
  else if (cVar1 == DAT_01e6e05a) {
    FUN_00a05950(param_1,1,pcVar4 + 8);
    if (*(int *)(pcVar4 + 8) == 0xb) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),pcVar4 + 0xc,8)
      ;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),pcVar4 + 0x14,3);
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(pcVar4 + 0x18) = uVar3;
      FUN_00a05480(param_1,uVar3);
      FUN_00414910(local_30,pcVar4 + 0xc,8);
      iVar2 = FUN_00416db0(local_30[0],L"NETSCAPE");
      if (iVar2 == 0) {
        FUN_00a06310(param_1,*(undefined8 *)(pcVar4 + 0x18));
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 8);
      lVar5 = FUN_004b6da0(uVar3);
      FUN_004b6dc0(uVar3,lVar5 + *(int *)(pcVar4 + 8));
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(pcVar4 + 0x18) = uVar3;
      FUN_00a05480(param_1,uVar3);
    }
  }
  else {
    FUN_0043fba0(&local_40,cVar1,4);
    FUN_00416ba0(&local_38,L"unknown extension: ",local_40);
    FUN_00a07560(local_38);
  }
  FUN_00414560(&local_40,3);
  return;
}

