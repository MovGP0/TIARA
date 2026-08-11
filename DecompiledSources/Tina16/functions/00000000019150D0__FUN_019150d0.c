/* Ghidra address: 019150d0 */
/* Ghidra symbol: FUN_019150d0 */


void FUN_019150d0(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                 char param_5)

{
  int iVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_3,L"Count",0);
  if (param_5 != '\0') {
    (**(code **)(*param_4 + 0x90))(param_4);
  }
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0043f750(&local_40,iVar2);
      FUN_00416ba0(&local_38,L"Items",local_40);
      (**(code **)(*param_2 + 0x10))(param_2,local_30,param_3,local_38,0);
      (**(code **)(*param_4 + 0x78))(param_4,local_30[0]);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

