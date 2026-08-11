/* Ghidra address: 01b47c60 */
/* Ghidra symbol: FUN_01b47c60 */


undefined8 FUN_01b47c60(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  FUN_00414480(param_2);
  if (-1 < param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1,0);
    if (param_3 < iVar1) {
      FUN_00414ad0(param_2,param_1[(longlong)(param_3 + 1) + 7]);
    }
  }
  return param_2;
}

