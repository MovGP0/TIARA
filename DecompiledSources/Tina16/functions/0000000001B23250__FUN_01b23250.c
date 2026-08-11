/* Ghidra address: 01b23250 */
/* Ghidra symbol: FUN_01b23250 */


void FUN_01b23250(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_2c [3];
  
  local_40[0] = 0;
  local_48 = 0;
  local_2c[0] = (**(code **)(*param_2 + 0x28))(param_2);
  FUN_004b89e0(param_1,local_2c,4);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_40,iVar2);
      FUN_004168e0(&local_48,local_40[0]);
      FUN_01b20e90(local_48,param_1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414520(&local_48);
  FUN_00414480(local_40);
  return;
}

