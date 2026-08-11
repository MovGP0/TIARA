/* Ghidra address: 0181b300 */
/* Ghidra symbol: FUN_0181b300 */


void FUN_0181b300(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_30;
  
  local_30 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d2fd0);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 800))(param_1,&local_30);
    uVar2 = FUN_007fd7d0(param_1);
    (**(code **)(*param_2 + 0x28))(param_2,local_30,L"Left",uVar2);
    uVar2 = FUN_007fd800(param_1);
    (**(code **)(*param_2 + 0x28))(param_2,local_30,&DAT_0181b50c,uVar2);
    iVar3 = FUN_0181a900(param_1);
    uVar2 = FUN_0040c770((double)(int)param_1[0x13] /
                         ((double)iVar3 / (double)*(int *)PTR_DAT_02001400));
    iVar3 = FUN_0181a900(param_1);
    uVar4 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x9c) /
                         ((double)iVar3 / (double)*(int *)PTR_DAT_02001400));
    (**(code **)(*param_2 + 0x38))
              (param_2,local_30,L"Maximized",*(char *)((longlong)param_1 + 0x4d2) == '\x02');
    (**(code **)(*param_2 + 0x38))
              (param_2,local_30,L"Visible",*(undefined1 *)((longlong)param_1 + 0xa9));
    if (param_1[0x21] == 0) {
      (**(code **)(*param_2 + 0x18))(param_2,local_30,L"Dock5",0);
    }
    else {
      (**(code **)(*param_2 + 0x18))
                (param_2,local_30,L"Dock5",*(undefined8 *)(param_1[0x21] + 0x10));
    }
    (**(code **)(*param_2 + 0x28))(param_2,local_30,L"Width",uVar2);
    (**(code **)(*param_2 + 0x28))(param_2,local_30,L"Height",uVar4);
  }
  FUN_00414480(&local_30);
  return;
}

