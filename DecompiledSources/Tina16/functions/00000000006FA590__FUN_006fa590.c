/* Ghidra address: 006fa590 */
/* Ghidra symbol: FUN_006fa590 */


void FUN_006fa590(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 800) != param_2) {
    if (param_2 != '\0') {
      FUN_006fa3b0(param_1,0);
    }
    *(char *)(param_1 + 800) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x340);
    if (lVar1 != 0) {
      iVar2 = FUN_006fa830(param_1);
      FUN_0064fca0(lVar1,0x405,(longlong)iVar2,(longlong)param_2);
    }
  }
  return;
}

