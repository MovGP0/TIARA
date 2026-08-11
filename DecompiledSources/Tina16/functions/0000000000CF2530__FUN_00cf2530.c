/* Ghidra address: 00cf2530 */
/* Ghidra symbol: FUN_00cf2530 */


void FUN_00cf2530(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  if (0 < iVar1) {
    iVar1 = FUN_00874bb0(param_2,&PTR_u_7bit_01eb1c30,4,0);
    if (iVar1 == -1) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004970);
      uVar2 = FUN_0086dfd0(&PTR_FUN_00cf0360,1,local_10);
      FUN_004134c0(uVar2);
    }
  }
  FUN_00414ad0(param_1 + 0x30,param_2);
  FUN_00414480(&local_10);
  return;
}

