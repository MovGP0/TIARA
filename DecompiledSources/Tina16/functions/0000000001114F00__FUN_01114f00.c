/* Ghidra address: 01114f00 */
/* Ghidra symbol: FUN_01114f00 */


void FUN_01114f00(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  if (*(int *)(param_2 + 8) < iVar1) {
    uVar3 = FUN_0065b870(param_1);
    iVar1 = thunk_FUN_039bb6fb(uVar3);
    if (iVar1 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_28,*(undefined4 *)(param_2 + 8));
      FUN_00415dd0(&local_30,local_28,0);
      uVar4 = FUN_00415ab0(local_30);
      FUN_0061db10(uVar3,uVar4,**(undefined2 **)(param_2 + 0x10));
      iVar1 = FUN_00414ce0(uVar3);
      *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
    }
    else {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_20,*(undefined4 *)(param_2 + 8));
      uVar4 = FUN_00416740(local_20);
      FUN_00711330(uVar3,uVar4,**(undefined2 **)(param_2 + 0x10));
      uVar2 = FUN_00711290(uVar3);
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)uVar2;
    }
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  FUN_004144d0(&local_30);
  FUN_00414560(&local_28,2);
  return;
}

