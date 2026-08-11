/* Ghidra address: 01835340 */
/* Ghidra symbol: FUN_01835340 */


void FUN_01835340(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = (undefined *)0x0;
  local_30[0] = 0;
  local_20[0] = 0;
  iVar3 = FUN_0043e420(*(undefined8 *)(param_1 + 0x110),L"uses");
  if (iVar3 == 0) {
    while (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68),
          iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1), *(int *)(param_1 + 0x11c) < iVar3) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_20,iVar3 + -1);
      iVar3 = FUN_004170c0(L"text=\"",local_20[0],1);
      FUN_00416e20(local_20,1,iVar3 + 5);
      uVar4 = FUN_004170c0(&DAT_0183578c,local_20[0],1);
      FUN_00416e20(local_20,uVar4,0xff);
      iVar3 = FUN_00414cb0(local_20[0]);
      FUN_00416dc0(local_30,local_20[0],2,iVar3 + -2);
      FUN_01834cd0(param_1,local_30[0]);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar3 + -1);
    }
  }
  else if (*(longlong *)(param_1 + 0x110) != 0) {
    if (param_2 == '\0') {
      while (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68),
            iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1), *(int *)(param_1 + 0x11c) < iVar3) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
        iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
        (**(code **)(*plVar1 + 0x98))(plVar1,iVar3 + -1);
      }
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30);
      uVar4 = *(undefined4 *)(lVar2 + 0x84);
      FUN_01820ee0(lVar2,*(undefined4 *)(param_1 + 0x10c));
      FUN_018210c0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30));
      FUN_01822540(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30),
                   &local_38);
      puVar6 = &DAT_018357cc;
      puVar5 = local_38;
      FUN_00416cd0(local_20,5,&DAT_018357a0,*(undefined8 *)(param_1 + 0x110),L" pos=\"",local_38,
                   &DAT_018357cc);
      FUN_01820ee0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30),
                   uVar4);
      iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x110),L"expr");
      if (iVar3 == 0) {
        FUN_01822540(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x160) + 0xa0) + 0x30),
                     &local_40);
        puVar5 = &DAT_018357cc;
        FUN_00416cd0(local_20,4,local_20[0],L" pos1=\"",local_40,&DAT_018357cc,puVar6);
      }
      FUN_00416ad0(local_20,&DAT_01835810);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      (**(code **)(*plVar1 + 200))(plVar1,*(undefined4 *)(param_1 + 0x11c),local_20[0]);
      FUN_00416cd0(&local_48,3,&DAT_01835820,*(undefined8 *)(param_1 + 0x110),&DAT_01835810,puVar5);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x160) + 0x68);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
    }
  }
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  return;
}

