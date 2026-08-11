/* Ghidra address: 013870b0 */
/* Ghidra symbol: FUN_013870b0 */


undefined8 FUN_013870b0(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_2 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(*param_2 + 0x30))(param_2,iVar4);
      if (*(char *)(lVar2 + 0x10) == param_3) {
        uVar3 = (**(code **)(*param_2 + 0x30))(param_2,iVar4);
        (**(code **)(*param_2 + 0x98))(param_2,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

