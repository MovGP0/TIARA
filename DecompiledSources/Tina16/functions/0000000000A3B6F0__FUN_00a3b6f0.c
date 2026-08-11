/* Ghidra address: 00a3b6f0 */
/* Ghidra symbol: FUN_00a3b6f0 */


void FUN_00a3b6f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0x20))(param_2,&DAT_01e71808,8);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x160) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_00a33e20(*(undefined8 *)(param_1 + 0x160),iVar2);
      (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

