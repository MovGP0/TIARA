/* Ghidra address: 01400490 */
/* Ghidra symbol: FUN_01400490 */


void FUN_01400490(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x838),0);
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x278))(*(longlong **)(param_1 + 0x750));
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x278))(*(longlong **)(param_1 + 0x780));
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x278))(*(longlong **)(param_1 + 0x6d8));
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
            (*(longlong **)(param_1 + 0x6d8),0xffffffff);
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x278))(*(longlong **)(param_1 + 0x6f0));
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x700),0);
  if (*(char *)(param_1 + 0x88b) == '\0') {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0x260))(*(longlong **)(param_1 + 0x828))
    ;
    if (cVar2 == '\0') {
      iVar3 = 1;
      do {
        FUN_0043f750(&local_40,iVar3);
        FUN_00416ba0(&local_20,&DAT_01400a48,local_40);
        FUN_00416cd0(&local_28,3,&DAT_01400a58,local_20,&DAT_01400a6c);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
        if (*(char *)(param_1 + 0x88a) == '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 3);
    }
    else {
      FUN_00414b50(&local_20,&DAT_01400aa0);
      FUN_00416cd0(&local_28,3,&DAT_01400a58,local_20,&DAT_01400a6c);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
      if (*(char *)(param_1 + 0x88a) == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
      }
    }
    FUN_00414b50(&local_20,&DAT_01400ab4);
    FUN_00414b50(&local_28,L"I(V1)");
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
    if (*(char *)(param_1 + 0x88a) != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
    }
  }
  else {
    iVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x7e0));
    iVar4 = 1;
    if (0 < iVar3) {
      do {
        FUN_0043f750(&local_30,iVar4);
        FUN_00416ba0(&local_20,&DAT_01400a48,local_30);
        FUN_00416cd0(&local_28,3,&DAT_01400a58,local_20,&DAT_01400a6c);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))
                          (*(longlong **)(param_1 + 0x808));
        if (cVar2 != '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x7e8));
    iVar4 = 1;
    if (0 < iVar3) {
      do {
        FUN_0043f750(&local_38,iVar4);
        FUN_00416ba0(&local_20,&DAT_01400a7c,local_38);
        FUN_00416cd0(&local_28,3,&DAT_01400a8c,local_20,&DAT_01400a6c);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x260))
                          (*(longlong **)(param_1 + 0x810));
        if (cVar2 != '\0') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4a0);
          (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_40,5);
  return;
}

