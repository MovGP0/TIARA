/* Ghidra address: 006fabb0 */
/* Ghidra symbol: FUN_006fabb0 */


void FUN_006fabb0(longlong *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  
  if ((char)param_1[0x67] != param_2) {
    *(char *)(param_1 + 0x67) = param_2;
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if ((cVar1 == '\0') && (param_1[0x68] != 0)) {
      if ((char)param_1[0x67] == '\0') {
        iVar2 = FUN_006fa830(param_1);
        FUN_0064fca0(param_1[0x68],0x401,(longlong)iVar2,0);
      }
      else {
        iVar2 = FUN_006fa830(param_1);
        FUN_0064fca0(param_1[0x68],0x401,(longlong)iVar2,1);
      }
    }
  }
  return;
}

