/* Ghidra address: 00a59d30 */
/* Ghidra symbol: FUN_00a59d30 */


void FUN_00a59d30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c [3];
  
  local_30 = auStack_58;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x140))
            (*(longlong **)(param_1 + 0x1b8),local_res10[0],local_1c);
  while (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x28))
                           (*(longlong **)(param_1 + 0x1b8)), local_1c[0] < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x1b8) + 0x18))
              (*(longlong **)(param_1 + 0x1b8),&local_38,local_1c[0]);
    iVar2 = FUN_004170c0(local_res10[0],local_38,1);
    if ((iVar2 != 1) || (cVar1 = FUN_00a597d0(param_1,local_1c[0]), cVar1 == '\0')) break;
    local_1c[0] = local_1c[0] + 1;
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_res10);
  return;
}

