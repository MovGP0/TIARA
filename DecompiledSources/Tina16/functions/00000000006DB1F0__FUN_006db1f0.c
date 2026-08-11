/* Ghidra address: 006db1f0 */
/* Ghidra symbol: FUN_006db1f0 */


void FUN_006db1f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x4a0) == '\0')) {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_041b2403(uVar3,0x1200,0,0);
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_0065b870(param_1);
        thunk_FUN_041b2403(uVar3,0x1202,0,0);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10);
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_006db060(param_1,0x120a,iVar4);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

