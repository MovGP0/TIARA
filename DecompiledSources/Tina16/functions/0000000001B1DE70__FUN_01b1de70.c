/* Ghidra address: 01b1de70 */
/* Ghidra symbol: FUN_01b1de70 */


undefined8 FUN_01b1de70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(&DAT_01b1dedc,param_2,1);
  if (iVar1 == 0) {
    FUN_00414ad0(param_1,param_2);
  }
  else {
    FUN_00416cd0(param_1,3,&DAT_01b1deec,param_2,&DAT_01b1deec);
  }
  return param_1;
}

