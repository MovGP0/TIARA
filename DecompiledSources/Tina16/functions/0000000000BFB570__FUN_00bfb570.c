/* Ghidra address: 00bfb570 */
/* Ghidra symbol: FUN_00bfb570 */


void FUN_00bfb570(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  bVar3 = false;
  iVar7 = 0;
  uVar6 = 0;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x5f5);
  if (cVar1 == '\0') {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
    iVar4 = (**(code **)(*plVar2 + 0x28))(plVar2);
    uVar6 = 0;
    if (0 < iVar4) {
      uVar6 = (uint)(1 < *(int *)(param_1 + 0x48));
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_48,*(int *)(param_1 + 0x4c) + -1);
      FUN_00416dc0(local_40,local_48,1,*(int *)(param_1 + 0x48) + -1);
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_58,*(int *)(param_1 + 0x44) + -1);
      FUN_00416dc0(&local_50,local_58,*(undefined4 *)(param_1 + 0x40),0x7fffffff);
      FUN_00416ba0(param_1 + 0x38,local_40[0],local_50);
      FUN_00bcf430(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x4e8),*(int *)(param_1 + 0x4c),
                   *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x4c));
      uVar5 = FUN_00c09df0(*(undefined8 *)(param_1 + 0x70));
      if ((~uVar5 & 0x4040000) == 0) {
        FUN_00bf1640(&local_60,*(undefined8 *)(param_1 + 0x38));
        FUN_00414b50(param_1 + 0x38,local_60);
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
      (**(code **)(*plVar2 + 0x40))
                (plVar2,*(int *)(param_1 + 0x4c) + -1,*(undefined8 *)(param_1 + 0x38));
    }
    bVar3 = true;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2a8))
              (*(longlong **)(param_1 + 0x70),param_1 + 0x48);
  }
  else if (cVar1 == '\x01') {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
    iVar7 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (*(int *)(param_1 + 0x44) == iVar7) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
      (**(code **)(*plVar2 + 0x40))(plVar2,*(int *)(param_1 + 0x44) + -1,0);
      local_74 = *(int *)(param_1 + 0x44) + -2;
      iVar7 = *(int *)(param_1 + 0x4c) + -1;
      if (iVar7 <= local_74) {
        iVar7 = (iVar7 - local_74) + -1;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
          (**(code **)(*plVar2 + 0x98))(plVar2,local_74);
          local_74 = local_74 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
      }
    }
    else {
      local_74 = *(int *)(param_1 + 0x44) + -1;
      iVar7 = *(int *)(param_1 + 0x4c) + -1;
      if (iVar7 <= local_74) {
        iVar7 = (iVar7 - local_74) + -1;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
          (**(code **)(*plVar2 + 0x98))(plVar2,local_74);
          local_74 = local_74 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 0);
      }
    }
    local_70 = FUN_00bb7750(1,*(undefined4 *)(param_1 + 0x4c));
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2a8))(*(longlong **)(param_1 + 0x70),&local_70)
    ;
    bVar3 = true;
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
    uVar6 = 0;
    if (cVar1 == '\x02') {
      if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x48)) {
        FUN_00bcbe70(param_1 + 0x48,param_1 + 0x40);
      }
      local_74 = *(int *)(param_1 + 0x4c) + -1;
      iVar7 = *(int *)(param_1 + 0x44) + -1;
      if (local_74 <= iVar7) {
        iVar7 = (iVar7 - local_74) + 1;
        do {
          plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x4e8);
          (**(code **)(*plVar2 + 0x18))(plVar2,&local_68,local_74);
          FUN_00414b50(param_1 + 0x38,local_68);
          FUN_00416e20(param_1 + 0x38,*(int *)(param_1 + 0x48),
                       *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x48));
          FUN_00c0f2c0(*(undefined8 *)(param_1 + 0x70),local_74,*(undefined8 *)(param_1 + 0x38));
          local_74 = local_74 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_70 = FUN_00bb7750(*(undefined4 *)(param_1 + 0x48),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x4c0));
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2a8))
                (*(longlong **)(param_1 + 0x70),&local_70);
      iVar7 = 0;
      uVar6 = 0;
    }
  }
  if (bVar3) {
    iVar7 = (*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x4c)) + iVar7;
    if (0 < iVar7) {
      FUN_00c0efe0(*(undefined8 *)(param_1 + 0x70),*(int *)(param_1 + 0x4c) + uVar6,iVar7);
    }
  }
  FUN_00414560(&local_68,6);
  return;
}

