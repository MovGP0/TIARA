/* Ghidra address: 01089c90 */
/* Ghidra symbol: FUN_01089c90 */


void FUN_01089c90(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x260))(*(longlong **)(param_1 + 0x9b0));
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x278))(*(longlong **)(param_1 + 0x9b0));
  iVar4 = (**(code **)(**(longlong **)(param_1 + 3000) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 3000) + 0x18))
                (*(longlong **)(param_1 + 3000),&local_30,iVar5);
      cVar2 = FUN_0108a310(param_1,local_30,&local_38);
      if (cVar2 == '\0') {
        FUN_00416ba0(&local_48,local_30,L": [not accessible]");
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_48);
      }
      else {
        FUN_00416cd0(&local_40,3,local_30,&DAT_01089e38,local_38);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9b0) + 0x4a0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x9b0) + 0x268))(*(longlong **)(param_1 + 0x9b0),iVar3);
  FUN_00414560(&local_48,4);
  return;
}

