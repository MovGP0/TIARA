/* Ghidra address: 01c3eed0 */
/* Ghidra symbol: FUN_01c3eed0 */


void FUN_01c3eed0(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  local_38 = *param_4;
  uStack_30 = param_4[1];
  (**(code **)(**(longlong **)(param_2 + 0x490) + 0xa8))(*(longlong **)(param_2 + 0x490),&local_38);
  (**(code **)(**(longlong **)(param_2 + 0x4f0) + 0x18))
            (*(longlong **)(param_2 + 0x4f0),&local_40,param_3);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if (iVar3 != -1) {
    cVar2 = FUN_01c3d390(param_1);
    if (cVar2 == '\0') {
      uVar4 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x490));
      thunk_FUN_0412a071(uVar4,0);
    }
    else {
      uVar4 = FUN_005ffa40(*(undefined8 *)(param_2 + 0x490));
      thunk_FUN_0412a071(uVar4,0xff);
      FUN_00414b50(&local_40,L"Autoshape");
    }
    (**(code **)(**(longlong **)(param_2 + 0x490) + 0x120))
              (*(longlong **)(param_2 + 0x490),(int)local_38 + 2,local_38._4_4_,local_40);
  }
  plVar1 = *(longlong **)(param_1 + 0x708);
  local_38 = CONCAT44(local_38._4_4_ - *(int *)(*(longlong *)(plVar1[0x17] + 0x18) + 0x28),
                      (int)local_38);
  iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar3 != -1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
    iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (param_3 < iVar3) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
      uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,param_3);
      FUN_01c3f340(param_1,*(undefined8 *)(param_2 + 0x490),&local_38,uVar4);
    }
    else if (*(longlong *)(param_1 + 0x978) != 0) {
      FUN_01c3f340(param_1,*(undefined8 *)(param_2 + 0x490),&local_38,*(longlong *)(param_1 + 0x978)
                  );
    }
  }
  FUN_00414480(&local_40);
  return;
}

