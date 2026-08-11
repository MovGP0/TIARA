/* Ghidra address: 01472aa0 */
/* Ghidra symbol: FUN_01472aa0 */


void FUN_01472aa0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  if ((-1 < iVar2) && (0 < *(int *)(param_1 + 0x720))) {
    plVar1 = *(longlong **)(param_1 + 0x708);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar3);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,*(undefined4 *)(param_1 + 0x720),local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

