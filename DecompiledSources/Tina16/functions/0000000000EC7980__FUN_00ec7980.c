/* Ghidra address: 00ec7980 */
/* Ghidra symbol: FUN_00ec7980 */


void FUN_00ec7980(longlong param_1,longlong param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  plVar1 = *(longlong **)(param_2 + 0x4b8);
  (**(code **)(*plVar1 + 0xa8))(plVar1,&local_38);
  if (*(char *)(param_1 + 0x8c0) != '\0') {
    cVar2 = FUN_00eaab90(*(undefined8 *)(param_1 + 0x858),param_3,&local_40);
    if (cVar2 != '\0') {
      uVar3 = FUN_0068bbb0(param_2);
      uVar4 = FUN_0068bbb0(param_2);
      FUN_00498370(local_58,(int)local_38 + 2,local_38._4_4_,uVar3,uVar4);
      (**(code **)(*plVar1 + 0x110))(plVar1,local_58,*(undefined8 *)(param_1 + 0x8d8));
      FUN_005fce70(plVar1[0xe],1);
      goto LAB_00ec7c5f;
    }
  }
  (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x18))
            (*(longlong **)(param_2 + 0x4a0),&local_40,param_3);
  iVar5 = FUN_004170c0(&DAT_00ec7d20,local_40,1);
  FUN_00416e20(&local_40,1,iVar5 + 1);
  FUN_00414b50(&local_48,local_40);
  iVar5 = FUN_004170c0(&DAT_00ec7d30,local_48,1);
  if (0 < iVar5) {
    uVar4 = FUN_004170c0(&DAT_00ec7d30,local_48,1);
    uVar3 = 0;
    if (local_48 != 0) {
      uVar3 = *(undefined4 *)(local_48 + -4);
    }
    FUN_00416e20(&local_48,uVar4,uVar3);
  }
  FUN_00416ba0(&local_60,local_40,&DAT_00ec7d40);
  iVar5 = FUN_004170c0(local_60,*(undefined8 *)(param_1 + 0x888),1);
  if (iVar5 < 1) {
    FUN_00416ba0(&local_68,local_48,&DAT_00ec7d40);
    iVar5 = FUN_004170c0(local_68,*(undefined8 *)(param_1 + 0x888),1);
    if (0 < iVar5) goto LAB_00ec7baa;
    iVar5 = FUN_00416db0(local_40,&DAT_00ec7d50);
    if (iVar5 == 0) goto LAB_00ec7baa;
    uVar3 = FUN_0068bbb0(param_2);
    uVar4 = FUN_0068bbb0(param_2);
    FUN_00498370(local_58,(int)local_38 + 2,local_38._4_4_,uVar3,uVar4);
    (**(code **)(*plVar1 + 0x110))(plVar1,local_58,*(undefined8 *)(param_1 + 0x8d0));
  }
  else {
LAB_00ec7baa:
    uVar3 = FUN_0068bbb0(param_2);
    uVar4 = FUN_0068bbb0(param_2);
    FUN_00498370(local_58,(int)local_38 + 2,local_38._4_4_,uVar3,uVar4);
    (**(code **)(*plVar1 + 0x110))(plVar1,local_58,*(undefined8 *)(param_1 + 0x8c8));
  }
  FUN_005fce70(plVar1[0xe],0);
LAB_00ec7c5f:
  iVar5 = FUN_0068bbb0(param_2);
  (**(code **)(**(longlong **)(param_2 + 0x4a0) + 0x18))
            (*(longlong **)(param_2 + 0x4a0),&local_70,param_3);
  (**(code **)(*plVar1 + 0x120))(plVar1,(int)local_38 + iVar5 + 4,local_38._4_4_,local_70);
  FUN_00414560(&local_70,3);
  FUN_00414560(&local_48,2);
  return;
}

