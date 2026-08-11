/* Ghidra address: 007d7bf0 */
/* Ghidra symbol: FUN_007d7bf0 */


void FUN_007d7bf0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar1 = FUN_006146c0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      plVar2 = (longlong *)FUN_006146e0(param_1,iVar3);
      (**(code **)(*plVar2 + 8))(plVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0xd8),param_1);
  }
  return;
}

