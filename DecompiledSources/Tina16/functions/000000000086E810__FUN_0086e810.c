/* Ghidra address: 0086e810 */
/* Ghidra symbol: FUN_0086e810 */


undefined4
FUN_0086e810(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  if (*param_3 == 0) {
    FUN_00419430(param_3,&DAT_0086e978);
  }
  if (param_4 < 0) {
    param_4 = (**(code **)*param_2)(param_2);
    iVar1 = FUN_004b6da0(param_2);
    param_4 = param_4 - iVar1;
  }
  if (param_4 != 0) {
    lVar3 = 0;
    if (*param_3 != 0) {
      lVar3 = *(longlong *)(*param_3 + -8);
    }
    if (lVar3 < param_5 + param_4) {
      FUN_00419260(param_3,&DAT_0086e978,1,(longlong)(param_5 + param_4));
    }
    uVar2 = (**(code **)(*param_2 + 0x18))(param_2,*param_3 + (longlong)param_5,param_4);
  }
  return uVar2;
}

