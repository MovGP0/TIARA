/* Ghidra address: 0044c0e0 */
/* Ghidra symbol: FUN_0044c0e0 */


void FUN_0044c0e0(undefined4 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  iVar1 = 1;
  param_2 = param_2 + 0x100;
  do {
    iVar2 = (iVar1 + 5) % 7;
    FUN_0044c9c0(&local_30,param_1,iVar2 + 0x31,iVar1 + -1,&PTR_PTR_01dc1478,6);
    FUN_00414ad0(param_2,local_30);
    FUN_0044c9c0(&local_38,param_1,iVar2 + 0x2a,iVar1 + -1,&PTR_PTR_01dc14b0,6);
    FUN_00414ad0(param_2 + 0x38,local_38);
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 8;
  } while (iVar1 != 8);
  FUN_00414560(&local_38,2);
  return;
}

