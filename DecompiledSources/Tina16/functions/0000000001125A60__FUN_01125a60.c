/* Ghidra address: 01125a60 */
/* Ghidra symbol: FUN_01125a60 */


void FUN_01125a60(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0xb48) == 8) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0xa8))(*(longlong **)(param_1 + 0x6f0));
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0xa8))(*(longlong **)(param_1 + 0x7c0));
  }
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0xb48) == 8) {
      FUN_00724270(*(undefined8 *)(param_1 + 0x6f0),&local_28);
      FUN_0043e1a0(local_20,local_28);
      FUN_00414ad0(param_1 + 0xb58,local_20[0]);
      (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0xd8))
                (*(longlong **)(param_1 + 0x9f8),*(undefined8 *)(param_1 + 0xb58));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x9f8));
    }
    else {
      FUN_00724270(*(undefined8 *)(param_1 + 0x7c0),&local_38);
      FUN_0043e1a0(&local_30,local_38);
      FUN_00414ad0(param_1 + 0xb60,local_30);
      (**(code **)(**(longlong **)(param_1 + 0xa21) + 0xd8))
                (*(longlong **)(param_1 + 0xa21),*(undefined8 *)(param_1 + 0xb60));
      *(undefined1 *)(param_1 + 0xa29) = 0;
      (**(code **)(**(longlong **)(param_1 + 0xa21) + 0x38))
                (*(longlong **)(param_1 + 0xa21),&local_40);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar1 + 0x60))(plVar1,local_40);
    }
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x808),0);
    FUN_010c2250(&local_48,0);
    FUN_00414ad0(param_1 + 0xb68,local_48);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

