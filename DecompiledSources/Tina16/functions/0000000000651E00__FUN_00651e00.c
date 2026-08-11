/* Ghidra address: 00651e00 */
/* Ghidra symbol: FUN_00651e00 */


void FUN_00651e00(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
    (**(code **)(*param_2 + 0xe8))(param_2,uVar2);
    (**(code **)(*param_2 + 0x110))(param_2,param_1[0x1e]);
    FUN_0064dd90(param_1,&local_20);
    (**(code **)(*param_2 + 0xd8))(param_2,local_20);
    (**(code **)(*param_2 + 0x118))(param_2,*(undefined1 *)((longlong)param_1 + 0xa9));
    (**(code **)(*param_2 + 0x90))(param_2,param_1 + 0x3f);
  }
  FUN_00414480(&local_20);
  return;
}

