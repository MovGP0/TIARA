/* Ghidra address: 008ac4a0 */
/* Ghidra symbol: FUN_008ac4a0 */


void FUN_008ac4a0(longlong param_1,longlong *param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))
                (*(longlong **)(param_1 + 0x28),&local_38,iVar2);
      FUN_00416780(&local_40,param_3);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                (*(longlong **)(param_1 + 0x20),&local_48,iVar2);
      FUN_00416cd0(local_30,3,local_38,local_40,local_48);
      (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,4);
  return;
}

