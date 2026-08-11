/* Ghidra address: 0041d5d0 */
/* Ghidra symbol: FUN_0041d5d0 */


int FUN_0041d5d0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar5 = (int)lVar3 + -1;
  if (iVar5 == 0) {
    do {
      uVar2 = *(uint *)(param_1 + 1);
      LOCK();
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar2 == uVar4) {
        *(uint *)(param_1 + 1) = uVar2 | 0x80000000;
        uVar4 = uVar2;
      }
      UNLOCK();
    } while (uVar4 != uVar2);
    (**(code **)(*param_1 + -0x20))(param_1,1);
  }
  return iVar5;
}

