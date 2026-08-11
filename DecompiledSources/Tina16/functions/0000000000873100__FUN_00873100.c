/* Ghidra address: 00873100 */
/* Ghidra symbol: FUN_00873100 */


undefined8 *
FUN_00873100(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  FUN_00419430(param_2,&DAT_0086e9b8);
  iVar1 = FUN_00873080(param_1,param_3,param_4,param_5);
  if (0 < iVar1) {
    FUN_00419260(param_2,&DAT_0086e9b8,1,(longlong)iVar1);
    (**(code **)(*param_1 + 0x18))(param_1,param_3 + param_4,param_5,*param_2,iVar1);
  }
  return param_2;
}

