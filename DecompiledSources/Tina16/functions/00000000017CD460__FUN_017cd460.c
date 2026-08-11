/* Ghidra address: 017cd460 */
/* Ghidra symbol: FUN_017cd460 */


undefined8 FUN_017cd460(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_00414480(param_1);
  if (param_2 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_2 + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        iVar2 = (**(code **)(*param_2 + 0x30))(param_2,iVar3);
        if (iVar2 == param_3) {
          (**(code **)(*param_2 + 0x18))(param_2,param_1,iVar3);
          return param_1;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return param_1;
}

