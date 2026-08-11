/* Ghidra address: 00c1aba0 */
/* Ghidra symbol: FUN_00c1aba0 */


void FUN_00c1aba0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar2);
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

