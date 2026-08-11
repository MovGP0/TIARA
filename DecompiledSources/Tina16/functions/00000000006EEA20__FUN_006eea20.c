/* Ghidra address: 006eea20 */
/* Ghidra symbol: FUN_006eea20 */


void FUN_006eea20(longlong param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_006eed60(*(undefined8 *)(param_1 + 0x78));
  cVar2 = FUN_006f37d0(lVar3);
  if (cVar2 == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 < *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x500) + 0x10) + 0x10);
  }
  if (bVar1) {
    lVar4 = FUN_006f6ca0(lVar3,param_2);
    if (*(int *)(lVar4 + 0x38) == -1) {
      FUN_006f7c40(lVar3,param_2);
    }
  }
  return;
}

