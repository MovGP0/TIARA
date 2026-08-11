/* Ghidra address: 0181b780 */
/* Ghidra symbol: FUN_0181b780 */


void FUN_0181b780(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x508) = param_2;
  iVar2 = FUN_00418c90();
  iVar3 = 0;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + (longlong)iVar3 * 8);
      (**(code **)(*plVar1 + 0x130))(plVar1,param_1);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    (**(code **)(param_1 + 0x5d0))(*(undefined8 *)(param_1 + 0x5d8),param_1);
  }
  return;
}

