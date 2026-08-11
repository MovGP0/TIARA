/* Ghidra address: 0181aa50 */
/* Ghidra symbol: FUN_0181aa50 */


void FUN_0181aa50(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00418c90();
  iVar3 = 0;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    do {
      plVar1 = *(longlong **)(param_1[0xda] + (longlong)iVar3 * 8);
      (**(code **)(*plVar1 + 0x130))(plVar1,param_2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0181b150(param_1,0);
  (**(code **)(*param_1 + 0x2f8))(param_1);
  if (param_1[0xc0] != 0) {
    (*(code *)param_1[0xc0])(param_1[0xc1],param_1);
  }
  return;
}

