/* Ghidra address: 00b1a680 */
/* Ghidra symbol: FUN_00b1a680 */


void FUN_00b1a680(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  do {
    lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      (**(code **)(*plVar2 + -0x20))(plVar2,1);
      FUN_004aedb0(*(undefined8 *)(param_1 + 8),iVar3,0);
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

