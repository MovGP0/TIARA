/* Ghidra address: 00872d30 */
/* Ghidra symbol: FUN_00872d30 */


undefined8 *
FUN_00872d30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_00419430(param_2,&DAT_0086e978);
  iVar1 = (**(code **)*param_1)(param_1,param_3,param_4);
  if (0 < iVar1) {
    FUN_00419260(param_2,&DAT_0086e978,1,(longlong)iVar1);
    (**(code **)(*param_1 + 8))(param_1,param_3,param_4,*param_2,iVar1);
  }
  return param_2;
}

