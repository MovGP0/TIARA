/* Ghidra address: 00ec8f80 */
/* Ghidra symbol: FUN_00ec8f80 */


undefined1 FUN_00ec8f80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_49 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
                (*(longlong **)(param_1 + 0x88),local_30,iVar4);
      iVar2 = FUN_004170c0(&LAB_00ec9114,local_30[0],1);
      uVar3 = 0;
      if (local_30[0] != 0) {
        uVar3 = *(undefined4 *)(local_30[0] + -4);
      }
      FUN_00416dc0(&local_48,local_30[0],iVar2 + 1,uVar3);
      FUN_0043ea00(local_40,local_48);
      iVar2 = FUN_00416db0(local_res10[0],local_40[0]);
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x98))(*(longlong **)(param_1 + 0x88),iVar4);
        local_49 = 1;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return local_49;
}

