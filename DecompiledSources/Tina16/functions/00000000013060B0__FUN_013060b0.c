/* Ghidra address: 013060b0 */
/* Ghidra symbol: FUN_013060b0 */


void FUN_013060b0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    iVar1 = FUN_00654c00(*(undefined8 *)(param_1 + 0x850));
    if (iVar1 != 0) {
      plVar2 = (longlong *)FUN_013070d0(param_1,*(undefined8 *)(param_1 + 0x850));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,param_2);
      }
      plVar2 = (longlong *)FUN_013071b0(param_1,*(undefined8 *)(param_1 + 0x850));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,param_2);
      }
      plVar2 = (longlong *)FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,param_2);
      }
      plVar3 = (longlong *)FUN_01307370(param_1,*(undefined8 *)(param_1 + 0x850));
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x128))(plVar3,param_2);
      }
      plVar2 = (longlong *)
               FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),plVar2,L"edit_TimeTo",param_4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,param_2);
      }
      plVar2 = (longlong *)
               FUN_01307290(param_1,*(undefined8 *)(param_1 + 0x850),plVar2,L"edit_Tol",param_4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x128))(plVar2,param_2);
      }
    }
  }
  return;
}

