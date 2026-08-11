/* Ghidra address: 00cd1a00 */
/* Ghidra symbol: FUN_00cd1a00 */


int FUN_00cd1a00(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    while (iVar1 = (**(code **)PTR_DAT_020052c0)
                             (*(undefined8 *)(param_1 + 0x18),param_2 + param_3,param_4), 0 < iVar1)
    {
      iVar3 = iVar3 + iVar1;
      param_3 = param_3 + iVar1;
      param_4 = param_4 - iVar1;
      if (param_4 < 1) {
        return iVar3;
      }
    }
    iVar2 = FUN_00cd1040(param_1,iVar1);
  } while ((iVar2 == 2) || (iVar2 == 3));
  if (iVar2 == 6) {
    iVar1 = 0;
  }
  return iVar1;
}

