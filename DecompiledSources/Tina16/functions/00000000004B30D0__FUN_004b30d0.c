/* Ghidra address: 004b30d0 */
/* Ghidra symbol: FUN_004b30d0 */


void FUN_004b30d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_004b3260(param_1);
    (**(code **)(*param_1 + 0x90))(param_1);
    FUN_004b2a70(param_1,*(undefined8 *)(param_2 + 0x10));
    (**(code **)(*param_1 + 0x58))(param_1,*(undefined8 *)(param_2 + 8));
    FUN_00414ad0(param_1 + 3,*(undefined8 *)(param_2 + 0x18));
    *(undefined2 *)((longlong)param_1 + 0x2c) = *(undefined2 *)(param_2 + 0x2c);
    *(undefined2 *)((longlong)param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
    *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 0x30);
    *(undefined1 *)((longlong)param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    FUN_004b3390(param_1);
  }
  return;
}

