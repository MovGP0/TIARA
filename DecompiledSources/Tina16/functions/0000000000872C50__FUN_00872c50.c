/* Ghidra address: 00872c50 */
/* Ghidra symbol: FUN_00872c50 */


undefined8 *
FUN_00872c50(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_00419430(param_2,&DAT_0086e978);
  iVar1 = FUN_00872b50(param_1,param_3,param_4,param_5);
  if (0 < iVar1) {
    FUN_00419260(param_2,&DAT_0086e978,1,(longlong)iVar1);
    (**(code **)(*param_1 + 8))(param_1,param_3 + (longlong)param_4 * 2,param_5,*param_2,iVar1);
  }
  return param_2;
}

