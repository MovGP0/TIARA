/* Ghidra address: 01806d20 */
/* Ghidra symbol: FUN_01806d20 */


void FUN_01806d20(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_009e5030);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
    if (cVar1 == '\0') {
      FUN_009e7470(param_1,param_2);
    }
    else {
      local_48 = param_2;
      FUN_004b3260();
      (**(code **)(*local_48 + 0x90))(local_48);
      iVar2 = (**(code **)(*param_1 + 0x28))();
      local_1c = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*param_1 + 0x18))(param_1,&local_38,local_1c);
          FUN_004168b0(&local_40,local_38);
          uVar3 = (**(code **)(*param_1 + 0x30))(param_1,local_1c);
          (**(code **)(*param_2 + 0x80))(param_2,local_40,uVar3);
          local_1c = local_1c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_004b3390(param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  FUN_00414480(&local_40);
  FUN_00414520(&local_38);
  return;
}

