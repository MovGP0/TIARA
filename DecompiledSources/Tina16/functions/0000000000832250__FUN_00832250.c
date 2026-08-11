/* Ghidra address: 00832250 */
/* Ghidra symbol: FUN_00832250 */


undefined2 FUN_00832250(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  
  uVar3 = DAT_01e18904;
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (3 < iVar2) {
    iVar2 = 0;
    if (param_1 != 0) {
      iVar2 = *(int *)(param_1 + -4);
    }
    cVar1 = FUN_008317e0(param_1,iVar2 + -1);
    if (cVar1 == '\x06') {
      iVar2 = 0;
      if (param_1 != 0) {
        iVar2 = *(int *)(param_1 + -4);
      }
      cVar1 = FUN_008317e0(param_1,iVar2 + -2);
      if (cVar1 == '\x06') {
        bVar4 = true;
      }
      else {
        iVar2 = 0;
        if (param_1 != 0) {
          iVar2 = *(int *)(param_1 + -4);
        }
        cVar1 = FUN_008317e0(param_1,iVar2 + -3);
        bVar4 = cVar1 == '\x06';
      }
      if (bVar4) {
        iVar2 = 0;
        if (param_1 != 0) {
          iVar2 = *(int *)(param_1 + -4);
        }
        uVar3 = *(undefined2 *)(param_1 + (longlong)(iVar2 + -1) * 2);
      }
    }
  }
  return uVar3;
}

