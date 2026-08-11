/* Ghidra address: 00ebc270 */
/* Ghidra symbol: FUN_00ebc270 */


void FUN_00ebc270(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  uVar5 = FUN_0065f300(&PTR_FUN_00643358,1,param_1);
  *(undefined8 *)(param_1 + 0x750) = uVar5;
  uVar5 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x758) = uVar5;
  FUN_00eba6e0(uVar5);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004b5390(*(undefined8 *)(param_1 + 0x758),local_40,iVar6);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4f0);
      iVar4 = (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
      if (iVar4 != iVar6) {
        (**(code **)(**(longlong **)(param_1 + 0x758) + 0x18))
                  (*(longlong **)(param_1 + 0x758),&local_30,iVar6);
        (**(code **)(**(longlong **)(param_1 + 0x758) + 0x98))
                  (*(longlong **)(param_1 + 0x758),iVar6);
        (**(code **)(**(longlong **)(param_1 + 0x758) + 200))
                  (*(longlong **)(param_1 + 0x758),iVar4,local_30);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0xb8))
                    (*(longlong **)(param_1 + 0x758),L"PACKAGE.FPL");
  if (iVar3 < 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x268))(*(longlong **)(param_1 + 0x6f0),iVar3);
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x28))(*(longlong **)(param_1 + 0x758));
  if ((iVar3 < 1) || (cVar2 = FUN_00ea9650(), cVar2 != '\a')) {
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6c0),*(undefined8 *)(param_1 + 0x6d0));
  }
  else {
    FUN_00ebbfa0(param_1,param_2);
  }
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  return;
}

