/* Ghidra address: 008219e0 */
/* Ghidra symbol: FUN_008219e0 */


void FUN_008219e0(longlong param_1,undefined4 param_2,char param_3,byte param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4a0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = FUN_00821960(param_1,iVar3);
      if (((cVar1 != '\0') || (cVar1 = FUN_00821960(param_1,iVar3), (param_4 & cVar1 == '\0') != 0))
         && ((param_3 != '\0' || (cVar1 = FUN_008219a0(param_1,iVar3), cVar1 != '\x02')))) {
        FUN_00821830(param_1,iVar3,param_2);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

