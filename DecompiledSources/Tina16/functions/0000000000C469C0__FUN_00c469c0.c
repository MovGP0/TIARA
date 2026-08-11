/* Ghidra address: 00c469c0 */
/* Ghidra symbol: FUN_00c469c0 */


undefined4 FUN_00c469c0(longlong param_1,int param_2,short param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 unaff_EDI;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    FUN_004b6f60(param_1,param_2);
  }
  else {
    iVar1 = param_2;
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = FUN_004b6da0(param_1);
        iVar1 = iVar1 + param_2;
      }
      else {
        iVar1 = in_EAX;
        if ((param_3 == 2) && (iVar1 = *(int *)(param_1 + 0x28) - param_2, iVar1 < 0)) {
          iVar1 = 0;
        }
      }
    }
    FUN_004b6f60(param_1,(longlong)iVar1 % *(longlong *)(param_1 + 0x28) & 0xffffffff,0);
  }
  return unaff_EDI;
}

