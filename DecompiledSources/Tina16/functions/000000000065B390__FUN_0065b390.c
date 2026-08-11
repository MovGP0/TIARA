/* Ghidra address: 0065b390 */
/* Ghidra symbol: FUN_0065b390 */


void FUN_0065b390(longlong param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  if (lVar1 == 0) {
    if (*(longlong *)(param_1 + 0x468) != 0) {
      thunk_FUN_041cc6e2(*(longlong *)(param_1 + 0x468),
                         *(undefined2 *)(&DAT_01df73b8 + (ulonglong)param_2 * 2),0,0,0,0,3);
    }
  }
  else {
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(longlong *)(lVar1 + 0x378) + 0x10) + -1;
    }
    iVar3 = 0;
    if (*(longlong *)(lVar1 + 0x370) != 0) {
      iVar3 = *(int *)(*(longlong *)(lVar1 + 0x370) + 0x10);
    }
    FUN_0065b270(param_1,iVar3 + iVar2);
  }
  return;
}

