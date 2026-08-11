/* Ghidra address: 010a84e0 */
/* Ghidra symbol: FUN_010a84e0 */


void FUN_010a84e0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(*param_1 + 0xd8))(param_1,local_res10[0]);
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar2);
      FUN_00450070(local_40,local_30[0],&DAT_010a8620,L"      ",1);
      FUN_00414b50(local_30,local_40[0]);
      (**(code **)(*param_1 + 0x40))(param_1,iVar2,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return;
}

