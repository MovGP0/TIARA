/* Ghidra address: 01bb5f00 */
/* Ghidra symbol: FUN_01bb5f00 */


char FUN_01bb5f00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  *(undefined8 *)(param_1 + 0x6f0) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  *(undefined1 *)(param_1 + 0x6f8) = 1;
  cVar2 = FUN_01bb6fd0(param_1,*(undefined8 *)(param_1 + 0x6f0),0);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x150))
              (*(longlong **)(param_1 + 0x6e8),FUN_01b1fc70);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))(*(longlong **)(param_1 + 0x6e8));
    if (0 < iVar3) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))
                        (*(longlong **)(param_1 + 0x6e8));
      FUN_00848a70(lVar1,iVar3 + *(int *)(lVar1 + 0x4c0));
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))(*(longlong **)(param_1 + 0x6e8));
    if (iVar3 == 0) {
      FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4c0) + 1);
      FUN_0084e3e0(lVar1,0,*(undefined4 *)(lVar1 + 0x4c0),0);
      FUN_0084e3e0(lVar1,1,*(undefined4 *)(lVar1 + 0x4c0),0);
      plVar5 = (longlong *)FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),0);
      (**(code **)(*plVar5 + 0x60))(plVar5,1);
      uVar6 = FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),1);
      FUN_00f03530(uVar6,2);
    }
    else {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_004b3cf0(*(undefined8 *)(param_1 + 0x6e8),local_40,iVar7);
          FUN_0084e3e0(lVar1,0,*(int *)(lVar1 + 0x4c0) + iVar7,local_40[0]);
          FUN_004b5390(*(undefined8 *)(param_1 + 0x6e8),local_30,iVar7);
          if (local_30[0] == 0) {
            FUN_00414b50(local_30,&DAT_01bb61b4);
          }
          else {
            iVar4 = FUN_004170c0(&DAT_01bb61a4,local_30[0],1);
            FUN_00416dc0(local_30,local_30[0],1,iVar4 + -2);
          }
          FUN_0084e3e0(lVar1,1,*(int *)(lVar1 + 0x4c0) + iVar7,local_30[0]);
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      plVar5 = (longlong *)FUN_00f03860(*(undefined8 *)(lVar1 + 0x660),0);
      (**(code **)(*plVar5 + 0x60))(plVar5,0);
    }
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return cVar2;
}

