/* Ghidra address: 005b2870 */
/* Ghidra symbol: FUN_005b2870 */


void FUN_005b2870(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0xb8));
  if (iVar2 != 0) {
    FUN_00414ad0(param_1 + 0xb8,param_2);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x88))(plVar1);
    }
  }
  return;
}

