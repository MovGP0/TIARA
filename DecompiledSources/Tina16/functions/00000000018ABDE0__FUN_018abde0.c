/* Ghidra address: 018abde0 */
/* Ghidra symbol: FUN_018abde0 */


void FUN_018abde0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_38;
  undefined4 local_30;
  int local_2c;
  
  local_38 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x18))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                (*(longlong **)(param_1 + 0x28),iVar3,&local_38,&local_2c,&local_30);
      uVar2 = FUN_006dee40(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x500) + 0x4e8) + 0x550
                            ),param_2,local_38);
      FUN_006dcbd0(uVar2,local_2c + 1);
      FUN_006dcd70(uVar2,local_30);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))(*(longlong **)(param_1 + 0x28),iVar3);
      FUN_018abde0(param_1,uVar2);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))(*(longlong **)(param_1 + 0x28));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_38);
  return;
}

