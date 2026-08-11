/* Ghidra address: 00ce9690 */
/* Ghidra symbol: FUN_00ce9690 */


int FUN_00ce9690(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  if (param_3 <= iVar3) {
    iVar3 = (iVar3 - param_3) + 1;
    do {
      lVar2 = FUN_00ce8fd0(param_1,param_3);
      cVar1 = FUN_00879070(*(undefined8 *)(lVar2 + 0x30),param_2);
      if (cVar1 != '\0') {
        return param_3;
      }
      param_3 = param_3 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

