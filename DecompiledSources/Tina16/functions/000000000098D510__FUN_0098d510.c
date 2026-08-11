/* Ghidra address: 0098d510 */
/* Ghidra symbol: FUN_0098d510 */


void FUN_0098d510(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (*(uint *)(lVar1 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8);
  cVar3 = (**(code **)(*plVar2 + 0x168))(plVar2);
  if (cVar3 == '\v') {
    lVar1 = *(longlong *)(param_1 + 0x48);
    if (*(uint *)(lVar1 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    FUN_00410f20(*(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_2 * 8));
  }
  FUN_00599670(*(longlong *)(param_1 + 0x48) + 8,param_2,5);
  return;
}

