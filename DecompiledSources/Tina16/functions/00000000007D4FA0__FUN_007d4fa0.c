/* Ghidra address: 007d4fa0 */
/* Ghidra symbol: FUN_007d4fa0 */


undefined8 FUN_007d4fa0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  lVar3 = FUN_0060a050(param_1,iVar1 + -1);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x48))();
  iVar1 = iVar1 * iVar2;
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (*(char *)(lVar3 + 3 + (longlong)iVar2 * 4) != '\0') {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

