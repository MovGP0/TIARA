/* Ghidra address: 01d31f80 */
/* Ghidra symbol: FUN_01d31f80 */


int FUN_01d31f80(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_34;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_34 = 4;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      iVar2 = FUN_01d31350(local_30[0]);
      if (0x100 < iVar2) {
        iVar2 = 0x100;
      }
      local_34 = local_34 + iVar2 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return local_34;
}

