/* Ghidra address: 006fa540 */
/* Ghidra symbol: FUN_006fa540 */


void FUN_006fa540(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x321) != param_2) {
    *(char *)(param_1 + 0x321) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x340);
    if (lVar1 != 0) {
      iVar2 = FUN_006fa830();
      FUN_0064fca0(lVar1,0x406,(longlong)iVar2,(longlong)param_2);
    }
  }
  return;
}

