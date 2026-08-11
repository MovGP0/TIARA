/* Ghidra address: 019a5460 */
/* Ghidra symbol: FUN_019a5460 */


void FUN_019a5460(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar2 = FUN_0198d420(param_1,iVar4);
      cVar1 = FUN_0198a580(uVar2);
      if (cVar1 == '\x05') {
        plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
        (**(code **)(*plVar3 + 0xa8))(plVar3,*(undefined8 *)(param_1 + 0x210));
        plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
        (**(code **)(*plVar3 + 0xa0))(plVar3,*(undefined8 *)(param_1 + 0x210));
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

