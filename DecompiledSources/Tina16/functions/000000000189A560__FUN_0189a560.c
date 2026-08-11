/* Ghidra address: 0189a560 */
/* Ghidra symbol: FUN_0189a560 */


void FUN_0189a560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  *(longlong *)(param_1 + 0x4c0) = param_2;
  FUN_0064cc50(param_1,*(int *)(param_2 + 0x90) + 8);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x4b8),iVar2);
      (**(code **)(*plVar1 + 400))
                (plVar1,(int)plVar1[0x12],*(undefined4 *)((longlong)plVar1 + 0x94),
                 *(undefined4 *)(param_1 + 0x9c),*(undefined4 *)(param_1 + 0x9c));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

