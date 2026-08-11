/* Ghidra address: 01d322a0 */
/* Ghidra symbol: FUN_01d322a0 */


int FUN_01d322a0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_3c = 4;
  iVar1 = (**(code **)(*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_30,iVar3);
      FUN_004168e0(&local_38,local_30[0]);
      iVar2 = FUN_01d31290(local_38);
      local_3c = local_3c + iVar2 + 4;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(&local_38);
  FUN_00414480(local_30);
  return local_3c;
}

