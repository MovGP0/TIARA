/* Ghidra address: 005582e0 */
/* Ghidra symbol: FUN_005582e0 */


undefined8 * FUN_005582e0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((uVar1 & 0x20) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((uVar1 & 2) == 0) {
      uVar1 = (**(code **)(*param_1 + 0x18))(param_1);
      if ((uVar1 & 1) == 0) {
        FUN_00414480(param_2);
      }
      else {
        FUN_00414ad0(param_2,L"var ");
      }
    }
    else {
      FUN_00414ad0(param_2,L"const ");
    }
  }
  else {
    FUN_00414ad0(param_2,L"out ");
  }
  (**(code **)(*param_1 + 0x10))(param_1,local_20);
  FUN_00416ad0(param_2,local_20[0]);
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 != 0) {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*plVar3 + -0x60))(plVar3,&local_28);
    FUN_00416cd0(param_2,3,*param_2,&LAB_00558484,local_28);
  }
  FUN_00414560(&local_28,2);
  return param_2;
}

