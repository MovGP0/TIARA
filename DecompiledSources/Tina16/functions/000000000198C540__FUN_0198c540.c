/* Ghidra address: 0198c540 */
/* Ghidra symbol: FUN_0198c540 */


bool FUN_0198c540(longlong param_1,char param_2,int *param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  *param_3 = *(int *)(param_1 + 0x10) + -1;
  while ((bVar3 == false && (-1 < *param_3))) {
    lVar2 = FUN_00b94e60(param_1,*param_3);
    cVar1 = FUN_0198a580(lVar2);
    if (cVar1 == '\b') {
      bVar3 = *(char *)(*(longlong *)(lVar2 + 0x28) + 0x98) == param_2;
    }
    if (bVar3 == false) {
      *param_3 = *param_3 + -1;
    }
  }
  return bVar3;
}

