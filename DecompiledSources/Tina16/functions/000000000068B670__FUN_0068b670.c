/* Ghidra address: 0068b670 */
/* Ghidra symbol: FUN_0068b670 */


void FUN_0068b670(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((char)param_1[0x92] == '\0') {
    (**(code **)(*param_1 + 0x268))(param_1,0xffffffff);
  }
  else {
    iVar1 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))();
    iVar2 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_0068bd10(param_1,iVar2,0);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

