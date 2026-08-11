/* Ghidra address: 019a94f0 */
/* Ghidra symbol: FUN_019a94f0 */


undefined8 FUN_019a94f0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  FUN_0043f750(param_2,param_4);
  if (param_3 != (longlong *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x28))();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = (**(code **)(*param_3 + 0x30))(param_3,iVar4);
        if ((lVar3 != 0) &&
           (iVar2 = (**(code **)(*param_3 + 0x30))(param_3,iVar4), iVar2 == param_4)) {
          (**(code **)(*param_3 + 0x18))(param_3,param_2,iVar4);
          return param_2;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return param_2;
}

