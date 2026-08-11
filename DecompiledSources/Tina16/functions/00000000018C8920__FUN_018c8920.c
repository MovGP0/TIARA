/* Ghidra address: 018c8920 */
/* Ghidra symbol: FUN_018c8920 */


void FUN_018c8920(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x1d0))(plVar1,param_2);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

