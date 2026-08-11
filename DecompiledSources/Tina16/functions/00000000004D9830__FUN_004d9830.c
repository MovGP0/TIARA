/* Ghidra address: 004d9830 */
/* Ghidra symbol: FUN_004d9830 */


int FUN_004d9830(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*DAT_02011608 + 0x28))(DAT_02011608);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = (**(code **)(*DAT_02011608 + 0x30))(DAT_02011608,iVar1);
      if ((*(longlong *)(lVar2 + 8) == *param_2) && (*(longlong *)(lVar2 + 0x10) == param_2[1])) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return -1;
}

