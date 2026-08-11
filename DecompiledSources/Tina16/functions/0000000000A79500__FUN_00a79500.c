/* Ghidra address: 00a79500 */
/* Ghidra symbol: FUN_00a79500 */


int FUN_00a79500(undefined8 param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (DAT_02014718 == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = FUN_00a79720(DAT_02014718,param_1);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0xb4) != '\0')) {
      bVar1 = 0;
    }
    else {
      bVar1 = 1;
    }
    iVar2 = -(uint)bVar1;
  }
  return iVar2;
}

