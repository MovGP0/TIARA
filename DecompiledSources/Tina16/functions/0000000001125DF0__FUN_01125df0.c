/* Ghidra address: 01125df0 */
/* Ghidra symbol: FUN_01125df0 */


void FUN_01125df0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (*(int *)(param_1 + 0xb48) == 8) {
    FUN_00441920(local_20,*(undefined8 *)(param_1 + 0xb58));
    FUN_00724380(*(undefined8 *)(param_1 + 0x6f8),local_20[0]);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xa8))(*(longlong **)(param_1 + 0x6f8));
  }
  else {
    FUN_00441920(&local_28,*(undefined8 *)(param_1 + 0xb60));
    FUN_00724380(*(undefined8 *)(param_1 + 0x7c8),local_28);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0xa8))(*(longlong **)(param_1 + 0x7c8));
  }
  if (cVar2 != '\0') {
    if (*(int *)(param_1 + 0xb48) == 8) {
      FUN_00724270(*(undefined8 *)(param_1 + 0x6f8),&local_38);
      FUN_0043e1a0(&local_30,local_38);
      FUN_00414ad0(param_1 + 0xb58,local_30);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0xb58));
    }
    else {
      FUN_00724270(*(undefined8 *)(param_1 + 0x7c8),&local_48);
      FUN_0043e1a0(&local_40,local_48);
      FUN_00414ad0(param_1 + 0xb60,local_40);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x808) + 0x4e8);
      (**(code **)(*plVar1 + 0x100))(plVar1,*(undefined8 *)(param_1 + 0xb60));
    }
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x808),0);
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,3);
  return;
}

