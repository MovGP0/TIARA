/* Ghidra address: 00ac9d80 */
/* Ghidra symbol: FUN_00ac9d80 */


undefined8 FUN_00ac9d80(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((-1 < param_3) && (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), param_3 < iVar1)) {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
    FUN_00414ad0(param_2,*(undefined8 *)(lVar2 + 8));
    return param_2;
  }
  FUN_00414480(param_2);
  return param_2;
}

