/* Ghidra address: 0074a490 */
/* Ghidra symbol: FUN_0074a490 */


void FUN_0074a490(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),iVar2);
      if (lVar1 == param_2) {
        FUN_0074a520(param_1,iVar2);
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0065b240(param_1,param_2);
  return;
}

