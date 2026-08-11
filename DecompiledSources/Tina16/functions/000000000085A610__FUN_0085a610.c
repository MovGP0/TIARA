/* Ghidra address: 0085a610 */
/* Ghidra symbol: FUN_0085a610 */


undefined8 FUN_0085a610(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(&PTR_DAT_0085a680,param_2,1);
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    FUN_00450070(param_1,param_2,&PTR_DAT_0085a680,&DAT_0085a694,1);
  }
  return param_1;
}

