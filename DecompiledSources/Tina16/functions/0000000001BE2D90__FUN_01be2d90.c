/* Ghidra address: 01be2d90 */
/* Ghidra symbol: FUN_01be2d90 */


undefined8 FUN_01be2d90(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2e8))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar3);
      if ((lVar2 != 0) &&
         (lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar3), *(char *)(lVar2 + 0x344) != '\0'))
      {
        lVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar3);
        return *(undefined8 *)(lVar2 + 800);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

