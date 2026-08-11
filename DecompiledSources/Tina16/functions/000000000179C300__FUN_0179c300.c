/* Ghidra address: 0179c300 */
/* Ghidra symbol: FUN_0179c300 */


void FUN_0179c300(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_48 = 0;
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x28))(*(longlong **)(param_1 + 0xd18));
  if (iVar1 < iVar2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
              (*(longlong **)(param_1 + 0xd18),&local_48,uVar3);
    local_40 = local_48;
    local_38 = 0x11;
    FUN_00442f70(local_30,L"The selected device (%s) will be deleted. Continue?",&local_40,0);
    iVar1 = FUN_0072d440(local_30[0],3,0xc,0);
    if (iVar1 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x18))
                (*(longlong **)(param_1 + 0xd18),local_20,*(undefined4 *)(param_1 + 0xca0));
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))
                        (*(longlong **)(param_1 + 0x758));
      (**(code **)(**(longlong **)(param_1 + 0xd18) + 0x98))(*(longlong **)(param_1 + 0xd18),uVar3);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd18) + 0xb0))
                        (*(longlong **)(param_1 + 0xd18),local_20[0]);
      if (iVar1 == -1) {
        FUN_01798460(param_1,0);
      }
      else {
        *(int *)(param_1 + 0xca0) = iVar1;
      }
      FUN_01798270(param_1);
      FUN_01795670(param_1,1);
    }
  }
  FUN_00414480(&local_48);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

