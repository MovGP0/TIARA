/* Ghidra address: 0041c140 */
/* Ghidra symbol: FUN_0041c140 */


void FUN_0041c140(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*param_1 = 0, 0 < *(int *)(lVar3 + -0xc))) {
    LOCK();
    piVar1 = (int *)(lVar3 + -0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FUN_00407d90(lVar3 + -0x10);
    }
  }
  return;
}

