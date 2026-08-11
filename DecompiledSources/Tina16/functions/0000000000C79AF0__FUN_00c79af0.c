/* Ghidra address: 00c79af0 */
/* Ghidra symbol: FUN_00c79af0 */


void FUN_00c79af0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x390) + 0x10))(*(longlong **)(param_1 + 0x390),param_2);
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 == 1) {
      (**(code **)(*param_2 + 0x38))(param_2,local_30);
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
      if (iVar1 < 2) {
        FUN_00414480(local_30);
      }
      else {
        FUN_00414480(local_30);
        iVar1 = (**(code **)(*param_2 + 0x28))();
        iVar3 = 0;
        if (-1 < iVar1 + -2) {
          iVar1 = iVar1 + -1;
          do {
            (**(code **)(*param_2 + 0x18))(param_2,local_40,iVar3);
            FUN_00416cd0(local_30,4,local_30[0],&DAT_00c79ce8,local_40[0],&LAB_00c79cf8);
            iVar3 = iVar3 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2,&local_48,iVar1 + -1);
        FUN_00416cd0(local_30,4,local_30[0],&DAT_00c79ce8,local_48,&DAT_00c79ce8);
      }
    }
    iVar1 = FUN_00c79900(param_1);
    uVar2 = FUN_00416740(local_30[0]);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x298),0x468,(longlong)iVar1,uVar2);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

