/* Ghidra address: 00c5a130 */
/* Ghidra symbol: FUN_00c5a130 */


void FUN_00c5a130(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  FUN_006586f0(param_1);
  iVar2 = FUN_00c5a220(param_1);
  if (*(int *)(param_1 + 0x9c) < iVar2) {
    FUN_0064cc50(param_1,iVar2);
  }
  else if (*(longlong *)(param_1 + 0x4e8) != 0) {
    if ((*PTR_DAT_02003210 == '\0') || (*(char *)(param_1 + 0x390) == '\0')) {
      plVar1 = *(longlong **)(param_1 + 0x4e8);
      (**(code **)(*plVar1 + 400))
                (plVar1,*(int *)(param_1 + 0x98) - (int)plVar1[0x13],1,(int)plVar1[0x13],
                 *(int *)(param_1 + 0x9c) + -3);
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x4e8);
      (**(code **)(*plVar1 + 400))
                (plVar1,(*(int *)(param_1 + 0x98) - (int)plVar1[0x13]) + -5,0,(int)plVar1[0x13],
                 *(int *)(param_1 + 0x9c) + -5);
    }
    FUN_00c5a090(param_1);
  }
  return;
}

