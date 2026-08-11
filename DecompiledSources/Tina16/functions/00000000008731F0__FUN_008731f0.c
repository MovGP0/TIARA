/* Ghidra address: 008731f0 */
/* Ghidra symbol: FUN_008731f0 */


undefined8 *
FUN_008731f0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4);
  if (0 < iVar1) {
    FUN_00419260(param_2,&DAT_0086e9b8,1,(longlong)iVar1);
    (**(code **)(*param_1 + 0x18))(param_1,param_3,param_4,*param_2,iVar1);
  }
  return param_2;
}

