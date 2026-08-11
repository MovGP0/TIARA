/* Ghidra address: 009e7470 */
/* Ghidra symbol: FUN_009e7470 */


void FUN_009e7470(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_009e5030);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
    if (cVar1 == '\0') {
      FUN_004b1190(param_1,param_2);
    }
    else {
      local_50 = param_2;
      FUN_004b3260();
      (**(code **)(*local_50 + 0x90))(local_50);
      uVar2 = FUN_009e9660(param_1);
      *(undefined2 *)(local_50 + 6) = uVar2;
      uVar2 = FUN_009e9540(param_1);
      *(undefined2 *)((longlong)local_50 + 0x2e) = uVar2;
      uVar2 = FUN_009e94c0(param_1);
      *(undefined2 *)((longlong)local_50 + 0x2c) = uVar2;
      FUN_009e94f0(param_1,&local_38);
      FUN_004168b0(local_50 + 3,local_38);
      uVar3 = FUN_009e9570(param_1);
      FUN_004b2b90(local_50,uVar3);
      iVar4 = (**(code **)(*param_1 + 0x28))();
      local_1c = 0;
      if (-1 < iVar4 + -1) {
        do {
          (**(code **)(*param_1 + 0x18))(param_1,&local_40,local_1c);
          FUN_004168b0(&local_48,local_40);
          uVar5 = (**(code **)(*param_1 + 0x30))(param_1,local_1c);
          (**(code **)(*param_2 + 0x80))(param_2,local_48,uVar5);
          local_1c = local_1c + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_004b3390(param_2);
    }
  }
  else {
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
  }
  FUN_00414480(&local_48);
  FUN_004145c0(&local_40,2);
  return;
}

