/* Ghidra address: 019733b0 */
/* Ghidra symbol: FUN_019733b0 */


void FUN_019733b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x200);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      *param_3 = (longlong)plVar1;
    }
    else {
      lVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1,param_2);
      *param_3 = lVar3;
    }
  }
  return;
}

