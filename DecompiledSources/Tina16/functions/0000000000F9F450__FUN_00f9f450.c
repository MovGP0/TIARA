/* Ghidra address: 00f9f450 */
/* Ghidra symbol: FUN_00f9f450 */


void FUN_00f9f450(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  if (*(int *)(param_1 + 0x788) != 1) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8))
    ;
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0,&DAT_00f9f8bc);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,1,&DAT_00f9f8d0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,2,&DAT_00f9f8e4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,3,L"1:16");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,4,L"1:32");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,5,L"1:64");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,6,L"1:128");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,7,L"1:256");
      iVar4 = 0x100;
      lVar2 = *(longlong *)(param_1 + 0x718);
      plVar1 = *(longlong **)(lVar2 + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_30,*(undefined4 *)(param_1 + 0x758));
      FUN_0064de00(lVar2,local_30[0]);
    }
    else {
      iVar4 = 1;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,0,&DAT_00f9f8a8);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,1,&DAT_00f9f8bc);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,2,&DAT_00f9f8d0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,3,&DAT_00f9f8e4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,4,L"1:16");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,5,L"1:32");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,6,L"1:64");
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x718) + 0x4f0);
      (**(code **)(*plVar1 + 0x40))(plVar1,7,L"1:128");
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),0);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x718),&DAT_00f9f8a8);
    }
    FUN_00b8fd60(&local_40,
                 (1.0 / (*(double *)(param_1 + 0x740) / 4.0)) * (double)*(int *)(param_1 + 0x784) *
                 (double)iVar4,*PTR_DAT_02005310,0,1);
    FUN_00416ba0(&local_38,L"Time max: ",local_40);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_38);
    *(undefined1 *)(param_1 + 0x74c) = 1;
    FUN_00f9e8b0(param_1,param_2);
    FUN_00f9f050(param_1,param_2);
    *(undefined1 *)(param_1 + 0x74c) = 0;
  }
  FUN_00414560(&local_40,3);
  return;
}

