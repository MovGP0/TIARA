/* Ghidra address: 00a98ac0 */
/* Ghidra symbol: FUN_00a98ac0 */


void FUN_00a98ac0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),iVar2);
      (**(code **)(*plVar1 + 0x178))(plVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

