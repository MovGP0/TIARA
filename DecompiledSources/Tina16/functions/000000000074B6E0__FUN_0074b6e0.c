/* Ghidra address: 0074b6e0 */
/* Ghidra symbol: FUN_0074b6e0 */


void FUN_0074b6e0(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  FUN_0065a280(param_1);
  iVar4 = *(int *)(param_1[0x93] + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar2 = (longlong *)FUN_004aeac0(param_1[0x93],iVar3);
      uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
      (**(code **)(*plVar2 + 0x128))(plVar2,uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

