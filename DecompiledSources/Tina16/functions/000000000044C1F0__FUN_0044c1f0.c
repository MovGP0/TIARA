/* Ghidra address: 0044c1f0 */
/* Ghidra symbol: FUN_0044c1f0 */


void FUN_0044c1f0(undefined4 param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar1 = 1;
  param_2 = param_2 + 0x40;
  do {
    FUN_0044c9c0(local_30,param_1,iVar1 + 0x43,iVar1 + -1,&PTR_PTR_01dc13b8,0xb);
    FUN_00414ad0(param_2,local_30[0]);
    FUN_0044c9c0(&local_38,param_1,iVar1 + 0x37,iVar1 + -1,&PTR_PTR_01dc1418,0xb);
    FUN_00414ad0(param_2 + 0x60,local_38);
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 8;
  } while (iVar1 != 0xd);
  FUN_00414560(&local_38,2);
  return;
}

