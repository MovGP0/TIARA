/* Ghidra address: 00872f70 */
/* Ghidra symbol: FUN_00872f70 */


undefined8 *
FUN_00872f70(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  FUN_00419430(param_2,&DAT_0086e978);
  lVar2 = FUN_00872a40(param_3,param_4,param_5);
  if (lVar2 != 0) {
    iVar1 = (**(code **)*param_1)(param_1,lVar2,param_5);
    if (0 < iVar1) {
      FUN_00419260(param_2,&DAT_0086e978,1,(longlong)iVar1);
      (**(code **)(*param_1 + 8))(param_1,lVar2,param_5,*param_2,iVar1);
    }
  }
  return param_2;
}

