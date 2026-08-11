/* Ghidra address: 009e72b0 */
/* Ghidra symbol: FUN_009e72b0 */


void FUN_009e72b0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_009e5030);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00476820);
    if (cVar1 == '\0') {
      FUN_004b1060(param_1,param_2);
    }
    else {
      FUN_009e76c0(param_1);
      (**(code **)(*param_1 + 0x90))(param_1);
      *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x30);
      *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x2e);
      *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)(param_2 + 0x2c);
      FUN_004168e0(param_1 + 2,*(undefined8 *)(param_2 + 0x18));
      *(bool *)((longlong)param_1 + 0x1c) = (*(byte *)(param_2 + 0x32) & 1) != 0;
      (**(code **)(*param_1 + 0x80))(param_1,param_2);
      FUN_009e77f0(param_1);
    }
  }
  else {
    FUN_009e76c0(param_1);
    (**(code **)(*param_1 + 0x90))(param_1);
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
    *(undefined2 *)((longlong)param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 0x18);
    *(undefined2 *)((longlong)param_1 + 10) = *(undefined2 *)(param_2 + 10);
    FUN_00414b90(param_1 + 2,*(undefined8 *)(param_2 + 0x10));
    *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
    (**(code **)(*param_1 + 0x88))(param_1,param_2);
    FUN_009e77f0(param_1);
  }
  return;
}

