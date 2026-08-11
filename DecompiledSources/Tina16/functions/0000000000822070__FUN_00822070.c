/* Ghidra address: 00822070 */
/* Ghidra symbol: FUN_00822070 */


void FUN_00822070(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_48 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x570) + 0x10))(*(longlong **)(param_1 + 0x570));
  FUN_004b3260(param_2);
  *(undefined2 *)(param_2 + 6) = *(undefined2 *)(*(longlong *)(param_1 + 0x4a0) + 0x30);
  *(undefined2 *)((longlong)param_2 + 0x2e) = *(undefined2 *)(*(longlong *)(param_1 + 0x4a0) + 0x2e)
  ;
  *(undefined2 *)((longlong)param_2 + 0x2c) = *(undefined2 *)(*(longlong *)(param_1 + 0x4a0) + 0x2c)
  ;
  FUN_00414ad0(param_2 + 3,*(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + 0x18));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_28 = FUN_00821e90(param_1,local_1c);
      (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x18))
                (*(longlong **)(param_1 + 0x4a0),&local_48,local_1c);
      (**(code **)(*param_2 + 0x80))(param_2,local_48,local_28);
      if (local_28 != 0) {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x570),local_28);
      }
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(param_2);
  FUN_00414480(&local_48);
  return;
}

