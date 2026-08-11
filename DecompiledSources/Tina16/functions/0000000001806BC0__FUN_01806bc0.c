/* Ghidra address: 01806bc0 */
/* Ghidra symbol: FUN_01806bc0 */


void FUN_01806bc0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_009e5030);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
    if (cVar1 == '\0') {
      FUN_009e72b0(param_1,param_2);
    }
    else {
      (**(code **)(*param_1 + 0x90))(param_1);
      iVar2 = (**(code **)(*param_2 + 0x28))();
      iVar4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*param_2 + 0x18))(param_2,&local_30,iVar4);
          FUN_004168e0(&local_38,local_30);
          uVar3 = (**(code **)(*param_2 + 0x30))(param_2,iVar4);
          (**(code **)(*param_1 + 0x78))(param_1,local_38,uVar3);
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1);
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
  }
  FUN_00414520(&local_38);
  FUN_00414480(&local_30);
  return;
}

